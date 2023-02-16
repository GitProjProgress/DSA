#include <iostream>
using namespace std;

int main() {
    
    int rows{};
    cout << "Enter rows: ";
    cin >> rows;
    for(int i = 0; i < rows; i++) {
        
        for(int j=0; j < 2*rows-2-i; j++) {
            cout << "*";
        }
        cout << i+1;
        
        for(int j=0; j < i; j++){
            cout << "*" << i+1;
        }
        
        for(int j=0; j < 2*rows-2-i; j++){
            cout << "*";
        }
        cout << endl;
    }
}