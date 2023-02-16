#include <iostream>
using namespace std;

void printPrimes(int num)
{
    bool isPrime{true};
    for (int i = 2; i <= num; i++)
    {
        isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << i << " ";
    }
}

int main()
{

    int num{};
    cout << "Enter a number: ";
    cin >> num;
    printPrimes(num);
}