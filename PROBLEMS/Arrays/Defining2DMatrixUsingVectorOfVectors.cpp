#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void printArr(vector<vector<int>>&arr) {
    for(int i =0; i < arr.size(); i++) {
        for(int j=0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    
    vector<vector<int>>v(5,vector<int>(5,2));
    printArr(v);
}