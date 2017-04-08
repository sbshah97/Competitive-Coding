#include <bits/stdc++.h>
using namespace std;

int main() {
	map<char, int> m;
	string val = "hackerrank";

	for(int i = 0; i < val.size(); i++) {
		if(m.find(val[i]) == m.end()) {
			//Not found
			m[val[i]] = 1;
		} 
		else {
			m[val[i]]++;
		}
	}	

	int q;

	scanf("%d",&q);
	while(q--) {
		string s;
		cin >> s;
		map<char, int> map;
		for(int i = 0; i < s.size(); i ++) {
			if(map.find(val[i]) == m.end()) {
				//Not found
				map[val[i]] = 1;
			} 
			else {
				map[val[i]]++;
			}	
		}

		
	}
}