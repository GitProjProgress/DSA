#include <iostream>
#include <climits>
using namespace std;

int findMax(int arr[][3],int row, int col) {
    int max = INT_MIN;
    for(int i=0; i < 3; i++) {
        for(int j=0; j < 3; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int findMin(int arr[][3],int row, int col) {
    int min = INT_MAX;
    for(int i=0; i < 3; i++) {
        for(int j=0; j < 3; j++) {
            if(arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    return min;
}

int main() {
    
    int arr[3][3] = {{5,6,9},
                    {7,1,2},
                    {4,3,12}};
                    
                    
    // max and min
    cout << "Max is : "<<findMax(arr,3,3) << endl;
    cout << "Min is : "<<findMin(arr,3,3);
}