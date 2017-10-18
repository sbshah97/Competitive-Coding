#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);

	int officers = 0, temp, count = 0;

	for(int i = 0; i < n; i ++) {
		scanf("%d",&temp);
		if(temp < 0) {
			if(officers < 1)
				count++;
			else {
				officers+=temp;
			}
		}
		else {
			officers += temp;
		}
	}

	printf("%d\n",count);
	return 0;
}