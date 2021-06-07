#include <bits/stdc++.h>
using namespace std;

//without using vector to find union
int *method1Union(int arr1[], int n, int arr2[], int m)
{
    int i = 0, j = 0;
    int k = 0;
    int *un = new int[n + m];
    for (int l = 0; l < (n + m); l++)
    {
        un[l] = -1;
    }
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            un[k] = arr1[i];
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            un[k] = arr2[j];
            j++;
        }
        else if (arr1[i] == arr2[j])
        {
            un[k] = arr1[i];
            i++;
            j++;
        }
        k++;
    }
    return un;
}

//without using vector to find intersection
int *method1Intersection(int arr1[], int n, int arr2[], int m)
{
    int i = 0, j = 0;
    int k = 0;
    int *ans = new int[n + m];
    for (int l = 0; l < (n + m); l++)
    {
        ans[l] = -1;
    }
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans[k] = arr1[i];
            k++;
            i++;
            j++;
        }
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        if (arr1[i] > arr2[j])
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    // code
    int n, m;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    //calling intersection method
    cout << "Intersection : ";
    int *ans1 = method1Intersection(arr1, n, arr2, m);
    for (int i = 0; ans1[i] != -1; i++)
    {
        cout << ans1[i] << " ";
    }
    cout << endl;

    //calling union function
    cout << "Union : ";
    int *ans = method1Union(arr1, n, arr2, m);
    for (int i = 0; ans[i] != -1; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}