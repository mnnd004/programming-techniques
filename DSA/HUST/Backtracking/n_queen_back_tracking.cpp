#include <iostream>
using namespace std;
int N = 10;
int x[10];
int row[100] = {};
int d1[100] = {};
int d2[100] = {};
// void solution(){
// 	for (int k = 1; k <= N; k++){//loop column
// 	for (int i = 1; i <= N; i++){//loop row
// 		if (x[k]==i) cout<<"*";
// 		else cout<<"_ ";
// }
// 	cout<<endl;
// }
// }
void solution(){
	for (int i = 1; i <= N; i++){
		cout<<"Queen"<<i<<": "<<x[i]<<endl;

	}
	// exit(1);
}
int check(int i, int j){
	for (int k = 1; k < i; k++){
		if (d1[i]==d1[k] || d2[i]==d2[k] || row[i]==row[k]) return 0;
	}
	return 1;
}
void Try(int i){//try i-th queen
	for (int j = 1; j <= N; j++ ){//loop all row
		d1[i] = i+j-1;
		d2[i] = i-j+N;
		row[i] = j;
		if (check(i, j)){
		x[i] = j;
		if (i==N) {solution(); break;}
		else Try(i+1);
	}
}
}
int main(){
	Try(1);
	return 0;
}