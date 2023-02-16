#include <iostream>
using namespace std;

int main() {
    
    int rows{};
    cout << "Enter rows: ";
    cin >> rows;
    for(int i = 0; i < rows; i++) {
        for(int j=0; j < 2*i+1; j++) {
            if(j == 0 || j == 2*i){
                cout << "* ";
            }
            else if(j%2 == 0){
                cout << 2 <<" ";
            }
            else
                cout << 1 <<" ";
        }
        cout << endl;
    }
    
    for(int i = rows-2; i >= 0; i--) {
        for(int j=0; j < 2*i+1; j++) {
            if(j == 0 || j == 2*i){
                cout << "* ";
            }
            else if(j%2 == 0){
                cout << 2 <<" ";
            }
            else
                cout << 1 <<" ";
        }
        cout << endl;
    }
}