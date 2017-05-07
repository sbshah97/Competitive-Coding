#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int one =0;
	int two = 0;
	int three = 0;

	cin >> s;

	for(int i = 0; i < s.size(); i += 2) {
		if(s[i] == '1')
			one++;
		else if(s[i] == '2')
			two++;
		else if(s[i] == '3')
			three++;
	}

	int i = 0;
	while(one--){
		s[i] = '1';
		i += 2;
	} 
	while(two--){
		s[i] = '2';
		i += 2;
	} 
	while(three--){
		s[i] = '3';
		i += 2;
	} 

	cout << s << "\n";

	return 0;
}