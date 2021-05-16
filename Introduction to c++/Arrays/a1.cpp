#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of the array : ";
    cin >> n;

    int arr[n];
    int i = 0;
    while (i < n)
    {
        cout << "Enter the number : ";
        cin >> arr[i];
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}