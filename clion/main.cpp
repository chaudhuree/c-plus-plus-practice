#include <iostream>

using namespace std;

int main() {
    int sales = 95000;
    double salesTax = 0.04;
    double countryTax = 0.02;

    cout << "sales=" << sales << endl
         << "sales tax= " << salesTax << endl
         << "country tax= " << countryTax << endl
         << "net tax= " << sales * (salesTax + countryTax) << endl
         << "net balance= " << sales - sales * (salesTax + countryTax) << endl;
    return 0;
}