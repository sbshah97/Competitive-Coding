#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	scanf("%d %d",&a,&b);

	int ans1 = min(a, b);
	int ans2 = ((max(a, b) - min(a, b))/2);

	printf("%d %d\n",ans1, ans2);

	return 0;
}