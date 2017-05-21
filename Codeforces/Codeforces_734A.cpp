#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);

	string s;
	cin >> s;

	int countA = 0, countD = 0;

	for(int i = 0; i < n; i ++) {
		if(s[i] == 'A') {
			countA++;
		}
		else if(s[i] == 'D') {
			countD++;
		}
	}

	if(countA > countD) {
		printf("Anton\n");
	}
	else if(countA < countD){
		printf("Danik\n");
	}
	else {
		printf("Friendship\n");
	}

	return 0;
}