#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0 ; width_i < n ; width_i++) {
       cin >> width[width_i];
    }
    for(int a0 = 0; a0 < t; a0++){
        int i;
        int j;
        cin >> i >> j;
        
        int key = 10;
        
        for(int k = i; k <= j; k ++) {
            
            if(width[k] < key)
                key = width[k];
                
        }
        
        printf("%d\n",key);
    }
    return 0;
}
