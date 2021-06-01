#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "ashHishzhiShGjd";

    int arr[26];
    for(int i=0;i<26;i++){
        arr[i]= 0;
    }

    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }

    // cout<<str<<endl;

    for(int i=0;i<str.length();i++){
        int n = str[i]-97;
        arr[n]++;
    }
    char ans;
    int maxt = INT_MIN;
    for(int i=0;i<26;i++){
        if(maxt<arr[i]){
            maxt =arr[i];
            ans = 'a'+ i;
        }
    }

    cout<<ans<<" "<<maxt;

    return 0;
}