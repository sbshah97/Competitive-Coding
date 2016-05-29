#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>



int main(void) {
    int n;
    scanf("%d", &n);
    int a[n], i;
    for(i = 0; i < n; i ++) { 
        scanf("%d", &a[i]); 
    }

    int j, key, k;
    for(j = 1 ; j < n; j ++) {
        key = a[j];
        i = j - 1;
        while(i >= 0 && a[i] > key) {
            a[i+1] = a[i];
            i = i - 1;
            for (k = 0; k < n; k ++ )
                printf("%d ",a[k]);

            printf("\n");
        }
        a[i + 1] = key;
    }
    
    for(k = 0; k < n; k ++)
        printf("%d ",a[k]);
    
    return 0;
}
