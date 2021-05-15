#include <bits/stdc++.h>
using namespace std;

/*
pythogorean triplet
a^2 = b^2 + c^2
*/

bool check(int a,int b,int c){
    int x = max(a,max(b,c));
    int y = min(a,min(b,c));
    int z = (a+b+c)-(x+y);

    return pow(x,2)==pow(y,2)+pow(z,2);
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