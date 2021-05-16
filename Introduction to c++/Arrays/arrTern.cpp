#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    int maxn = INT_MIN, minn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number : ";
        cin >> arr[i];
        maxn = max(maxn,arr[i]);
        minn = min(minn,arr[i]);
    }

    cout << "MAx : " << maxn << endl
         << "Min : " << minn << endl;
    return 0;
}