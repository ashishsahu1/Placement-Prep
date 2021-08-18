#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int findTotal(vector<int> marks){
    int sum=0;
    for(auto i:marks){
        sum+=i;
    }
    return sum;
}
//Custom comparator
bool comp(pair<string, vector<int>> s1, pair<string, vector<int>> s2){
    vector<int> m1 = s1.second;
    vector<int> m2 = s2.second;
    return findTotal(m1)>findTotal(m2);
}

    int main()
{
    vector<pair<string,vector<int>>> marks = {
        {"Ashish",{98,78,89}},
        {"Sahu",{80,100,90}},
        {"Swagatam",{89,79,68}}
    };

    sort(marks.begin(),marks.end(),comp);

    for(auto i:marks){
        cout<<i.first<<" "<<findTotal(i.second)<<endl;
    }
}