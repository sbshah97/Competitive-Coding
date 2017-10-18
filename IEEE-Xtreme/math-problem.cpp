#include<bits/stdc++.h>
#define MOD 1000000007
#define SIZE 1000000
long long int fact[SIZE+2];
long long int i_fact[SIZE+2];

long long int power(long long int n, long long int p) {
    if(p == 0) {
        return 1;
    }
    long long int val = power(n, p/2)%MOD;

    val = 1LL*val*val%MOD;

    if(p%2 == 1) {
        return 1LL*val*n%MOD; 
    }

    return val;
}

void calculate_factorial() {
    fact[0]=1;
    for(int i = 1; i <= SIZE; i ++) {
        fact[i] = 1LL*fact[i-1]*i%MOD;
    }

}
 
void calculate_inverse_factorial() {
    i_fact[0]=1;
    i_fact[SIZE]=power(fact[SIZE], MOD-2);
    for(int i = SIZE-1; i >= 1 ; i --) {
        i_fact[i] = 1LL*(i+1)*i_fact[i+1]%MOD;
    }

}

void init() {
    calculate_factorial();
    calculate_inverse_factorial();
}

int main() {

    int t;
    scanf("%d",&t);

    while(t--) {
        long long int a;

        long long int n, r;
        scanf("%lld %lld %lld",&a,&n,&r);

        init();

        long long int nCr = ((fact[n]*i_fact[n-r]%MOD)*i_fact[r])%MOD;
        // printf("nCr: %lld\n",nCr);

        printf("%lld\n",power(a, nCr));
    }
    
    return 0;
}