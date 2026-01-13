#include <iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout << "Enter no 1: ";
    cin >> a;

    cout << "Enter no 2: ";
    cin >> b;
    
    cout << "Enter no 3: ";
    cin >> c;
    
    if(a > b && a > c)
        cout << a << " is largest";
    else if(b > a && b > c)
        cout << b << " is largest";
    else
        cout << c << " is largest";

    return 0;
}