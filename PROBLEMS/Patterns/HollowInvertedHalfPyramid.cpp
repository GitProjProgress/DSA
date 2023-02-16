#include <iostream>
using namespace std;

int main() {
    
    int rows{};
    int i{};
    cout << "Enter rows: ";
    cin >> rows;
    for(int i=0; i < rows; i++){
        cout << i+1 << " ";
    }
    cout << endl;
    for(i = rows -2 ; i > 0; i--) {
        cout << 1;
        for(int j=0; j < 2*i-1; j++)
            cout << " ";
        cout << i+1 << endl;
    }
    cout << 1;
}