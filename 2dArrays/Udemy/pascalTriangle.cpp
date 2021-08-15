#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int comb(int n, int r)
{
    return fact(n) / (fact(n - r) * fact(r));
}

vector<vector<int>> printPascal(int n)
{
    // your code goes here
    vector<vector<int>> pas;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j <= i; j++)
        {
            temp.push_back(comb(i, j));
        }
        pas.push_back(temp);
    }
    return pas;
}

vector<vector<int>> printPascal2(int n){
    vector<vector<int>> pas;
    for(int i=0;i<n;i++){
        vector<int> line;
        line.push_back(1);
        for(int j=0;j<n;j++){
            cout << line[j] * ((n - j) / j + 1)<<endl;
            line.push_back(line[j] * ((n - j) / j + 1));
        }
        pas.push_back(line);
    }
    return pas;
}

    int main()
{

    int n;
    cin>>n;

    vector<vector<int>> pas = printPascal2(n);
    cout<<pas.size()<<endl;
    for(int i=0;i<pas.size();i++){
        for(int j=0;j<pas[i].size();j++){
            cout<<pas[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}