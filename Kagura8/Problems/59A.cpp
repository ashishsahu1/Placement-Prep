#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int cs = 0, cc = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
            cs++;
        else
            cc++;
    }
    if (cs < cc)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    return 0;
}