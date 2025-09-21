#include <iostream>
#include <cmath> 
using namespace std;
int powerSum(int X, int N, int num) {
    int value = pow(num, N);
    if (value == X) return 1;
    if (value > X) return 0;
    return powerSum(X - value, N, num + 1) + powerSum(X, N, num + 1);
}
int main() {
    int X, N;
    cin >> X >> N;
    cout << powerSum(X, N, 1) << endl;
    return 0;
}
