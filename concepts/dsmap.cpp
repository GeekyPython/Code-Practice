#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int>m;
    m["one"] = 1;
    m["two"] = 2;
    m["three"] = 3;

    for(auto x : m)
    {
        cout<<x.first<<" "<<x.second<<"\n";
    }

    return 0;
}