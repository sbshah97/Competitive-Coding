#include <bits/stdc++.h>
using namespace std;

int checkForLeapYear(int a) {
	int count = 0;

	if(a > 2001) {
		for(int i = a; i > 2001; i--) {
			if(i % 4 == 0) {
				count ++;
			}
		}
	}
	else if(a < 2001){
		for(int i = a; i < 2001; i++) {
			if(i % 4 == 0) {
				count ++;
			}
		}
	}

	return count;
}

int main() {
	int t;
	scanf("%d",&t);
	while(t --) {
		int a;
		scanf("%d",&a);

		int b = abs(2001 - a;)
		
		int c = checkForLeapYear(a);

		int number_of_days =((b * 365) + c) % 7;

		switch(number_of_days) {
			case 0:
				printf("monday\n");
				break;
			case 1:
				printf("tuesday\n");
				break;
			case 2:
				printf("wednesday\n");
				break;
			case 3:
				printf("thursday\n");
				break;
			case 4:
				printf("friday\n");
				break;
			case 5:
				printf("saturday\n");
				break;
			case 6:
				printf("sunday\n");
				break;
		}
	}

	return 0;
}