#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, temp;
	scanf("%d",&t);

	int index[2];
	int count[2]={0};

	for(int i = 0; i < t; i ++) {
		scanf("%d",&temp);
		if(temp %2 == 0) {
			index[0] = i+1;
			count[0] += 1;
		}
		else {
			index[1] = i+1;
			count[1] += 1;	
		}
	}

	if(count[0] == 1) {
		printf("%d\n",index[0]);
	}
	else {
		printf("%d\n",index[1]);
	}

	return 0;
}