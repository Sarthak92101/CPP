#include <iostream>
using namespace std;


int mul(int a,int b){
    int mul=a*b;
    return mul;
}

int diff(int a, int b){
    int diff = a-b;
    return diff;
}

int main(){
    int m = mul(2,4);
    int d =  diff(4,2);
    cout<<m<<endl<<d<<endl;
    return 0;
}