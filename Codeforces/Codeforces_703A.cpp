#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	int countm = 0, countc = 0;
	for(int i = 0; i < t; i ++) {
		int m ,c;
		scanf("%d %d",&m,&c);
		if(m > c) {
			countm++;
		}
		else {
			countc++;
		}
	}
	if(countm > countc) {
		printf("Mishka\n");
	}
	else if(countm < countc) {
		printf("Chris\n");
	}
	else {
		printf("Friendship is magic!^^\n");
	}

	return 0;
}