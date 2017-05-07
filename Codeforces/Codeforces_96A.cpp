#include <bits/stdc++.h>
using namespace std;

int main() {
	int flag = 0;;
	string s;
	cin >> s;
	int arr[s.size()+2];

	for (int i=0; i<s.size(); ++i){
    	arr[i] = 1;        
	}

	for(int i = 1; i < s.size(); i ++) {
		if(s[i] == s[i-1]) {
			arr[i] = arr[i-1] + 1;
		}
		if(arr[i] == 7) {
			flag = 1;
			// printf("%d\t",i );
		}
	}

	if(flag)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}