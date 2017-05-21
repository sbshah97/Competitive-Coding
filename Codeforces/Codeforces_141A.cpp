#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1, s2;
	std::map<char, int> m;
	std::map<char, int> m_combnd;
	string combnd;

	cin >> s1;
	cin >> s2;

	for(int i = 0; i < s1.size(); i ++) {
		if(m.find(s1[i]) == m.end()) {
			m[s1[i]] = 1;
		}
		else {
			m[s1[i]]++;
		}
	}

	for(int i = 0; i < s2.size(); i ++) {
		if(m.find(s2[i]) == m.end()) {
			m[s2[i]] = 1;
		}
		else {
			m[s2[i]]++;
		}
	}

	cin >> combnd;
	int flag = 1;
	for(int i = 0; i < combnd.size(); i ++) {
		if(m_combnd.find(combnd[i]) == m_combnd.end()) {
			m_combnd[combnd[i]] = 1;
		}
		else {
			m_combnd[combnd[i]]++;
		}
	}

	for(int i = 0; i < combnd.size(); i ++) {
		if(m_combnd[combnd[i]] != m[combnd[i]]) {
			flag = 0;
		}
		// cout << combnd[i] << " " << m_combnd[combnd[i]] << "\n";
	}

	if(flag) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

	return 0;
}