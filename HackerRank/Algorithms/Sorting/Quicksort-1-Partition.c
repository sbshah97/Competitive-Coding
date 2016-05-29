#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int main(void) {
   
   int n;
scanf("%d", &n);
    
int a[n], i;
    
for(i = 0; i < n; i++)  
   scanf("%d", &a[i]); 

    int p,j=0,k=0,m=0,l[100],r[100],e[100];
    p=a[0];
    
    for(i = 0; i < n; i ++) {
        
        if(a[i] < p) {
            l[j] = a[i];
            j ++;
            
        }
        
        else if(a[i] > p) {
            r[k] = a[i];
            k ++;
        
        }
        
        else {
            e[m] = a[i];
            m ++;
            
        }
    }
    
    for(i = 0; i < j; i ++)
        printf("%d ",l[i]);
    
    for(i = 0; i < m; i ++)
        printf("%d ",e[i]);
    
    for(i = 0; i < k; i ++)
        printf("%d ",r[i]);


   
   return 0;
}
