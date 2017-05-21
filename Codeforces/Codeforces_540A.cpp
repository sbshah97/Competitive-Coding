#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, count = 0;
	scanf("%d",&n);

	string s1, s2; 

	cin >> s1;
	cin >> s2;

	for(int i = 0; i < n; i ++) {
		int a = s1[i] - '0';
		int b = s2[i] - '0';

		int ans1 = abs(b - a);
		int ans2;

		if(a > b)
			ans2 = abs(b+10-a);
		else
			ans2 = abs(a+10-b);

		count += min(ans1, ans2);
	}

	printf("%d\n",count);

	return 0;
}