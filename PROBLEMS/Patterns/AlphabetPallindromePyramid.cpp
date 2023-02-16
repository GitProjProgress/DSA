#include <iostream>
using namespace std;

int main()
{

    int r{};
    cout << "Enter row: ";
    cin >> r;

    char ch{};
    for (int i = 0; i < r; i++)
    {
        // printing increasing alphabet order
        for (int j = 0; j < i + 1; j++)
        {
            ch = j + 'A';
            cout << ch << " ";
        }
        // printing decreasing alphabet order
        for (int j = 0; j < i; j++)
        {
            ch = i - j - 1 + 'A';
            cout << ch << " ";
        }
        cout << endl;
    }
}