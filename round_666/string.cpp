#include<iostream>
#include<cstring>
using namespace std;


int isAnagram(int *arr1,int *arr2,int s1,int s2)
{
    if(s1==s2)
    {
        int i=0;

        while(arr1[i]==arr2[i])
        {
            i++;
        }

        if(i==s1-1)
        {
            return 0;
        }

        return 1;
        
    }
    return 1;
}

int main()
{
    int n,t,it;
    cin>>t;

    for(it=0;it<t;it++)
    {
        cin>>n;
        string mat[n];

        for(int i=0;i<n;i++)
        {
            cin>>mat[i];
        }

        int i=0;
        int j=0;

        while(i<n-1 && isAnagram(mat[i],mat[j],))
        

    }

}
