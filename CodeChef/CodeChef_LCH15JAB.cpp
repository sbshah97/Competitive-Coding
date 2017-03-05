#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);

	while(t --) {
		string s;
		cin >> s;

		int letters[26]={0};
		float count = 0;
		int flag = 0;
		
		for(int i = 0; s[i]!='\0'; i ++){
			letters[s[i]-97]++;
			count++;
		}			

		for(int i = 0; i < 26; i ++) {
			if(letters[i] == ceil(count/2) && !flag) {
				printf("YES\n");
				flag = 1;
			}
		}
		if(!flag)
			printf("NO\n");
	}

	return 0;
}