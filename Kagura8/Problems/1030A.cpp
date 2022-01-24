#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    bool flag = 0;
    while(n--){
        int x;
        cin>>x;
        if(x==1)
            flag = 1;
    }   
    if(flag)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
    return 0;
}