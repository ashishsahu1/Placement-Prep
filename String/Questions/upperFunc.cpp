#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    string s = "kjklfshjsdfkljl";
    string l(10,' ');

    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;

    transform(s.begin(),s.end(),l.begin(),::tolower);

    cout<<l<<endl;
    return 0;
}