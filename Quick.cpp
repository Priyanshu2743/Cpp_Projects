// Quick Sort

#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int quick(int arr[], int l, int r)
{
    int small = l + 1, big = r;
    int pivot = arr[l];
    while (small <= big)
    {
        while (pivot >= arr[small])
        {
            small++;
        }
        while (pivot < arr[big])
        {
            big--;
        }
        if (small < big)
        {
            swap(&arr[small], &arr[big]);
        }
    }
    swap(&arr[big], &arr[l]);
    return big;
}
void quicksort(int arr[], int l, int r)
{
    if (l <= r)
    {
        int index = quick(arr, l, r);
        quicksort(arr, l, index - 1);
        quicksort(arr, index + 1, r);
    }
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
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout <<  arr[i] << " ";
    }
}