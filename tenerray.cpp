// Tenerray.cpp

#include <iostream>
using namespace std;
int ternary(int arr[], int low, int high, int element)
{
    int mid1, mid2;
    while (low <= high)
    {
        mid1 = (2 * low + high) / 3;
        mid2 = (low + 2 * high) / 3;
        if (element == arr[mid1])
        {
            return mid1 + 1;
        }
        else if (element == arr[mid2])
        {
            return mid2 + 1;
        }
        else if (element < arr[mid1] && element < arr[mid2])
        {
            high = mid1 - 1;
        }
        else if (element > arr[mid1] && element < arr[mid2])
        {
            low = mid1 + 1;
            high = mid2 - 1;
        }
        else
        {
            low = mid2 + 1;
        }
    }
    return false;
}
int main()
{
    int n, value;
    cout << "enter number of elements" << endl;
    cin >> n;
    int arr[n];
    cout << "enter elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter elements to be searched" << endl;
    cin >> value;
    int result = ternary(arr, 0, n - 1, value);
    if (result > 0)
        cout << "position of element is " << result << endl;
    else
        cout << "element not found" << endl;
}