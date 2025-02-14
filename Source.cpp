#include <iostream>
#include <string>
using namespace std;

double Timur(const string& b) 
{
    setlocale(LC_ALL, "RU");
    double d = 0.0;
    bool f = false;
    double m = 0.5;
    for (char c : b) 
    {
        if (c == '.') 
        {
            f = true;
            continue;
        }
        if (f)
        {
            if (c == '1') d += m;
            m /= 2;
        }
        else 
        {
            d = d * 2 + (c - '0');
        }
    }

    return d;
}
int main() 
{
    setlocale(LC_ALL, "RU");
    string b;
    cout << "Введите двоичное число: ";
    cin >> b;

    cout << "Десятичное представление: " << Timur(b) << endl;
    return 0;
}
