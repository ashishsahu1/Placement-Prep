#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int c = 0;
    string temp = "";
    while (n--)
    {
        string s;
        cin >> s;

        if (temp != "")
        {
            if (temp != s)
                c++;
        }
        temp = s;
    }
    cout << c + 1 << endl;
    return 0;
}