#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> b(n, 0);
        for (int i = 0; i < n; i++)
            cin >> b[i];

        for(int i=0;i<a.size();i++){
            if(i==a.size()-1)
                i=0;
            
            if(a[i]<=k){
                k+=b[i];
                a.erase(a.begin()+i);
                b.erase(b.begin()+i);
            }
        }
    }
    return 0;
}