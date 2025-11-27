#include <iostream>
#include <queue>
using namespace std;

// Function to find index of minimum element within unsorted part of queue
int minIndex(queue<int> &q, int sortIndex) {
    int min_index = -1;
    int min_val = INT_MAX;
    int n = q.size();

    for (int i = 0; i < n; i++) {
        int curr = q.front();
        q.pop();

        // If current element is smaller than min and index <= sortIndex
        if (curr <= min_val && i <= sortIndex) {
            min_index = i;
            min_val = curr;
        }
        q.push(curr);
    }
    return min_index;
}

// Move element at min_index to rear
void insertMinToRear(queue<int> &q, int min_index) {
    int min_val;
    int n = q.size();

    for (int i = 0; i < n; i++) {
        int curr = q.front();
        q.pop();

        if (i != min_index) {
            q.push(curr);
        } else {
            min_val = curr;
        }
    }
    q.push(min_val);
}

// Function to sort queue
void sortQueue(queue<int> &q) {
    for (int i = 1; i <= q.size(); i++) {
        int min_index = minIndex(q, q.size() - i);
        insertMinToRear(q, min_index);
    }
}

int main() {
    queue<int> q;
    q.push(11);
    q.push(5);
    q.push(4);
    q.push(21);

    cout << "Original Queue: ";
    queue<int> temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    sortQueue(q);

    cout << "Sorted Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
 