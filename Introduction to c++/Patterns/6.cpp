#include <iostream>
using namespace std;

int main()
{
    // Floyd's triangle
    /*
        1
        2 3
        4 5 6
        7 8 9 10
        11 12 13 14 15    
    */
   int c = 1;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
    return 0;
}