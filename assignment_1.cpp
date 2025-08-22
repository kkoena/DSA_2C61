/*
Name: Koena <3
Roll No: 1024030831
Assignment: 1
*/

#include <iostream>
using namespace std;

//
// 1) Menu-driven program for array operations
//
/*
char cont = 'y';
string options[] = {"create","display","insert","delete","search","exit"};
int opt;
int arr[100];
int arrSize = 0;

int main() {
    while (cont == 'y') {
        cout << "\nChoose an operation:" << endl;
        for (int i = 0; i < 6; i++) {
            cout << i+1 << " : " << options[i] << endl;
        }
        cin >> opt;

        if (opt < 1 || opt > 6) {
            cout << "Invalid input!" << endl;
        }
        else if (opt == 1) {
            cout << "Enter size of array: ";
            cin >> arrSize;
            cout << "Enter " << arrSize << " elements:" << endl;
            for (int i = 0; i < arrSize; i++) {
                cin >> arr[i];
            }
        }
        else if (opt == 2) {
            cout << "Array elements: ";
            for (int i = 0; i < arrSize; i++) cout << arr[i] << " ";
            cout << endl;
        }
        else if (opt == 3) {
            int val, pos;
            cout << "Enter position to insert: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;
            for (int i = arrSize; i > pos; i--) arr[i] = arr[i-1];
            arr[pos] = val;
            arrSize++;
        }
        else if (opt == 4) {
            int pos;
            cout << "Enter position to delete: ";
            cin >> pos;
            for (int i = pos; i < arrSize; i++) arr[i] = arr[i+1];
            arrSize--;
        }
        else if (opt == 5) {
            int val, found = -1;
            cout << "Enter value to search: ";
            cin >> val;
            for (int i = 0; i < arrSize; i++) {
                if (arr[i] == val) {
                    found = i;
                    break;
                }
            }
            if (found != -1) cout << "Found at position " << found+1 << endl;
            else cout << "Not found" << endl;
        }
        else if (opt == 6) {
            cout << "Exiting program..." << endl;
            cont = 'n';
        }
    }
}
*/

//
// 2) Remove duplicates from array
//
/*
int nums[] = {1,2,3,1,2,4,5,5,3,1,6,5,2,4};

void shiftLeft(int arr[], int &n, int idx) {
    for (int i = idx; i < n-1; i++) arr[i] = arr[i+1];
    n--;
}

int main() {
    int n = sizeof(nums)/sizeof(nums[0]);
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (nums[i] == nums[j]) {
                shiftLeft(nums, n, j);
                j--; // adjust index
            }
        }
    }
    cout << "Array without duplicates: ";
    for (int i = 0; i < n; i++) cout << nums[i] << " ";
    cout << endl;
}
*/

//
// 3) Predict the output
//
/*
int arr[5] = {1,2,3,4,5};

int main() {
    int arr2[5] = {1};   // rest auto-initialized to 0
    for (int i = 0; i < 5; i++) {
        cout << arr2[i];
    }
    return 0;
}
// Output: 10000
*/

//
// 4a) Reverse an array
//
/*
int arr[] = {1,2,3,4,5};

int main() {
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n/2; i++) {
        swap(arr[i], arr[n-1-i]);
    }
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}
*/

//
// 4b) Matrix multiplication
//
/*
int A[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
int B[3][3] = {{2,2,2},{2,2,2},{2,2,2}};
int C[3][3];

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Result matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}
*/

//
// 4c) Transpose of a matrix
//
/*
int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    cout << "Transpose:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
*/

//
// 5) Row sums and column sums
//
/*
int grid[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

int main() {
    int rowSum[3] = {0}, colSum[3] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rowSum[i] += grid[i][j];
            colSum[j] += grid[i][j];
        }
    }
    cout << "Row sums: ";
    for (int i = 0; i < 3; i++) cout << rowSum[i] << " ";
    cout << endl;

    cout << "Column sums: ";
    for (int i = 0; i < 3; i++) cout << colSum[i] << " ";
    cout << endl;
}
*/


//end//
//Koena - 1024030831