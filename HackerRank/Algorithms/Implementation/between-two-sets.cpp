#include <bits/stdc++.h>
using namespace std;

int gcd (int arr_gcd[], int n) {
	
}

int lcm (int arr_lcm[], int m) {

}

int sol (int gcd, int lcm) {

}

int main() {
	int n, m, gcd, lcm, count;
	scanf("%d %d",&n,&m);

	int arr_gcd[n], arr_lcm[m];

	for(int i = 0; i < n; i ++) 
		scanf("%d",&arr_gcd[i]);
	
	for(int i = 0; i < m; i ++)
		scanf("%d",&arr_lcm[i]);

	gcd = gcd(arr_gcd, n);

	lcm = lcm(arr_lcm, m);

	count = sol(gcd, lcm);

	printf("%d",count );

	return 0;
}
