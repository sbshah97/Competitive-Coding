#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,i;
    int x1,x2,x3;
    int y1,y2,y3;
    
    scanf("%d",&t);
    for(i = 0 ; i < t ; i++)
        {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        x3 = (2*x2) - x1;
        y3 = (2*y2) - y1;
        printf("%d %d\n",x3,y3);
    }
    return 0;
}
