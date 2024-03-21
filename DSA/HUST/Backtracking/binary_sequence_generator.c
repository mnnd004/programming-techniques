#include <stdio.h>
#define N 20
int x[N];
int n;
int check11(int x[n]){
	for (int i = 1; i<=n;i++){
		if (x[i]==1 && x[i+1]==1) return 0;
	}
	return 1;
}
void solution(){
	if (check11(x)){
	for (int i = 1; i<=n; i++){
		printf("%d",x[i]);
		
	}
	printf("\n");
}
}
void Try(int k){
	for (int v = 0; v<=1; v++){
		if (1){
			x[k]=v;
			if (k==n) solution();
			else Try(k+1);
		}
	}
}
int main(){
	n=3;
	Try(1);
}