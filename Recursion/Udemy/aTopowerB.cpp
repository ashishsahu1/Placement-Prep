#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

int aToPowerB(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    return a * aToPowerB(a, b - 1);
}

int aToPowerB2(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    int sub = aToPowerB2(a, b / 2);
    int sqSub = sub * sub;
    if (b & 1)
    {
        return a * sqSub;
    }
    else
    {
        return sqSub;
    }
}

int main()
{

    int a;
    int b;
    cin >> a;
    cin >> b;

    auto start1 = high_resolution_clock::now();
    cout << aToPowerB(a, b) << endl;
    auto stop1 = high_resolution_clock::now();
    auto tm = duration_cast<microseconds>(stop1 - start1);
    cout<< "Time taken : "<<tm.count()<<endl;

    cout<<endl<<endl;

    auto start2 = high_resolution_clock::now();
    cout << aToPowerB2(a, b) << endl;
    auto stop2 = high_resolution_clock::now();
    auto tm2 = duration_cast<microseconds>(stop2 - start2);
    cout << "Time taken : " << tm2.count() << endl;
    return 0;
}