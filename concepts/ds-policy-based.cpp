#include<ext/pb_ds/assoc_container.hpp>
#include<iostream>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main()
{
    indexed_set s;
    s.insert(1);
    s.insert(3);
    s.insert(2);
    auto x = s.find_by_order(2);
    cout<<*x<<"\n";
    cout<<s.order_of_key(3);
    return 0;

}