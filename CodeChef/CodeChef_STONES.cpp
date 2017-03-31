#include <bits/stdc++.h>
using namespace std;

//How to solve common characters wala problem?

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int count = 0;
		string j, s;
		cin >> j;
		cin >> s;

		for(int i = 0; i < s.length(); i ++) {
			for(int k = 0; k < j.length(); k ++) {
				if(j[k] == s[i]) {
					count ++;
				}
			}
		}

		printf("%d\n",count);
	}
}