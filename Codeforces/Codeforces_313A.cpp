#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);

	if(n > 0) {
		printf("%d\n",n);
	}	
	else {
		int temp1 = n / 10;

		int temp = n%10;
		int temp2 = n / 100;
		temp2 = temp2*10 + temp;

		temp = max(temp1, temp2);

		printf("%d\n",temp);
	}

	return 0;
}