#include <iostream>
using namespace std;

int main() {
    
    int sum{};
    int arr[5][4] = {{1,2,3,4},
                    {2,3,4,1},
                    {5,6,1,3},
                    {2,4,6,8},
                    {1,9,9,6}};
                    
    // printing row wise sum
    for(int i=0; i < 5; i++) {
        sum=0;
        for(int j=0; j < 4; j++) {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}