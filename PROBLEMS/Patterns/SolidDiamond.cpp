#include <iostream>
using namespace std;

int main()
{
    int r{};
    cout << "Enter row number: ";
    cin >> r;

    // printing upper pyramid
    for (int i = 0; i < r; i++)
    {
        // printing spaces
        for (int j = 0; j < r - i - 1; j++)
        {
            cout << " ";
        }
        // printing *
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // printing lower pyramid
    for (int i = 0; i < r; i++)
    {
        // printing spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // printing *
        for (int j = 0; j < r - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}