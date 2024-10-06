#include <iostream>
using namespace std;

int main(){
    int n=1089;
int sum=0;
while(n>0){
    int last=n%10;
    if(last%2!=0){
 sum=sum+last;}
cout<<last;
     n=n/10;
}cout<<sum;
     return 0;
}
