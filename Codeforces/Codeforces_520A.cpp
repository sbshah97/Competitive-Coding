#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int n;
	set<char> st;

	scanf("%d",&n);
	cin >> s;
	
	if(n < 26) {
		printf("NO\n");
		exit(0);
	}
	else {
		std::transform(s.begin(), s.end(), s.begin(), ::tolower);
		for(int i = 0; i < n; i ++) {
			st.insert(s[i]);
		}
	}

	if(st.size() == 26) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

	return 0;
}