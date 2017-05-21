#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	int x = (int)abs(a-b);
	int y = (int)abs(b-c);
	int z = (int)abs(c-a);

	printf("%d\n", max(x, max(y, z)));

	return 0;
}