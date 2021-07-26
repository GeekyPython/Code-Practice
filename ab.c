#include<stdio.h>
#include<math.h>

int main()
{
    long t,it;
    long long a,b,n;
    scanf("%d",&t);

    for(it=0;it<t;it++)
    {
        scanf("%d%d%d",&a,&b,&n);
        long long r1,r2;
        r1 = ceil((n-a)/b);
        r2 = ceil((n-b)/a);

        if(r1<r2)
        {
            printf("%d\n",r1);
        }

        else
        {
            printf("%d\n",r2);
        }
    }
    
    return 0;

}
