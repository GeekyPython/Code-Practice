#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    bitset<10> bs(string("1010010100"));
    cout<<bs.count();
    return 0;
}