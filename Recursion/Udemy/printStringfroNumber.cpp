#include <bits/stdc++.h>
using namespace std;

string getS(int i)
{
    vector<string> fr = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    return fr[i];
}
void printString(int n)
{
    if (n == 0)
    {
        return;
    }
    int x = n % 10;
    printString(n / 10);
    cout << getS(x) << " ";
}

int main()
{

    int n;
    cin >> n;
    printString(n);
    return 0;
}