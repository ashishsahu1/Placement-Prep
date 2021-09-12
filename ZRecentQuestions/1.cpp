//write a program that accepts five space seperated lists of integers for each seperated from in the ascending order

#include<bits/stdc++.h>
using namespace std;

// int main(){
//     vector<int> arr(5,0);
//     int mx=INT_MIN;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//         mx = max(mx,arr[i]);
//     }

//     vector<int> count(mx+1,0);

//     for(int i=0;i<5;i++){
//         count[arr[i]]++;
//     }

//     vector<int> ans;

//     for(int i=0;i<mx+1;i++){
//         if(count[i]>0){
//             ans.push_back(i);
//         }
//     }

//     sort(ans.begin(),ans.end());

//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
// }


int main(){
    vector<int> arr(5,0);
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    set<int> s;
    copy(s.begin(),s.end(),back_inserter(arr));

    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;

}