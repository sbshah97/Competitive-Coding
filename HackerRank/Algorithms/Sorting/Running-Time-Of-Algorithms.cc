#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int i,j,a[n],key,count=0;
    
    for(i = 0; i < n ; i ++)
        scanf("%d",&a[i]);
    
    for(j = 1 ; j < n ; j ++) {
        key = a[j];
        i = j - 1;
        
        while(i >= 0 && a[i] > key) {
            a[i + 1] = a[i];
            i = i - 1;
            count ++;
        }
        a[i + 1] = key; 
    }
            
        printf("%d",count);
  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
