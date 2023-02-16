#include <iostream>
#include <vector>
#include <climits>
// #include <bits/stdc++.h>
using namespace std;

void sort0and1(vector<int>&v) {
    int start = 0;
    int end = v.size() - 1;
    
    while(start < end) {
        // cout << "\nstart= " << start << " end = " << end;
        if(v[start] == 0){
            start++;
            // cout << "\nstart is now at = " << start;
        }
        if(v[end] == 1){
            end--;
            // cout << "\nend is now at = " << end;
        }
        if(v[start] == 1 && v[end] == 0){
            // cout << "\n\nswapping v["<<start<<"]-"<<v[start]<<" and v["<<end<<"]-"<<v[end];
            swap(v[start],v[end]);
            start++;
            end--;
            // cout << "\n.... start after swap is now at = " << start;
            // cout << "\n.... end after swap is now at = " << end;
        }
    }
}

int main()
{
    
    vector<int> v = {0,1,0,1,1,0,1,0,1,1};
    int sum = 80;
    for(int i=0; i < v.size(); i++)
	    cout << v[i] <<" ";
	 cout << endl;
	sort0and1(v);
	for(int i=0; i < v.size(); i++)
	    cout << v[i] <<" ";
    return 0;
}