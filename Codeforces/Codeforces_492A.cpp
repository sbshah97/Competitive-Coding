#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int val = n;

	int i = 1;
	while(n > 0) {
		if(n >= ((i*(i+1))/2)) {
			n -= ((i*(i+1))/2); 
			i++; 
		}
		else {
			n = 0;
			break;
		}
	}
	i--;

	if(val == 1)
		printf("1\n");
	else 
		printf("%d\n",i );

	return 0;
}