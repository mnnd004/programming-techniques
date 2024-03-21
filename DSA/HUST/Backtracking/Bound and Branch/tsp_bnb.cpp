#include <iostream>

int n, m;
int c[30][30];
int x[30];
int mark[30];
int f; //Do dai hanh trinh da di duoc
int f_min = INT_MAX; //do dai hanh trinh ngan nhat
int cm = INT_MAX;
using namespace std;
void input(){
	cin >> n >> m;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			c[i][j] = INT_MAX;
		}
	}
	for (int k=1; k<=m; k++){
		int i, j, d;
		cin >> i >> j >> d;
		c[i][j] = d;
		if (c[i][j] < cm) cm = c[i][j];
	}
}
void updateBest(){
	if(f+c[x[n]][x[1]] < f_min){
		f_min = f + c[x[n]][x[1]];
	}
}
void Try(int k){
	for(int v=1; v<=n; v++){
		if(mark[v] == 0){
			x[k] = v;
			f += c[x[k-1]][x[k]];
			mark[v] = 1;//danh dau thanh pho v da di toi
			if (k==n) updateBest();
			else{
				int gk = f + cm*(n-k+1);
				if (gk < f_min){// loai bo nhanh thua
				Try(k+1);
			}
		}
			mark[v] = 0;
			f -= c[x[k-1]][x[k]];
	}
}
}
int main(){
	input();
	f = 0;
	for(int v=0; v<=n; v++) mark[v] = 0;
	x[1] = 1;
	mark[1] = 1;
	Try(2);
	cout << f_min;
	return 0;
}