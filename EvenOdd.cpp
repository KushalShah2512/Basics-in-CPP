#include <iostream>

using namespace std;
int main()
{
    int no;
    cout << "Enter no: ";
    cin >> no;

    if(no % 2 == 0)
        cout << "Number is even";
    else
        cout << "NUmber is odd";

    return 0;
}
