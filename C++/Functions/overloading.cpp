#include<iostream>
using namespace std;
// function overloading is same function name with diffrent parameters
int sum(int a, int b){
    cout<<a+b<<endl;
    return a+b;

}
int sum(double a, double b){
     cout<<a+b;
     return a+b;
}

int main(){
    sum(2,5);
    sum(2.5,3.5);
    return 0;
}

