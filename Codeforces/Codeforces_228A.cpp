#include <bits/stdc++.h>
using namespace std;

int main() {
	int temp;
	set<int> s;
	for(int i = 0; i < 4; i ++) {
		scanf("%d",&temp);
		s.insert(temp);
	}

	printf("%ld\n",(4-s.size()));
	return 0;
}