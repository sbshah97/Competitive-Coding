#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int j = 0; j < t; j++){
        int n;
        int k;
        scanf("%d %d",&n,&k);
        vector<int> a(n);
        int count1 = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            
            if(a[i] <= 0)
                count1 ++;
        }
        
        if(count1 < k)
            printf("YES\n");
        else
            printf("NO\n");
        count1 = 0;
    }
    return 0;
}
