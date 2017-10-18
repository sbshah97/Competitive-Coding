#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);

	int temp, count = 0;
	int count_one = 0;
	int count_two = 0;
	int count_three = 0;
	int count_four = 0;

	for (int i = 0; i < n; ++i) {
		scanf("%d",&temp);
		if(temp == 1) {
			count_one++;
		}
		else if(temp == 2) {
			count_two++;
		}
		if(temp == 3) {
			count_three++;
		}
		if(temp == 4) {
			count_four++;
		}
	}

	// Step 0: Add all count 4s
	count += count_four;

	// Step 1: Combine 1 and 3 as much as possible
	if(count_three >= count_one) {
		count += (count_three - count_one);
		count_three = count_three - count_one;
		count_one = 0;
		count += count_three;
		count_three = 0;
	}
	else if(count_three < count_one) {
		count += (count_one - count_three);
		count_one = (count_one - count_three);
		count_three = 0;
	}

	printf("%d\n",count);
}