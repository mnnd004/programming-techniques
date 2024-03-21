#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


void DP(){
    int a[] = {-2,11,-4,13,-5,2};
    int n = 5;
    int ei = a[0];//Day con lon nhat co chua ai
    int si = a[0];//Day con lon nhat cua day {a1,a2,...,ai}
    for (int i=1; i<n; i++){
            ei = max(a[i],ei+a[i]);
            si = max(si,ei);
    }
    cout<<"Tong day con lon nhat la: "<<si<<endl;

}
int main(){
    int a[] = {-2,11,-4,13,-5,2};
    int n = 5;
    DP();
    return 0;
}