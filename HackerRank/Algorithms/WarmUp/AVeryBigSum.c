#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i;
    long long int a[100],sum=0;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        {
        scanf("%lld",&a[i]);
        
        sum=sum+a[i];
        
    }
    
    printf("%lld",sum);
    return 0;
}
