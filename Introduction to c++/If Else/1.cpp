#include <iostream>
using namespace std;

int main()
{
    /* code */
    int a, b, max;
    cout << "Enter the first number \n";
    cin >> a;
    cout << "Enter the second number \n";
    cin >> b;
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    cout<<"Maximum of the two is "<<max<<endl;
    return 0;
}