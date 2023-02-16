#include <iostream>
using namespace std;

int main() {
    
    /*
        formula value = value*(i-j)/j;
        where i and j both start from 1
    */
    int rows{};
    cout << "Enter rows: ";
    cin >> rows;
    int value{1};
    for(int i=1; i <= rows; i++) {
        value = 1;
        for(int j=1; j <= i; j++) {
            cout << value << " ";
            value = value*(i-j)/j;
        }
        cout << endl;
    }
}