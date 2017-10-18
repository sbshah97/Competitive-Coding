#include <bits/stdc++.h>
using namespace std;

int M[202][202];
int n, m;

int getMax() {
	int H[m][n];
	H[m-1][n-1] = min(1-M[m-1][n-1], 1);

	for (int i = m-2; i >= 0; i--) {
		H[m-1][i] = max(H[m-1][i+1]-M[m-1][i], 1);
	}
	for (int j = n-2; j >= 0; j--) {
		H[j][n-1] = max(H[j+1][n-1]-M[j][n-1], 1);
	}

    for (int j = n-2; j >= 0; j--)
		for (int i = m-2; i >= 0; i--)
	        H[j][i] = min(max(H[j][i+1] - M[j][i], 1), max(H[j+1][i] - M[j][i], 1));

	return H[0][0];
}

int main() {
	scanf("%d %d",&m,&n);

	for (int j = 0; j < n; j ++) {
		for(int i = 0; i < m; i ++) {
			scanf("%d",&M[j][i]);
		}
	}

	int ans = getMax();
	printf("%d\n",ans );
	return 0;

}