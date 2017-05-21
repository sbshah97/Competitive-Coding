#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);

	string temp;

	std::map<string, int> m;

	for(int i = 0; i < n; i ++) {
		cin >> temp;
		if(m.find(temp) == m.end()) {
			m[temp] = 0;
			printf("OK\n");
		}
		else {
			m[temp]++;
			cout << temp << m[temp] << "\n";
		}
	}

	return 0;	
}