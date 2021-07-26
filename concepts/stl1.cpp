#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v,w;

    for(int i=0;i<10;i++)
    {
        v.push_back(i+1);
    }

    for(int i=10;i<20;i++)
    {
        w.push_back(i);
    }

    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\n";

    for(auto i=w.begin();i!=w.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\n";

    cout<<"Swapping....\n";
    v.swap(w);

    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\n";

    for(auto i=w.begin();i!=w.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\n";
    v.emplace(v.begin()+7,25);
    //v.push_back(25);
    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\n";
}