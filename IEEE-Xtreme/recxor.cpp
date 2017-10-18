#include <bits/stdc++.h>
using namespace std;

long long int l, h, n, d1, d2;

long long f(long long a) {
     long long res[] = {a,1,a+1,0};
     return res[a%4];
}

long long getXor(long long a, long long b) {
     return f(b)^f(a-1);
}

int getSquareXor() {
	long long int x1, x2, x3, x4;

	// Single Condition
	if((d1-n)%l == (d2-n)%l) {
		return d1;
	}
	// Major Diagonal condition
	if((d1-n)%l < (d2-n)%l) {
		x1 = d1;
		x4 = d2;
		x2 = d1+abs((d2-n)%l-(d1-n)%l);
		x3 = d2-abs((d2-n)%l-(d1-n)%l);
	}
	// Minor Diagonal condition
	else if((d1-n)%l > (d2-n)%l) {
		x2 = d1;
		x3 = d2;
		x1 = d1-abs((d2-n)%l-(d1-n)%l);
		x4 = d2+abs((d2-n)%l-(d1-n)%l);
	}

	// printf("x1: %lld x2: %lld x3: %lld x4: %lld\n\n",x1,x2,x3,x4);

	long long int val = 0;
	long long int j = x1;
	val ^= j;
	// printf("%lld ",j);
	j++;
	// Counter for loop
	for(int i = 1; i < (abs(x1-x2)+1)*((abs(x1-x3)/l)+1); i ++) {
		if(i%((x2-x1+1)) == 0) {
			j = x1+(i/(x2-x1+1))*l;
			// printf("\n");
		}
		// printf("%lld ",j);
		val ^= j;
		j++;
	}

	// printf("\nEnd of loop\n");

	return val;
}

int main() {
	int t;
	scanf("%d",&t);

	while(t--) {
		scanf("%lld %lld %lld %lld %lld", &l, &h, &n, &d1, &d2);

		int val = getXor(n, n+l*h-1);
		int val_xor = getSquareXor();

		printf("%d\n",val^val_xor);
	}

	return 0;
}