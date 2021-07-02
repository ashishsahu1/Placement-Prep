#include <bits/stdc++.h>
using namespace std;

void getPer(string s, int left, int right)
{
    if (left == right)
    {
        cout << s << endl;
    }
    else
    {
        for (int i = left; i <= right; i++)
        {
            //do
            swap(s[i], s[left]);
            //recur
            getPer(s, left + 1, right);
            //undo
            swap(s[i], s[left]);
        }
    }
}

int main()
{
    // code
    string s;
    getline(cin, s);

    getPer(s, 0, s.length() - 1);
    return 0;
}