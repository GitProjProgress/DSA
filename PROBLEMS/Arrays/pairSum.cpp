#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void pairSum(vector<int>&v1,vector<int>&v2,int sum) {
    bool flag = false;
    for(int i=0; i < v1.size(); i++) {
        for(int j=0; j < v2.size(); j++) {
            if(v1[i] + v2[j] == sum){
                flag = true;
                cout << v1[i] << " " << v2[j];
                break;
            }
        }
        if(flag)
            break;
    }
}

int main()
{
    
    vector<int>v1= {1,3,5,7};
	vector<int>v2 = {2,4,6};
	int sum = 9;
	pairSum(v1,v2,sum);
    return 0;
}
