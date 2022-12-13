#include <iostream>

using namespace std;

int main() {
//    exercise  F to c
//To convert temperatures in degrees Fahrenheit to Celsius, subtract 32 and multiply by .5556 (or 5/9).
    double F;
    cout << "enter the degree in Fahrenheit: ";
    cin >> F;
    cout << "Fahrenheit to Celsius is: " << (F - 32) * .5556 << endl;
    return 0;
}