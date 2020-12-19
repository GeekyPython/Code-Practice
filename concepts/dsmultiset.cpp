#include<iostream>
#include<set>
using namespace std;

int main()
{
    multiset<int>ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(2);

    for(auto i : ms)
    {
        cout<<i<<" ";
    }
    ms.erase(ms.find(2));

    cout<<endl;

    for(auto i : ms)
    {
        cout<<i<<" ";
    }

    return 0;

}