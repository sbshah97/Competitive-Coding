#include <iostream>
using namespace std;

int main() {
	int n = 5;
	int temp, sum = 0;

	for(int i = 0; i < n; i ++) {
		scanf("%d",&temp);
		sum += temp;
	}

	if(sum > 0 && sum % n == 0) {
		printf("%d\n", sum / n);
	}
	else{
		printf("-1\n");
	}
	
	return 0;
}