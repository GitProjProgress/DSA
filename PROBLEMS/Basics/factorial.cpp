#include <iostream>
using namespace std;

int findFact(int num)
{
    int fact = 1;
    for (int i = num; i >= 1; i--)
        fact *= i;
    return fact;
}

int main()
{

    int num{};
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " is: " << findFact(num);
}