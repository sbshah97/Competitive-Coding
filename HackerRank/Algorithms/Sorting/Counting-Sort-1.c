#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int a[n],i,count[100];
    
    for(i = 0 ; i < 100; i ++)
        count[i] = 0; 
    
    for(i = 0; i < n; i ++) {
        scanf("%d",&a[i]);
        
        count[a[i]]++;
    }
    
    for(i = 0; i < 100; i ++) {
        printf("%d ",count[i]);
    }
       
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
