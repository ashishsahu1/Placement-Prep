#include <bits/stdc++.h>
using namespace std;

void swap2(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    // code
    int a=2,b=5;
    cout<<"current value : "<<a<<" "<<b<<endl;
    swap2(&a,&b);
    cout<<"after swapping : "<<a<<" "<<b<<endl;
    return 0;
}