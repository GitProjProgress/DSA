#include <iostream>
using namespace std;

int main() {
    
    int arr[3][3];
                    
    // taking columnwise input
    for(int i=0; i < 3; i++) {
        for(int j=0; j < 3; j++) {
            cin >> arr[j][i];
        }
    }
    cout << endl;
    // printing row wise
    for(int i=0; i < 3; i++) {
        for(int j=0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // printing column wise
    for(int i=0; i < 3; i++) {
        for(int j=0; j < 3; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}