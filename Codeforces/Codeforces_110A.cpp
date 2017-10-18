#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int s;
	cin >> s;

	int count = 0;

	while(s != 0) {
		int temp = s%10;
		if(temp == 4 || temp == 7) {
			count ++;
		}
		s /= 10;
	}


	if(count == 4 || count == 7) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

	return 0;
}
