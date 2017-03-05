#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int l,r;
		scanf("%d %d",&l, &r);
		
		int count_x = 0, i;

		for(i = l; i <= r; i ++) {
			int temp = i;
			int arr[6], count = 0;
			while(temp > 0) {
				arr[count++] = temp % 10;
				temp /= 10;
			}

			temp = 0;
			for(int j = count; j > 0; j --) {
				temp += (arr[count-j]*pow(10, j));
			}
			temp /= 10;

			
			if(temp == i)
				count_x += i;
		}

		printf("%d\n",count_x);

	}

	return 0;
}