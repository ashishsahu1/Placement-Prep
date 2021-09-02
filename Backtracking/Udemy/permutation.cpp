#include <iostream>
#include <vector>
using namespace std;

void getPerm(string s, int i, int j)
{
    
    if (j == s.length())
    {
        cout << s << endl;
        return;
    }
    cout<<i<<s[i]<<" "<<j<<s[j]<<endl;
    swap(s[i], s[j]);

    getPerm(s, i+1,j+1);
    swap(s[i],s[j]);
    getPerm(s, i+1, j);
}

int main()
{
    string s;
    getline(cin, s);

    getPerm(s, 0, 0);
}