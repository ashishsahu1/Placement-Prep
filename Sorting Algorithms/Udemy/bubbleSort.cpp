#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
            // print(arr, n);
        }
        // cout<<endl;
    }
}

int main()
{

    /*
        3 2 4 1 5
        swap(2,3)
        2 3 4 1 5
        2 3 1 4 5
        
        2 1 3 4 5

        1 2 3 4 5
    */

    int arr[] = {-4,3, 2,-2 ,4, 1, 5};
    int n = sizeof(arr) / sizeof(int);
    print(arr, n);
    bubbleSort(arr, n);
    print(arr, n);
    return 0;
}