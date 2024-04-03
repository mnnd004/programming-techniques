//calculate y-power of x without using math.h header
#include <iostream>
using namespace std;

float xPowery(double x, int y) {
    if (y == 0) return 1;
    if (y % 2 == 0) return xPowery(x, y/2) * xPowery(x, y/2);
    return x * xPowery(x, y/2) * xPowery(x, y/2);
}

int main() {
    int x, y;
    cin >> x >> y;
    float result = (y>0)? xPowery(x, y) : 1/xPowery(x, y);
    cout << result;
    return 0;
}