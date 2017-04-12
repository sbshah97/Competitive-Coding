#include <bits/stdc++.h>
using namespace std;

int main() {
	double n, m;
	scanf("%lf %lf",&n,&m);

	while(m--) {
		double q;
		scanf("%lf",&q);
		double val;

		if(q < ((3*n)/2)) {
			val = ((((n-1)/(((3*n)/2)-(n+1)))*(q-(n+1))) + 1);
		}
		else if(q == ((3*n)/2)) {
			val = n;
		}
		else if(q > ((3*n)/2)) {
			val = ((((1-n)/((2*n+1)-(3*n/2)))*(q-(2*n+1))) + 1);
		}

		if(val < 0)
			printf("0\n");
		else
			printf("%.0lf\n",val);
	}
}