#include <iostream>
using namespace std;

int main()
{

    int r{};
    cout << "Enter row: ";
    cin >> r;

    // printing upper pattern
    for (int i = 0; i < r - 1; i++)
    {
        // printing left part
        for (int j = 0; j < r - i; j++)
        {
            cout << "*";
        }
        // printing spaces
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << " ";
        }
        // printing right part
        for (int j = 0; j < r - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // printing lower pattern
    for (int i = r - 1; i >= 0; i--)
    {
        // printing left part
        for (int j = 0; j < r - i; j++)
        {
            cout << "*";
        }
        // printing spaces
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << " ";
        }
        // printing right part
        for (int j = 0; j < r - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}