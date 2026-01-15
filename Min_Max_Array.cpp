#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: \n";
    for(int i=0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];

    for(int i=1; i<n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    
    cout << "Minimum no is: " << max << endl;
    cout << "Maximum no is: " << min;
    
    return 0;
}
