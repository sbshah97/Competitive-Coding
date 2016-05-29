#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int m,n,i,j,k,l;
    
    scanf("%d",&n);
    
    m=n;
    l=n-m+1;
    
    for(i=0;i<n;i++)
        {
        
        for(j=0;j<m-1;j++)
            {
            printf(" ");
        }
        m--;
        
        for(k=0;k<l;k++)
            {
            printf("#");
        }
        l++;
            
            printf("\n");
        
    }
    return 0;
}
