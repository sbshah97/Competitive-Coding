#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int x=0, y=0, z=0;

	while(n--) {
		int temp_x, temp_y, temp_z;
		scanf("%d %d %d",&temp_x,&temp_y, &temp_z);
		x += temp_x;
		y += temp_y;
		z += temp_z;
	}

	if(x ==0 && y == 0 && z == 0) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

	return 0;
}