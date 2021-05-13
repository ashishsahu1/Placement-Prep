#include <bits/stdc++.h>
using namespace std;

/*
pythogorean triplet
a^2 = b^2 + c^2
*/

bool check(int a,int b,int c){
    int x,y,z;
    if(a>b){
        if(a>c){
            z = a;
            x = b;
            y = c;
        }
        else{
            z = c;
            x = a;
            y = b;
        }
    }
    else{
        if(b>c){
            z = b;
            x = a;
            y = c;
        }
        else{
            z = c;
            x = a;
            y = b;
        }
    }

    return pow(z,2)==pow(x,2)+pow(y,2);
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(check(a,b,c))
        cout<<"Pythogorean";
    else
        cout<<"Not pythogorean";


    return 0;
}