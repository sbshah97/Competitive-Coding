#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int i = 0; i < t; i++){
        
        int n, count = 0;
        scanf("%d",&n);
        
        int a[12];
        int n1 = n;
        for(int j = 0; j < 10; j++) {
            a[j] = n1 % 10;
            
            if((a[j] != 0) && (n % a[j] == 0))
                count++;
            
            n1 /= 10;
        }
        
        printf("%d\n",count);
    }
    return 0;
}
