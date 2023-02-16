#include <iostream>
#include <vector>
#include <climits>
// #include <bits/stdc++.h>
using namespace std;

void findTriplet(vector<int>&v,int sum) {
    bool flag = false;
    for(int i = 0; i < v.size(); i++) {
        for(int j = i+1; j < v.size(); j++) {
            for(int k = j+1; k < v.size(); k++) {
                if(v[i] + v[j] + v[k] == sum) {
                    cout << v[i] <<", "<<v[j] <<", " << v[k];
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
            break;
    }
}

int main()
{
    
    vector<int> arr = {10,20,30,40};
    int sum = 80;
	findTriplet(arr,sum);
    return 0;
}
