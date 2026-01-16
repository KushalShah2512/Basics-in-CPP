#include <iostream>
using namespace std;

int main()
{
    int n,key;
    int found = 0;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: \n";
    for(int i=0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: \n";
    cin >> key;

    for(int i=0; i < n ; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index: " << i;
            found = 1;
            break;
        }
    }
    if (!found)
        cout << "Element not found";

    return 0;
}
