#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1, s2;
	cin >> s1;
	cin >> s2;

	std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

	for(int i = 0; i < s1.size(); i ++) {
		if(s1[i]-s2[i] > 0) {
			printf("1\n");
			exit(0);
		}
		else if(s1[i]-s2[i] < 0) {
			printf("-1\n");
			exit(0);
		}
	}
	printf("0\n");

	return 0;
}