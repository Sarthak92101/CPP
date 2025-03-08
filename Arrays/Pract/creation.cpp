#include<iostream>
using namespace std;

int main(){
    int marks[50]={1,2,3,4,5,6,7,8,9};
    cout<<marks[15]<<endl;
    int len= sizeof(marks)/sizeof(int);
    cout<<len<<endl;
    cout<<sizeof(marks);
    return 0;
}