#include <bits/stdc++.h>
using namespace std;

#define N 4

void getCoFactor(int n, int mat[N][N], int temp[N][N], int r, int c) {
	int i = 0;
	int j = 0;

	for(int row = 0; row < n; row++) {
		for(int col = 0; col < n; col ++) {
			if(row != r && col != c) {
				temp[i][j++] = mat[row][col];

				if(j == n-1) {
					j = 0;
					i++;
				}
			}
		}
	}


}

int detOfMatrix(int n, int mat[N][N]) {
	int D = 0;

	if(n == 1) 
		return mat[0][0];

	//Store Co-Factors
	int temp[N][N];

	//To accomodate for alternate signs
	int sign = 1;

	for(int i = 0; i < n; i ++) {
		getCoFactor(n, mat, temp, 0, i);
		D += (sign*mat[0][i]*detOfMatrix(n-1, temp));

		//Change alternate signs
		sign = -sign;
	}

	return D;
}

int main() {

	int mat[N][N];
	for(int i = 0; i < N; i ++) {
		for(int j = 0; j < N; j ++) {
			scanf("%d",&mat[i][j]);
		}
	}

	int res = detOfMatrix(N, mat);

	printf("%d\n",res);
	return 0;
}