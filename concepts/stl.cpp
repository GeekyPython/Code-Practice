#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> v;

    cout<<"Initial Array\n";
    for(int i=0;i<5;i++)
    {
        v.push_back(i);
    }

    for(auto i=v.cbegin(); i!=v.cend();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    cout<<"Reversed Array"<<endl;
    for(auto i=v.rbegin();i!=v.rend();i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\n";

    cout<<"Max Size: "<<v.max_size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Empty: "<<v.empty()<<endl;
    cout<<"At 3: "<<v.at(3)<<endl;
    cout<<"Front: "<<v.front()<<endl;
    cout<<"Back: "<<v.back()<<endl;
    int *pos = v.data();
    cout<<"Data: "<<*pos<<endl;




    return 0;

}