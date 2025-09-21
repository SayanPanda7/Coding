#include<iostream>
using namespace std;
long long merge(int arr[], int temp[], int left, int mid, int right)
{
    long long inv_count = 0;
    int i = left;
    int j = mid + 1;
    int k = left;
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        } 
        else
        {
            temp[k++] = arr[j++];
            inv_count += (mid - i + 1);
        }
    }
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= right)
        temp[k++] = arr[j++];

    for (int l = left; l <= right; l++)
        arr[l] = temp[l];
    return inv_count;
}
long long mergesort(int arr[], int temp[], int left, int right)
{
    long long inv_count = 0;
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        inv_count += mergesort(arr, temp, left, mid);
        inv_count += mergesort(arr, temp, mid + 1, right);
        inv_count += merge(arr, temp, left, mid, right);
    }
    return inv_count;
}
long long countInversions(int arr[], int n)
{
    int* temp = new int[n];
    long long result = mergesort(arr, temp, 0, n - 1);
    delete[] temp;
    return result;
}
int main()
{
    int arr[] = {2, 4, 1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long inversions = countInversions(arr, n);
    cout << "Inversions are: " << inversions << endl;
    return 0;
}
