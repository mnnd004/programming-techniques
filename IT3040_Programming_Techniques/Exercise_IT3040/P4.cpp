//Number of char in array using pointer
#include <iostream>

using namespace std;

int main(){
  char str[1000];
  int count;
  cout << "Nhap vao mang" << endl;
  for (int i = 0; i < 1000; i++){
    cin >> str[i];
    if (str[i] == '0') break;
  }
  char *p;
  p = str;
  while (*p != '\0')
  {
    count++;
    p++;
  }
  cout << count << endl;
  return 0;
}