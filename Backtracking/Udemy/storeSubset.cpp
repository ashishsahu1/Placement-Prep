#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool comp(string a,string b){
    if(a.length()==b.length()){
        return a<b;
    }
    return a.length()<b.length();
}

void print(vector<string> arr)
{
    for (auto i : arr)
    {
        cout << i << ",";
    }
    cout<<endl;
}

void getSub(string inp, string out, int i, vector<string> &lst)
{
    //base case
    if (i == inp.length())
    {
        if (out.empty())
        {
            lst.push_back(" ");
            // cout << "_" << endl;
        }
        else
        {
            lst.push_back(out);
            // cout << out << endl;
        }
        return;
    }

    //recursion case
    //including the ith letter
    getSub(inp, out + inp[i], i + 1, lst);

    //not including ith letter (actual backtracking code)
    getSub(inp, out, i + 1, lst);
}

int main()
{
    string s, out = "";
    getline(cin, s);
    vector<string> lst;
    getSub(s, out, 0, lst);
    print(lst);

    sort(lst.begin(), lst.end());
    print(lst);

    sort(lst.begin(), lst.end(),comp);
    print(lst);
    cout << endl;
}