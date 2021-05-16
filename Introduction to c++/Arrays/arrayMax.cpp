#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number : ";
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "MAx : " << max << endl
         << "Min : " << min << endl;
    return 0;
}