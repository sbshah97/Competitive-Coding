#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    
    
        int t,i,m;
        int a[200]={1},top=1;
        scanf("%d",&t);
        for(m=1;m<=t;m++)
        {
            int carry=0;
            for(i=0;i<top;i++)
            {
                a[i]=a[i]*m+carry;
                carry=a[i]/10;
                a[i]=a[i]%10;
            }
            if(carry)
                while(carry)
            {
                a[top++]=carry%10;
                carry/=10;
            }
        }
        for(i=top-1;i>=0;i--)
            printf("%d",a[i]);
        printf("\n");
    
    return 0;
}
