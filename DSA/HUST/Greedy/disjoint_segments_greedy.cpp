#include <iostream>
#define N 100001
using namespace std;
int n;
int count;
typedef struct Segment{
	int a, b;

}Segment;

Segment	s[N];//input array
Segment ans[N];//answer array
///
void input(){
	cin >> n;
	for (int i = 1; i<=n; i++){
		cin >> s[i].a >> s[i].b;
	}
}
//
void sorting(){
	for (int i = 1; i<=n-1; i++ ){
		for (int j =i+1; j<=n; j++){
			if (s[j].b < s[i].b){
				Segment tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}
		}
	}
}
///
void solve(){
	sorting();
	ans[1] = s[1];
	int j = 1;
	for (int i = 2; i<=n; i++){
		if (s[i].a >= ans[j].b){
			ans[j+1] = s[i];
			j++;
		}
	}
	for (int i = 1; i<=n; i++){
		if (ans[i].a >= 0 && ans[i].b > 0){
			count++;
		}
	}

}
int main(){
	input();
	solve();
	cout << count;
	return 0;

}