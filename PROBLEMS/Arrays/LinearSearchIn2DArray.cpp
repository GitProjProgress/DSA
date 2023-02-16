#include <iostream>
using namespace std;

void linearSearch(int arr[][3],int row, int col, int ele) {
    bool found = false;
    for(int i=0; i < 3; i++) {
        for(int j=0; j < 3; j++) {
            if(arr[i][j] == ele){
                found = true;
                cout << "Element found at index: [" <<i <<"][" <<j<<"]";
                return;
            }
        }
    }
    cout << "Element not found";
}

int main() {
    
    int arr[3][3] = {{5,6,8},
                    {7,2,4},
                    {1,6,9}};
                    
                    
    // linear search in 2d array
    linearSearch(arr,3,3,17);
    
}