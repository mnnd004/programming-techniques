#include <iostream>
#include <cmath>
using namespace std;
int maxLelf(int a[], int low, int mid){
    int sum = 0;
    int maxSum = INT_MIN;
    for (int i = mid; i>=low; i--){
        sum+=a[i];
        if (sum > maxSum) maxSum = sum;
    }
    return maxSum;

}
int maxRight(int a[], int mid, int high){
    int sum = 0;
    int maxSum = INT_MIN;
    for (int i=mid; i<=high; i++){
        sum+=a[i];
        if (sum > maxSum) maxSum = sum;
    }
    return maxSum;
}
int maxSub(int a[], int low, int high){
    if (low == high) return a[low];//base case
    else{
    int mid = (low+high)/2;
    int wL = maxSub(a, low, mid);
    int wR = maxSub(a, mid+1, high);
    int wM = maxLelf(a, low, mid) + maxRight(a, mid+1, high);
    return max(wL, max(wR, wM));
    }
}
int main(){
    int a[] = {-2,11,-4,13,-5,2};
    int n = 5;
    int maxsum = maxSub(a,0,n-1);
    cout<<"Tong day con lon nhat la: "<<maxsum<<endl;
}