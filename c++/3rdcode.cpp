#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of digits: ";
    cin >> n;
    long long f1 = 1, f2 = 1;
    int index = 2;
    while (to_string(f2).length() < n) {
        long long temp = f2;
        f2 = f1 + f2;
        f1 = temp;
        index++;
    }
    cout << "The first Fibonacci term with " << n << " digits is at index: " << index << endl;
    return 0;
}
