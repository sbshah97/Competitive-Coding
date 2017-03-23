#include <bits/stdc++.h>

using namespace std;

int main() {

	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		cin >> n;
		int flag = 1;

		while(flag) {
			string pal_n = to_string(n);
			string pal_inv;

			for(int i = 0; i < pal_n.size(); i ++){
				pal_inv[(pal_n.size())-1-i] = pal_n[i];
			}
			cout << "Reached";

			if(pal_n.compare(pal_inv) == 0){
				printf("%d\n",n);
				flag = 0;
			}
			else
				n++;

		}
	}

	return 0;
}