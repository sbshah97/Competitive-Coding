#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp;
	scanf("%d",&n);

	set<int> s;

	int p1, p2;

	scanf("%d",&p1);
	for(int i = 0; i < p1; i ++) {
		scanf("%d",&temp);
		s.insert(temp);
	}

	scanf("%d",&p2);
	for(int i = 0; i < p2; i ++) {
		scanf("%d",&temp);
		s.insert(temp);
	}

	if(s.size() == n) {
		printf("I become the guy.\n");
	}
	else {
		printf("Oh, my keyboard!\n");
	}

	return 0;
}