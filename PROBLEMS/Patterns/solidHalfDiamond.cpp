#include <iostream>
using namespace std;

int main() {
    
    int rows{};
    cout << "Enter rows: ";
    cin >> rows;
    for(int i=0; i < rows-1; i++){
        for(int j = 0; j < i+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = 0; i < rows; i++) {
        cout << "* ";
    }
    cout << endl;
    for(int i= rows-1; i > 0; i--) {
        for(int j=0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}