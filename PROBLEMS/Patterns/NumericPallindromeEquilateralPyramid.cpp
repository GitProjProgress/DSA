#include <iostream>
using namespace std;

int main()
{

    int rowNum{};
    cout << "Enter Rows: ";
    cin >> rowNum;
    int counter = 1;
    int col = 2 * rowNum - 1;
    for (int i = 0; i < rowNum; i++)
    {
        // printing spaces
        for (int j = 0; j < rowNum - i - 1; j++)
        {
            cout << "   ";
        }
        // printing increasing count
        for (int j = 0; j < i + 1; j++)
        {
            cout << " " << counter << " ";
            counter++;
        }
        if (i == 0)
            counter--;
        // printing decreasing count
        for (int j = 0; j < i; j++)
        {
            if (j == 0)
                counter -= 2;
            else
                counter--;
            cout << " " << counter << " ";
        }
        counter++;
        cout << endl;
    }
}