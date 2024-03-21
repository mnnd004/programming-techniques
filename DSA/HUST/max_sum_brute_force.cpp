#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a[] = {-2,11,-4,13,-5,2};
    int n = 5;
    int MAXSUM = INT_MIN;//INT_MIN là int min = -2^31
    for (int i = 0; i<=n-1; i++){
        int sum = 0;
    for (int j = i; j<=n-1; j++){
            sum+=a[j];
            if (sum > MAXSUM) MAXSUM = sum;
        
    }
}
    cout<<"Tong day con lon nhat la: "<<MAXSUM<<endl;
}