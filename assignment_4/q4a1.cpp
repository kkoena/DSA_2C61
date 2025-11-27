//1-> generate all binary no. from 1 to n using queue
#include <iostream>
#include <queue>
using namespace std;

void generateBinary(int n) {
    queue<string> q;

    // Start with "1"
    q.push("1");

    for (int i = 1; i <= n; i++) {
        string current = q.front();
        q.pop();

        // Print the current binary number
        cout << current << " ";

        // Generate next two binaries
        q.push(current + "0");
        q.push(current + "1");
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Binary numbers from 1 to " << n << ": ";
    generateBinary(n);

    return 0;
}

