#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int g;
		scanf("%d",&g);

		/*
		* Heads -> 0
		* Tails -> 1
		*/
		while(g--) {
			long long int n, i, q;
			scanf("%lld %lld %lld",&i,&n,&q);

			int coins[n];
			
			/*Step 1*/
				//Condition for all heads initially
				if(i == 1) {
					for(long long int j = 0; j < n; j ++)
						coins[j] = 0;
				}
				//Condition for all tails initially
				else if(i == 2) {
					for(long long int j = 0; j < n; j ++)
						coins[j] = 1;
				}

			/*Step 2*/
				//Flip the coins based on number
				if(n % 2 == 1) {
					for(long long int j = 0; j < n; j += 2)
						coins[j] = !coins[j]; 
				}
				else if(n % 2 == 0) {
					for(long long int j = 1; j < n; j += 2) 
						coins[j] = !coins[j];
				}

			/*Step 3*/
				int count = 0;
				//Check for value of q -> Heads
				if(q == 1) {
					for(int i = 0; i < n; i++)
						if(coins[i] == 0)
							count++;
				}
				//CHeck for value q -> Tails
				else if(q == 2) {
					for(int i = 0; i < n; i++)
						if(coins[i] == 1)
							count++;
				}

			/*Step 4*/
				printf("%d\n",count );
		}
	}

	return 0;
}