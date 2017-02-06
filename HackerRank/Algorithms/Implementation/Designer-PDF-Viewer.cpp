#include <bits/stdc++.h>

using namespace std;

int main() {

	int arr[26];

	for(int i = 0; i < 26; i ++) {
		scanf("%d",&arr[i]);
	}

	string myString;

	cin >> myString;

	int great = 0, var;

	for(int i = 0; i < myString.size(); i ++) {
		var = myString[i] - 'a';
		great = max(great, arr[var]);
		
	}

	great = great * myString.size();

	cout << great;

	return 0;
}