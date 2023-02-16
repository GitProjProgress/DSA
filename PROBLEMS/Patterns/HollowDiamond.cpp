#include <iostream>
using namespace std;

int main()
{
    int r{};
    cout << "Enter row: ";
    cin >> r;

    for (int i = 0; i < r; i++)
    {
        // printing spaces & * left
        for (int j = 0; j < r - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        // printing spaces & * right
        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }
    for (int i = r - 1; i >= 0; i--)
    {
        // printing spaces & * left
        for (int j = 0; j < r - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        // printing spaces & * right
        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }
}