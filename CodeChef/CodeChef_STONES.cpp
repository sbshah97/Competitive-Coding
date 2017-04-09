#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int count = 0;
		string j, s;
		cin >> j;
		cin >> s;

		set<char> s1, s2;

		for(int i = 0; i < j.size(); i ++) {
			s1.insert(j[i]);
		}

		for(set<char>::iterator it1 = s1.begin(); it1 != s1.end(); ++it1) {
			for(int i = 0; i < s.size(); i ++) {
				if((*it1) == s[i])
					count++;
			}
		}

		printf("%d\n",count);
	}
}