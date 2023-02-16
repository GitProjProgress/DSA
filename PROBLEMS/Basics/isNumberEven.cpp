#include <iostream>
using namespace std;

bool isEven(int num)
{
    if ((num & 1) == 1) // % is a heavy operator so didn't use it
        return 0;
    else
        return 1;
}

int main()
{

    int num{};
    cout << "Enter a number: ";
    cin >> num;

    if (isEven(num))
        cout << "\nNumber is even";
    else
    {
        cout << "\nNumber is odd";
    }
}