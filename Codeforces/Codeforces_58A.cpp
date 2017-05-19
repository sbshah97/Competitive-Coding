#include <bits/stdc++.h>
using namespace std;

int main() {
	string s = "hello";
	string s1;

	cin >> s1;
	int j = 0;

	for (int i = 0; i < s1.size(); ++i) {
		if(s[j] == s1[i]) {
			j++;
		}
	}

	if(s.size() == j)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}