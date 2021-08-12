#include <bits/stdc++.h>
using namespace std;

pair<int, int> findDestination(string s)
{
    int x = 0, y = 0;
    pair<int, int> dest;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'N')
        {
            y += 1;
            continue;
        }
        if (s[i] == 'S')
        {
            y -= 1;
            continue;
        }
        if (s[i] == 'E')
        {
            x += 1;
            continue;
        }
        if (s[i] == 'W')
        {
            x -= 1;
            continue;
        }
    }
    dest.first = x;
    dest.second = y;
    return dest;
}



string findShortPath(int x,int y){
    string path="";
    
    //for x
    char temp;
    if(x>0){
        temp = 'E';
    }else{
        temp = 'W';
    }
    for(int i=0;i<abs(x);i++){
        path+=temp;
    }

    //for y
    if (y > 0)
    {
        temp = 'N';
    }
    else
    {
        temp = 'S';
    }
    for (int i = 0; i < abs(y); i++)
    {
        path += temp;
    }

    return path;
}

int main()
{

    string s;
    getline(cin, s);
    cout << findShortPath(findDestination(s).first, findDestination(s).second)<<endl;
    return 0;
}