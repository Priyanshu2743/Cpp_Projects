// Count Sort

#include <iostream>
using namespace std;
void countsort(int arr[], int len, int k)
{
    int arr1[k + 1];
    int final[len];
    for (int i = 0; i < k + 1; i++)
    {
        arr1[i] = 0;
    }
    for (int i = 0; i < len; i++)
    {
        arr1[arr[i]]++;
    }
    for (int i = 0; i < k + 1; i++)
    {
        if (i != 0)
            arr1[i] = arr1[i - 1] + arr1[i];
    }

    for (int i = len - 1; i >= 0; i--)
    {
        if (arr1[arr[i]] > 0)
        {

            final[arr1[arr[i]] - 1] = arr[i];
            arr1[arr[i]]--;
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << final[i] << " ";
    }
}

int main()
{
    int g;
    int range;
    cout << "enter the number of elements" << endl;
    cin >> g;
    int arr3[g];
    for (int i = 0; i < g; i++)
    {
        cin >> arr3[i];
    }
    cout << "enter range" << endl;
    cin >> range;
    countsort(arr3, g, range);
}