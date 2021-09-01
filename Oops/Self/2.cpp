#include <bits/stdc++.h>
using namespace std;

class Gmail
{
private:
    int pass = 12897903;

public:
    string username;

    void details()
    {
        cout << username << " is your usernme" << endl;
        cout << pass << " is your password" << endl;
    }
};

int main()
{
    Gmail a1, a2;
    a1.username = "ashish";
    a1.details();

    a2.username = "shristi";
    a2.details();
    // cout<<a2.pass<<endl;

    return 0;
}