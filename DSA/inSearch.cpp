#include <iostream>
using namespace std;
int recursion(int arr[], int element, int low, int high)
{
    if (low <= high)
    {

        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid + 1;
        }
        else if (arr[mid] > element)
        {
            recursion(arr, element, low, mid - 1);
        }
        else
        {
            recursion(arr, element, mid + 1, high);
        }
    }
    else
        return false;
}
int main()
{

    int n;
    cout << "enter length of array" << endl;
    cin >> n;
    cout << "enter the array" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ele;
    cout << "enter the element" << endl;
    cin >> ele;
    int index = recursion(arr, ele, 0, n);
    if (index > 0)
        cout << "position of element is" << index << endl;
    else
        cout << "element not found" << endl;
}