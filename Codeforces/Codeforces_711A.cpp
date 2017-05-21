#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int found = 0;

	string s[n];
	for(int i = 0; i < n; i ++) {
		cin >> s[i];

		if(s[i][0] == 'O' && s[i][1] == 'O' && !found) {
			s[i][0] = '+';
			s[i][1] = '+';
			found = 1;
		}
		else if(s[i][3] == 'O' && s[i][4] == 'O' && !found) {
			s[i][3] = '+';
			s[i][4] = '+';
			found = 1;
		}
	}

	if(found) {
		printf("YES\n");
		for(int i = 0; i < n; i ++) {
			cout << s[i] << "\n";
		}
	}
	else {
		printf("NO\n");
	}


	return 0;
}