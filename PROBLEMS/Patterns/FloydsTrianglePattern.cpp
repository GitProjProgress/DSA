#include <iostream>
using namespace std;

int main() {
    
    int rows{};
    int count{};
    cout << "Enter rows: ";
    cin >> rows;
    for(int i=0; i < rows; i++) {
        for(int j = 0; j < i+1; j++) {
            cout << ++count <<" ";
        }
        cout << endl;
    }
}