#include <iostream>
using namespace std;

float findFar(float cel)
{
    float far = 1.8 * cel + 32;
    return far;
}

int main()
{

    float cel{}, far{};
    cout << "Enter temp in cel: ";
    cin >> cel;
    cout << "Farenheit equivalent is: " << findFar(cel);
}