#include<iostream>
#include<vector>
using namespace std;

class turn
{
   public:  int pile;
   public:int occ;

    turn()
    {
        occ=0;
    } 
};

int main()
{
    int n,temp;
    cin>>n;
    vector<int>vec;

    for(int i=0;i<n;i++)
    {
        cin>>temp;
        vec.push_back(temp);
    }

    for(auto i = vec.begin();i!=vec.end();i++)
    {
        if(*i==0)
        {
            vec.erase(i);
        }
    }

    int turn=0;
    while(vec.empty()==false)
    {
        if(turn ==0)
        {
            vec[0]--;
            turn =1;

            if(vec[0]==0)
            {
                vec.erase(vec.begin());
            }
        }

        else
        {
            vec[1]--;
            turn =0;

            if(vec[1]==0)
            {
                vec.erase(vec.begin()+1);
            }
        }
        
    }

    if(turn ==0)
    {
        cout<<"HL";
    }

    else
    {
        cout<<"T";
    }
    return 0;
}
    


