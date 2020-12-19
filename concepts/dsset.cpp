#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);

    for(auto i: s)
    {
        cout<<i<<" ";
    }
    cout<<endl<<s.size();
    s.erase(2);

    cout<<endl<<s.size()<<endl;

    set<int>::iterator it = s.begin();
    
    while(it!=s.end())
    {
        cout<<*it<<" ";
        it++;
    }

    cout<<"\n";

    return 0;
}