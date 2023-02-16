#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void printIntersection(vector<int>&v1,vector<int>&v2,vector<int>&v3) {
    for(int i = 0; i < v1.size(); i++) {
        for(int j=0; j < v2.size(); j++) {
            if(v1[i] == v2[j]) {
                v3.push_back(v1[i]);
                v1[i] = INT_MIN;
                v2[j] = INT_MIN;
            }
        }
    }
    for(int i=0; i < v3.size(); i++)
        cout << v3[i]<<" ";
}

int main()
{
    
    vector<int>v1= {1,2,3,4};
	vector<int>v2 = {3,4,4,9,10};
	vector<int>v3;
	printIntersection(v1,v2,v3);
    return 0;
}
