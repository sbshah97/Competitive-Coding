#include <bits/stdc++.h>
using namespace std;

int main() {
	int cups = 0, medals = 0, temp;

	for(int i = 0; i < 3; i ++) {
		scanf("%d",&temp);
		cups += temp;		
	}
	for(int i = 0; i < 3; i ++) {
		scanf("%d",&temp);
		medals += temp;
	}

	int n;
	scanf("%d",&n);

	int count = 0;
	count += cups/5;
	count += medals/10;

	if(cups%5 != 0)
		count++;
	if(medals%5 != 0)
		count++;

	if(count <= n) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	return 0;
}