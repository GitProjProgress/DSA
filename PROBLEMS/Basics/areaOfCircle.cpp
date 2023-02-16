#include <iostream>
using namespace std;

#define PI 3.14

float areaOfCircle(float radius) {
    return PI*radius*radius;
}

int main() {
    float r{};
    cout << "Enter radius: ";
    cin >> r;
    cout << "Area of circle is : " << areaOfCircle(r);    
}