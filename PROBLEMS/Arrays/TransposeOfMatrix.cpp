#include <iostream>
#include <climits>
using namespace std;

void printArr(int arr[][3],int row, int col) {
    for(int i =0; i < 3; i++) {
        for(int j=0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void doTranspose(int arr[][3],int row, int col,int transpose[][3]) {
    for(int i=0; i < 3; i++) {
        for(int j=0; j < 3; j++) {
            transpose[j][i] = arr[i][j];
        }
    }
}

int main() {
    
    int arr[3][3] = {{2,4,6},
                    {1,3,5},
                    {9,11,13}};
                    
    int transpose[3][3];
    doTranspose(arr,3,3,transpose);
    printArr(arr,3,3);
    cout << endl;
    printArr(transpose,3,3);
}