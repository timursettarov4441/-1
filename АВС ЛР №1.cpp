#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double binaryToDecimal(const string& binary_str) {
    size_t point = binary_str.find('.');
    string integer_part = binary_str.substr(0, point);
    string fractional_part = (point != string::npos) ? binary_str.substr(point + 1) : "";

    double decimal_integer = stoi(integer_part, nullptr, 2);
    double decimal_fraction = 0.0;

    for (size_t i = 0; i < fractional_part.length(); ++i) {
        if (fractional_part[i] == '1') {
            decimal_fraction += pow(2, -(i + 1));
        }
    }

    return decimal_integer + decimal_fraction;
}

int main() {
    string binary_number;
    cout << "Введите двоичное число: ";
    cin >> binary_number;

    double decimal_number = binaryToDecimal(binary_number);
    cout << "Десятичное представление: " << decimal_number << endl;

    return 0;
}
