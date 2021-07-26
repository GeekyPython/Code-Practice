#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> str;
    for(int i=0;i<10;i++)
    {
        str.push_back((char)i);
    }

    for(auto i=str.begin();i!=str.end();i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}