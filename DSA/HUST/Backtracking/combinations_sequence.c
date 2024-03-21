#include <stdio.h>
int k,n;
int x[30];
int checkv(int v, int i){
	return 1;
}
void solution(){
	for (int i = 1; i<=k; i++){
		printf("%d",x[i]);

	}
	printf("\n");
}
int Try(int i){
	for (int v=x[i-1]+1; v<=n-k+i; v++){
		if (checkv(v,i)){
			x[i]=v;
			if (i==k) solution();
			else Try(i+1);
		}
	}
}
int main(){
	k=3;
	n=5;
	Try(1);
	return 0;
}