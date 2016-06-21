#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d",&n);
    set<int>s;
    for (int i = 0 ; i < n ; i ++) {
        int x,y;
        scanf("%d %d",&y,&x);
        
        if(y == 1) 
            s.insert(x);
        
        else if(y == 2)
            s.erase(x);
            
        else if(y == 3) {
            set<int>:: iterator itr=s.find(x);
        
            if(itr == s.end())
                printf("No\n");
            else
                printf("Yes\n");
        }
    }
    return 0;
}
