// #include<iostream>
// using namespace std;

// bool isPrime(int n){
//     if (n<=1){
//         return false;
//     }
//     for(int i=2;i*i<=n; i++){
//         if(n%2==0){
//             return false;
//         }

//     }
//     return true;
// }
// int  Prime(int n){
//     for(int i=2; i<=n;i++){
//         if(isPrime(i)){
//             cout<<i<<endl;
//         }
//     }
// }


// int main(){
//     cout<<Prime(50);
//     return 0;
// }

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}void Prime(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }
}

int main() {
    Prime(50);  // Just calling the function to print primes
    return 0;
}
