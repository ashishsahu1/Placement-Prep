#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int f1 = 0, f2 = 1, sum = f1 + f2;
    for (int i = 0; i < n - 2; i++)
    {
        int temp = f1 + f2;
        sum += temp;
        f1 = f2;
        f2 = temp;
    }
    cout << sum << endl;
    return 0;
}