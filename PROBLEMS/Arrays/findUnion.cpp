#include <iostream>
#include <vector>
#include <climits>
// #include <bits/stdc++.h>
using namespace std;

void printUnion(vector<int>&v1,vector<int>&v2,vector<int>&v3) {
    for(int i=0; i < v1.size(); i++) {
        for(int j=0; j < v2.size(); j++) {
            if(v1[i] == v2[j]) {
                v3.push_back(v1[i]);
                v1[i] = INT_MIN;
                v2[j] = INT_MIN;
            }
        }
    }
    
    for(int i=0; i < v1.size(); i++) {
        if(v1[i] != INT_MIN) {
            v3.push_back(v1[i]);
        }
    }
    
    for(int i=0; i < v2.size(); i++) {
        if(v2[i] != INT_MIN) {
            v3.push_back(v2[i]);
        }
    }
    
    for(int i=0; i < v3.size(); i++)
        cout << v3[i] << " ";
}

int main()
{
    
    vector<int>v1= {2,4,4,6,8,7,7,7,7};
	vector<int>v2 = {1,4,7,7};
	vector<int>v3;
	printUnion(v1,v2,v3);
    return 0;
}
