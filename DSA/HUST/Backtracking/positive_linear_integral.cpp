#include <iostream>
using namespace std;
int n;
int M;
int a[1000];
int x[1000];
int count = 0;
void sol(){
	count ++;
}
void Try(int k, int sum){
	for (int v=1; v<=M-sum; v++){
		if (sum+a[k]<=M){
		x[k] = v;
		sum += x[k]*a[k];
		if (sum==M && k==n) sol();
		else if(k<n) Try(k+1, sum);
		x[k] = 0;
		sum-=a[k]*v;
	}
}
}
int main(){
	cin >> n >> M;
	for (int i=1; i<=n; i++){
		cin >> a[i];
	}
	Try(1, 0);
	cout << count;
}