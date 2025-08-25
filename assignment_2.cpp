 
/*
Name: Koena <3
Roll No: 1024030831
Assignment: 2
*/

#include <iostream>
#include <string>
#include <array>
using namespace std;

//
// 1) Linear & Binary Search
//
/*
int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

int main() {
    int n;
    cout << "Enter number to search (1 to 15): ";
    cin >> n;

    // Linear search
    for (int i = 0; i < 15; i++) {
        if (arr[i] == n) {
            cout << "Element found at position " << i+1 << endl;
        }
    }

    // Binary search
    int low = 0, high = 14;
    while (low <= high) {
        int mid = low + (high - low)/2;
        if (arr[mid] == n) {
            cout << "Element found at position " << mid+1 << endl;
            return 0;
        }
        else if (arr[mid] > n) high = mid - 1;
        else low = mid + 1;
    }
    cout << "Element not found" << endl;
    return 0;
}
*/

//
// 2) Bubble Sort
//
/*
int arr[7] = {90,34,25,12,22,11,64};

int main() {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < 7; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
*/

//
// 3) Find Missing Number
//
/*
int arr[9] = {1,2,4,5,6,7,8,9,10};

int main() {
    int expected = 1;
    for (int i = 0; i < 9; i++) {
        if (arr[i] != expected) {
            cout << expected << " is missing" << endl;
            return 0;
        }
        expected++;
    }
    return 0;
}
*/

//
// 4) String Operations
//
/*
string x = "hello";
string y = "bye";
string vowels = "aeiouAEIOU";

int main() {
    // Concatenation
    cout << x + " " + y << endl;

    // Reverse
    int n = x.length();
    for (int i = 0; i < n/2; i++) swap(x[i], x[n-1-i]);
    cout << "Reversed: " << x << endl;

    // Remove vowels
    for (int i = 0; i < x.length(); i++) {
        for (int j = 0; j < vowels.length(); j++) {
            if (x[i] == vowels[j]) {
                x.erase(i,1);
                i--;
                break;
            }
        }
    }
    cout << "Without vowels: " << x << endl;
    return 0;
}
*/

//
// 5) Diagonal Matrix
//
/*
int main() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    cout << "Diagonal Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << arr[i] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

//
// 6) Tri-diagonal, Lower-triangular, Upper-triangular
// (each stored in 1D array and displayed as 2D)
//
/* 
// Tri-diagonal example shown here
int main() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;
    int arr[3*n-2];
    for (int i = 0; i < 3*n-2; i++) arr[i] = i+1;
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (abs(i-j) <= 1) cout << arr[k++] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

//
// 7) Sparse Matrix (Transpose, Addition, Multiplication)
//
/*
int main() {
    int arr1[7][3] = {
        {4,4,6},
        {0,0,13},{0,3,17},
        {1,2,78},{2,1,90},
        {3,0,10},{3,1,190}
    };
    int arr2[9][3] = {
        {4,4,8},
        {0,2,13},{1,1,17},{1,2,20},
        {1,3,88},{2,1,70},
        {3,0,110},{3,2,200}
    };

    int A[4][4] = {0}, B[4][4] = {0};
    // Convert to full matrices
    for (int i = 1; i < 7; i++) A[arr1[i][0]][arr1[i][1]] = arr1[i][2];
    for (int i = 1; i < 9; i++) B[arr2[i][0]][arr2[i][1]] = arr2[i][2];

    // Print matrices
    cout << "Matrix A:" << endl;
    for (int i=0;i<4;i++){for(int j=0;j<4;j++)cout<<A[i][j]<<" ";cout<<endl;}
    cout << "Matrix B:" << endl;
    for (int i=0;i<4;i++){for(int j=0;j<4;j++)cout<<B[i][j]<<" ";cout<<endl;}

    return 0;
}
*/

//
// 8) Inversion Count
//
/*
int main() {
    int x[10] = {1,2,13,4,5,6,217,8,9,10};
    int count = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = i+1; j < 10; j++) {
            if (x[i] > x[j]) count++;
        }
    }
    cout << "Number of inversions: " << count << endl;
    return 0;
}
*/

//
// 9) Count Distinct Elements
//
/*
int arr[] = {1,2,2,3,4,4,5};
int n = sizeof(arr)/sizeof(arr[0]);

int main() {
    int distinctCount = 0;
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) distinctCount++;
    }
    cout << "Number of distinct elements: " << distinctCount << endl;
    return 0;
}
*/

//end//
//Koena - 1024030831
