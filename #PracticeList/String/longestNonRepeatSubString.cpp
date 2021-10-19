#include<bits/stdc++.h>
using namespace std;

string longestSub(string s){
    int n = s.length();
    int mxI=0,mxJ=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<i<<" "<<j<<" "<<mxI<<" "<<mxJ<<endl;
            vector<int> count(j-i+1,0);
            for(int k=i;k<=j;k++){
                count[s[k]-'a']++;
            }
            for(int l=0;l<count.size();l++){
                if(count[l]>1){
                    break;
                }else{
                    mxI = i;
                    mxJ = j;
                }
            }
        }
    }
    
    string ans;
    for(int i=mxI;i<=mxJ+1;i++){
        ans+=s[i];
    }
    return ans;
}

int main(){

    string inp;
    cin>>inp;

    cout<<longestSub(inp);
    return 0;
}