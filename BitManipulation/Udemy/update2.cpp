#include <bits/stdc++.h>
using namespace std;

int getIthBit(int n, int position)
{
    int value = 1 << position;
    int f_value = n & value;
    return f_value;
}

int setIthBit(int n, int position)
{
    int value = 1 << position;
    int s_value = n | value;
    return s_value;
}

int clearIthBit(int n, int position)
{
    int value = ~(1 << position);
    int c_value = n & value;
    return c_value;
}

int updateIthBit1(int n, int position)
{
    int ans;
    if (getIthBit(n, position))
    {
        //clearbit
        ans = clearIthBit(n, position);
    }
    else
    {
        //setbit
        ans = setIthBit(n, position);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int position;
    cin >> position;

    cout << updateIthBit1(n, position) << endl;
}