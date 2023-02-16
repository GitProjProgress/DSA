#include <iostream>
using namespace std;

int main() {
    
    int rows{};
    cout << "Enter rows: ";
    cin >> rows;
    for(int i=0; i < rows; i++)
        cout << "* ";
    cout << endl;
    for(int i=1; i <= rows-2; i++){
        for(int j=0; j < rows-i; j++) {
            if(j ==0 || j == (rows-i-1))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << "* ";
}