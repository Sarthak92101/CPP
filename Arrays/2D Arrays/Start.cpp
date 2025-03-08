#include <iostream>
using namespace std;

int main()
{
   // int Students[3][3] = {{100, 100, 100},
    //                      {75, 86, 33},
      //                    {76, 45, 93}};

      int student[3][4];
      int n=3,m=4;
      for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            cin>>student[i][j];
        }
      }

      for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            cout<<student[i][j];
        }
        cout<<endl;
      }
    //cout << Students[1][1] << endl;
    return 0;
}