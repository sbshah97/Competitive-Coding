#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int key,n,i,a[1000];
    
    scanf("%d",&key);
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
        {
        if(key==a[i])
            {
            printf("%d",i);
        }
        
    }
    
    
    
    return 0;
}
