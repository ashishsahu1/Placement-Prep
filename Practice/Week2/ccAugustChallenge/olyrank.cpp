#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t){
        int g1,s1,b1,g2,s2,b2;
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        int t1 = g1+s1+b1;
        int t2 = g2+s2+b2;
        if(t1<t2){
            cout<<"2"<<endl;
        }else{
            cout<<"1"<<endl;
        }
        t--;
    }    
    return 0;
}