#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
     int a[100],b[100],i,j,t,h=1,n;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        h=1;
        for(j=1;j<=n;j++)
        {
            if(n==0)
            {
                printf("%d\n",h);
                break;
            }

            else if(j%2==0)
            {
                h++;
                
            }

            else
            {
                h*=2;
                
            }
        }

        printf("%d\n",h);
    }
    return 0;
}
