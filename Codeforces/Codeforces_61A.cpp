#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1, s2; 

	cin >> s1;
	cin >> s2;
	string s3 = s2;

	for(int i = 0; i < s1.size(); i ++) {
		if(s1[i] == s2[i]) {
			s3[i] = '0';
		}
		else {
			s3[i] = '1';
		}
	}

	cout << s3 << "\n";

	return 0;
}