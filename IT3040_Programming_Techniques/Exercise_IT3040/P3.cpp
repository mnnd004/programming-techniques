//Sum of array using pointer
#include <iostream>

using namespace std;

int main(){
  int numArray[6];
  int i, sum = 0;
  int *ptr = numArray;
  cout << "Nhap 6 phan tu" << endl;
  for (int i = 0; i < 6; i++){
    cin >> *(ptr+i);
    sum = sum + *(ptr+i);
  }
  cout << sum;
  return 0;
}