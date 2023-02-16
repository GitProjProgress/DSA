#include <iostream>
using namespace std;

int main() {
    
    int rows{};
    int i{};
    cout << "Enter rows: ";
    cin >> rows;
    cout << 1 << endl;
    for(i = 1; i < rows -1; i++) {
        cout << 1;
        for(int j=0; j < 2*i-1; j++) {
            cout << " ";
        }
        cout << i+1 << endl;
    }
    for(int j = 0; j < rows; j++)
        cout << j+1 << " ";
    
}