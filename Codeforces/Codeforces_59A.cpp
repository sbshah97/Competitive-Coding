#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	int count_upper = 0;
	int count_lower = 0;

	for(int i = 0; i < s.size(); i ++) {
		if(s[i] >= 65 && s[i] <= 90) {
			count_upper++;
		}
		else if(s[i] >= 97 && s[i] <= 122) {
			count_lower++;
		}
	}

	if(count_lower >= count_upper) {
		std::transform(s.begin(), s.end(), s.begin(), ::tolower);
		cout << s << "\n";
	}
	else {
		std::transform(s.begin(), s.end(), s.begin(), ::toupper);
		cout << s << "\n";
	}

	return 0;
}