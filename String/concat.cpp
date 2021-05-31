#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code
    string st1,st2;
    getline(cin,st1);
    getline(cin,st2);

    cout<<st1+st2<<endl;
    st1.append(st2);
    cout<<st1<<endl;
    return 0;
}