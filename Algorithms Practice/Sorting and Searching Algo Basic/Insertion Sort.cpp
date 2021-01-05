#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    int temp,i,j;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[]= {4,7,2,45,33,46};
    int n=sizeof(arr)/sizeof(arr[3]);
    insertionSort(arr, n);
    cout << "Sorted array is \n";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


