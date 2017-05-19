#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,t;
	cin >> s;
	cin >> t;

	int flag = 1;
	for(int i = 0; i < s.length(); i ++) {
		if(s[i] != t[t.length()-1-i]) {
			flag = 0;
		}
	}

	if(flag) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

	return 0;
}