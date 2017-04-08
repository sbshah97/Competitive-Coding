#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);

	while(n--) {
		int x;
		stack<long long int> s;
		set<long long int> set;
		scanf("%d",&x);
		if(x == 1) {
			long long int val;
			scanf("%lld",&val);
			s.push(val);
			set.insert(val);
		}
		else if(x == 2) {
			long long int val =  s.pop();
			s.erase
		}
		else {

		}
	}

	return 0;
}