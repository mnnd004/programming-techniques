//Matrix_Addition
#include <iostream>

using namespace std;

float **Matrix_Input(int R, int C){
  float **M = new float *[R];
  for (int i = 0; i < R; i++){
    M[i] = new float [C];
  }
  for (int i = 0; i < R; i++){
    for (int j = 0; j < C; j++){
      cout << i+1 <<" " << j+1 <<"Component:";
      cin >> M[i][j];
    }
  }
  return M;
}

float **Matrix_Add(float **M1, float **M2, int R, int C){
  float **M = new float *[R];
  for (int i = 0; i < R; i++){
    M[i] = new float [C];
  }
  for (int i = 0; i < R; i++){
    for (int j = 0; j < C; j++){
      M[i][j] = M1[i][j] + M2[i][j];
    }
  }
  return M;
}

void Print_Matrix(float **M, int R, int C){
  for (int i = 0; i < C; i++){
    for (int j = 0; j < R; j++){
      cout << M[i][j] << " ";
    }
    cout << endl;
  }
}

int main(){
  int C, R;
  cout << "Column Input: " << endl;
  cin >> C;
  cout << "Row Input:" << endl;
  cin >> R;
  cout << "Input matrix 1" << endl;
  float **M1 = Matrix_Input(R, C);
  cout << "Input matrix 2" << endl;
  float **M2 = Matrix_Input(R, C);
  float **M3 = Matrix_Add(M1, M2, R, C);
  Print_Matrix(M3, R, C);
  return 0;
}