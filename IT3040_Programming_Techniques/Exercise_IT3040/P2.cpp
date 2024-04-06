#include <iostream>

using namespace std;

int n, even, odd, cnt1, cnt2;
int main(){
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
        if (a[i]%2) ++odd;
        else ++even;
    }
    int *even_arr = new int[even];
    int *odd_arr = new int[odd];
    for (int i = 0; i < n; i++){
        if (a[i]%2) odd_arr[cnt1++] = a[i];
        else even_arr[cnt2++] = a[i];
    }
    for (int i = 0; i < even; i++){
        cout << even_arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < odd; i++){
        cout << odd_arr[i] << " ";
    }
    return 0;
}