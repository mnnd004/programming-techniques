#include <iostream>
using namespace std;
int a[10][10];
int markR[10][10];
int markC[10][10];
int markZ[4][4][10];
void solution(){
	for (int h = 1;h <= 9; h++){
	for (int c = 1; c <= 9; c++){
		cout<<a[h][c]<<' ';
	}
	cout<<endl;

}
exit(1);
}
// int check_k(int i, int j){
// 	if (i <= 3 && j <= 3)  return 1;
// 	else if (i <= 3 && j <= 6 && j >= 4)  return 2;
// 	else if (i <= 3 && j <= 9 && j >= 7)  return 3;
// 	else if (i <= 6 && i >= 4 && j <= 3 && j >= 1)  return 4;
// 	else if (i <= 6 && i >= 4 && j <= 6 && j >= 4)  return 5;
// 	else if (i <= 6 && i >= 4 && j <= 9 && j >= 7)  return 6;
// 	else if (i <= 9 && i >= 7 && j <= 3 && j >= 1)  return 7;
// 	else if (i <= 9 && i >= 7 && j <= 6 && j >= 4)  return 8;
// 	else if (i <= 9 && i >= 7 && j <= 9 && j >= 7)  return 9;
	
// 	return 0;
// }
int check(int i, int j, int k){
	// cout<<"Check"<<i<<j<<k;
	if (markR[i][k] == 1) return 0;
	if (markC[j][k] == 1) return 0;
	if (markZ[(i+2)/3][(j+2)/3][k] == 1) return 0;
	return 1;
}
void Try(int i, int j){
	for (int k = 1; k <= 9; k++){
		// cout << k << k_i << " ";
		// khu[k_i][k] = 0;
		if (check(i, j, k)){
			a[i][j] = k;
			markR[i][k] = 1;
			markC[j][k] = 1;
			markZ[(i+2)/3][(j+2)/3][k] = 1;
			// cout<<k<<k_i<<" ";
			if (i == 9 && j == 9) solution();
			else{
				if (j==9) Try(i+1,1);
				else Try(i,j+1);
			}
			markR[i][k] = 0;
			markC[j][k] = 0;
			markZ[(i+2)/3][(j+2)/3][k] = 0;//khoi phuc trang thai
		}
	}
}
int main(){
	for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            for(int k = 0; k < 10; k++) {
                markZ[i][j][k] = 0;
                  
                }
            }
        }
        for(int j = 0; j < 10; j++) {
            for(int k = 0; k < 10; k++) {
                markR[j][k] = 0;
                  }
            }
    for(int i = 0; i < 10; i++) {
            for(int k = 0; k < 10; k++) {
                markC[i][k] = 0;
                  
                }
            }
    for(int i = 0; i < 10; i++) {
            for(int k = 0; k < 10; k++) {
                a[i][k] = 0;
                  
                }
            }
	Try(1, 1);
	cout<<"End";
	return 0;
}