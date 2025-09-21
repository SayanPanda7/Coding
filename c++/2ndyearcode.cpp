#include <iostream>
using namespace std;
// bool powerOfTwo(int n) {
//     if (n == 1)
//       return true;
//     if (n < 1 || n % 2 != 0)
//         return false;
//     return powerOfTwo(n / 2);
// }

bool powerOfTwo(int n){
    if(n ==1 ){
        true; 
    }
    if(n==0){
        false;
    }
    if(n%2!=0){
        false;
    }
    return powerOfTwo(n/2);
}

int main() {
    int n ;
    cin>>n;
    if (powerOfTwo(n)) {
        cout<<n << "is power of two";
    } 
    else {
        cout<<n << "is not power of two";
    }
    return 0;
}
