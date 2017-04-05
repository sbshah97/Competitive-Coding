#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		
		int n, m, temp, flag = 0;
		vector<int> vn, vm;

		scanf("%d",&n);
		for(int i = 0; i < n; i ++) {
			scanf("%d",&temp);
			vn.push_back(temp);
		}

		scanf("%d",&m);
		for(int i = 0; i < m; i ++) {
			scanf("%d",&temp);
			vm.push_back(temp);
		}

		vector<int>::iterator temp1 = vm.begin();
		for(vector<int>::iterator itn = vn.begin(); itn != vn.end(); ++itn) {
			if((*itn) == (*temp1)) {
				flag = 1;
				for(vector<int>::iterator itm = vm.begin(); itm != vm.end(); ++itm, ++itn) {
					if((*itn) == (*itm))
						continue;
					else 
						flag = 0;	
				}
			}
		}

		if(flag) {
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}

	}

}