// modify basefield - dec, hex, and oct
#include <iostream>
using namespace std;

int main () {
    int n = 42;
    cout << "Some bits represented in decimal: " << dec << n << '\n';
    cout << "Same bits represented in hexadecimal: " << hex << n << '\n';
    cout << "Same bits represented in octal: " << oct << n << '\n';

    return 0;
}