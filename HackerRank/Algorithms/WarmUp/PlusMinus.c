#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,a[1000];
    float n,x,y,z,c1,c2,c3;
    
    scanf("%f",&n);
    
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        
        if(a[i]>0)
            {
            x+=1;
        }
        
        if(a[i]<0)
            {
            y+=1;
        }
        
        if(a[i]==0)
            {
            z+=1;
        }
    }
    
    c1=x/n;
    printf("%f\n",c1);
    
    c2=y/n;
    printf("%f\n",c2);
    
    c3=z/n;
    printf("%f\n",c3);
    
    return 0;
}
