#include <bits/stdc++.h>

using namespace std;

int main() {
	int n ,m;
	scanf("%d %d",&n,&m);

	string s;
	cin >> s;

	while(m--) {
		for(int i = 0; i < n-1; i ++) {
			if(s[i] == 'B' && s[i+1] == 'G') {
				s[i] = 'G';
				s[i+1] = 'B';
				i++;
			}
		}
	}

	cout << s << "\n";
}