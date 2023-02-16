#include <iostream>
using namespace std;

int main()
{

    int r{};
    cout << "Enter row: ";
    cin >> r;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == i)
                cout << i + 1;
            else
            {
                cout << i + 1 << "*";
            }
        }
        cout << endl;
    }

    for (int i = r - 1; i >= 0; i--)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == i)
                cout << i + 1;
            else
            {
                cout << i + 1 << "*";
            }
        }
        cout << endl;
    }
}