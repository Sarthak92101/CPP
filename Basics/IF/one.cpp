#include<iostream>
using namespace std;

int main(){
int marks;

cout<<"Enter your marks";
cin>>marks;

if(marks>=75){
    cout<<"You just pass";
}
else if(marks>=33){
    cout<<"Congratulation you passed with distinction";
}
else{
    cout<<"Oops you fail";
}

return 0;
}