/*
 * set means 1
 * The position of LSB(or last bit) is 0, second last bit is 1 and so on
 * To set any bit we use bitwise OR | operator. As we already know bitwise OR | operator evaluates each bit of the result to 1 if any of the operand’s corresponding bit is set (1). In-order to set kth bit of a number we need to shift 1 k times to its left and then perform bitwise OR operation with the number and result of left shift performed just before.
 * sample Eg to print: 2nd bit of 10 has been set | 3rd bit of 15 is already set.
 */

#include <iostream>
using namespace std;

int setIthBit(int n, int i)
{
    int one{1};
    int r = one << i;
    int res = n | r;
    return res;
}

int main()
{

    int n{}, i{};
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter ith bit: ";
    cin >> i;
    cout << "Number after ith bit being set is: " << setIthBit(n, i);
}