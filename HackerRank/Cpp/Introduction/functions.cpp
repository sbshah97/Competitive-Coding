#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) { 
    int x[10];    
    
    x[1] = a;
    x[2] = b;
    x[3] = c;
    x[4] = d;
    
    int i,j,key;
    for(j = 2; j <= 4; j++) {
        key = x[j];
        i = j - 1;
        while(i > 0 && x[i] > key) {
            x[i + 1] = x[i];
            i = i - 1;
        }
        x[i+1] = key;
    }
    
    return x[4];
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

