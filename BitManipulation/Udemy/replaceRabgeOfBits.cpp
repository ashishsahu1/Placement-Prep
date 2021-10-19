#include <iostream>
using namespace std;

/*
******INPUT***** 
n = 170
m = 15
i = 4
j = 1

******OUTPUT*****
170
190
*/

void replace(int &n, int m, int i, int j)
{
    int a = ~(0) << (i + 1);
    int b = (1 << j) - 1;
    int mask = a | b;
    n = n & mask;
    int mask2 = m << j;
    n = n | mask2;
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int from, to;
    cin >> from >> to;
    cout<<n<<endl;
    replace(n, m, from, to);

    cout<<n<<endl;
}