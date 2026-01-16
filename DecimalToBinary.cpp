#include <iostream>
#include <cmath>
using namespace std;

int DecimalToBinaryMethod1(int n){
    // Division Method
    int binary = 0;
    int i = 0;
    while(n > 0)
    {
        int bit = n % 2;
        binary = bit*pow(10, i++) + binary;
        n = n/2;
    }
    return binary;
}

int DecimalToBinaryMethod2(int n){
    // Bitwise Method
    int binary1 = 0;
    int i = 0;
    while(n > 0)
    {
        int bit = (n & 1);
        binary1 = bit*pow(10, i++) + binary1;
        n = n >> 1;
    }
    
    return binary1;
}

int main()
{
    int n;
    cout << "Enter no: ";
    cin >> n;

    int binary = DecimalToBinaryMethod1(n);
    cout << "Method 1: " << binary << endl;

    int binary1 = DecimalToBinaryMethod2(n);
    cout << "Method 2: " << binary1 << endl;
}
