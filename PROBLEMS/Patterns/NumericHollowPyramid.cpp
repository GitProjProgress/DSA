#include <iostream>
using namespace std;

int main()
{

    int r{};
    cout << "Enter row: ";
    cin >> r;
    for (int i = 0; i < r - 1; i++)
    {
        // printing spaces and 1
        for (int j = 0; j < r - i - 1; j++)
        {
            cout << " ";
        }
        cout << "1";
        // printing spaces and number
        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << i + 1;
        }

        cout << endl;
    }

    // printing last row
    for (int j = 0; j < r; j++)
    {
        cout << j + 1 << " ";
    }
}