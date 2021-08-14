#include <bits/stdc++.h>
using namespace std;

int defkin(int W, int H, vector<pair<int, int>> position)
{
    // your code goes here
    vector<int> ht, wd, cht, cwd;
    for (int i = 0; i < position.size(); i++)
    {
        ht.push_back(position[i].second);
        wd.push_back(position[i].first);
    }
    sort(ht.begin(), ht.end());
    sort(wd.begin(), wd.end());

    cht.push_back(ht[0] - 1);
    cwd.push_back(wd[0] - 1);
    for (int i = 1; i < position.size(); i++)
    {
        cht.push_back((ht[i] - ht[i - 1]) - 1);
        cwd.push_back((wd[i] - wd[i - 1]) - 1);
    }
    cht.push_back(H - ht[position.size() - 1]);
    cwd.push_back(W - wd[position.size() - 1]);

    int mxHT = INT_MIN, mxWD = INT_MIN;

    for (int i = 0; i < cht.size(); i++)
    {
        cout << cht[i] << "&" << cwd[i] << endl;
        mxHT = max(mxHT, cht[i]);
        mxWD = max(mxWD, cwd[i]);
    }
    cout << mxHT << " " << mxWD << endl;
    return mxHT * mxWD;
}

int main()
{
    int W = 8;
    int H = 11;
    vector<pair<int,int>> pos;

    for(int i=0;i<3;i++){
        pair<int,int> temp;
        cin>>temp.first;
        cin>>temp.second;
        pos.push_back(temp);
    }

    cout<<defkin(W,H,pos)<<endl;
    return 0;
}