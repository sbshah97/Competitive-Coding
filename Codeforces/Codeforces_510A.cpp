#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	scanf("%d %d",&n,&m);

	for(int i = 0; i < n; i ++) {
		if(i % 2 == 0) {
			for(int j = 0; j < m; j ++) {
				printf("#");
			}
			printf("\n");
		}
		else {
			if((i-1) % 4 == 0) {
				for(int j = 0; j < m-1; j ++) {
					printf(".");
				}
				printf("#\n");
			}
			else if((i+1) % 4 == 0) {
				printf("#");
				for(int j = 1; j < m; j ++) {
					printf(".");
				}
				printf("\n");
			}
		}
	}

	return 0;
}