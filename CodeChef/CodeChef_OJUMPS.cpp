#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);

	if(n%6 == 0 || (n-3)%6 == 0 || (n-1)%6 == 0)
		printf("yes\n");
	else
		printf("no\n");

	return 0;
}