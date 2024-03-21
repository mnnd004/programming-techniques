#include <stdio.h>
void move(int n, char A, char B, char C){
	if(n==1) {
		printf("Move %d disk from %c to %c \n",n,A,B);}
	else{
		move(n-1, A, C, B);
		move(1, A, B, C);
		move(n-1, C, B, A);

	}
}
int main(){
	move(10, 'A', 'B', 'C');
	return 0;
}