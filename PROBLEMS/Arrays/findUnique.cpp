#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // given all elements occur twice except one, find that unique element
    // approach - using XOR
    vector<int> v{1, 2, 4, 2, 1, 3, 6, 5, 5, 6, 4};
    int res{};
    for (int i = 0; i < v.size(); i++)
    {
        res = res ^ v[i];
    }
    cout << res;

    // OR
    // for (auto val : v)
    //     cout << val << " ";
}