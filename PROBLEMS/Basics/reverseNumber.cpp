#include <iostream>
using namespace std;

int reverseInt(int num)
{
    int res = 0;
    int rem{};
    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        res = res * 10 + rem;
    }
    return res;
}

int main()
{

    int num{};
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reversed number is : " << reverseInt(num);
}