#include <bits/stdc++.h>
using namespace std;

int gcd(int a , int b) {
   if(b==0) 
   	return a;
   
   a %= b;
   
   return gcd(b,a);
}

int main() {
	int a, b, n;
	scanf("%d %d %d",&a,&b,&n);

	// Simon plays first
	int flag = 1;
	while(n > 0) {

		if(flag) {
			n -= gcd(a, n);
			flag = 0;
		}
		else {
			n -= gcd(b, n);
			flag = 1;
		}
	}

	if(flag) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}

	return 0;
}