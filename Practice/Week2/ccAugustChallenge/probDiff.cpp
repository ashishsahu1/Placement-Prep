#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t){
        int a1,a2,a3,a4;
        cin>>a1>>a2>>a3>>a4;
        int unique_c=4;

        if(a1==a2)
            unique_c--;
        if (a1 == a3)
            unique_c--;
        if (a1 == a4)
            unique_c--;

        if (a2 == a1)
            unique_c--;
        if (a2 == a3)
            unique_c--;
        if (a2 == a4)
            unique_c--;

        if (a3 == a1)
            unique_c--;
        if (a3 == a2)
            unique_c--;
        if (a3 == a4)
            unique_c--;

        cout<<unique_c/2<<endl;
        t--;
    }
    return 0;
}