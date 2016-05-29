#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int lonelyinteger(int a_size, int* a) {
return 0;

}
int main() {
    int res;
    
    int n, i,count[100];
    scanf("%d", &n);
    
    for(i = 0; i < 100; i++)
        count[i] = 0;
    
    int a[n];
    for(i = 0; i < n; i++) { 
        scanf("%d",&a[i]);
        
        count[a[i]]++;
    }
    
    for(i = 0; i < 100; i ++)
        if(count[i] == 1)
            printf("%d",i);
    
    
    return 0;
}
