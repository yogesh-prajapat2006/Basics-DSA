#include<iostream>
using namespace std;

void spiralprinting(int arr[3][3], int row, int col) {
    int top = 0, bottom = row - 1;
    int left = 0, right = col - 1;

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;

        // Print right column
        for (int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;

        // Print bottom row (if any left)
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << arr[bottom][i] << " ";
            bottom--;
        }

        // Print left column (if any left)
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }
}

int main() {
    int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

    cout << "Matrix:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nSpiral order:\n";
    spiralprinting(arr, 3, 3);

    return 0;
}


// 1 2 3 4 5 6 7 8 9 
// 1 2 3 
// 4 5 6
// 7 8 9

// 1 2 3
// 6 9 8
// 7 4 5