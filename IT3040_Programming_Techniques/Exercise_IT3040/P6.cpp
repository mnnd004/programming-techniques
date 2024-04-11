//Selection sort
#include <iostream>

using namespace std;

bool ascending(int left, int right){
  return left > right;
}

bool descending(int left, int right){
  return left < right;
}
void selectionSort(int *arr, int length, bool (*compFunction) (int, int)){
  for (int i = 0; i < length; i++){
    int min = i;
    for (int j = i+1; j < length; j++){
      if (compFunction(arr[min], arr[j])){
        min = j;
      }
    }
    swap(arr[i], arr[min]);
  }
}

int *inputArr(int n){
  int *arr = new  int [n];
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  return arr;
}

void printArray(int *arr, int n){
  for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
}
int main(){
  int n;
  cout << "Arr length";
  cin >> n;
  int *arr = new  int [n];
  arr = inputArr(n);
  cout << "Array before sorting: ";
  printArray(arr, n); cout << endl;
  selectionSort(arr, n, ascending);
  cout << "Array after sorting: ";
  printArray(arr, n);
  delete [] arr;
  return 0;
}