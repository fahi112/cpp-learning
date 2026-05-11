#include <iostream>
using namespace std;
int ncr(int n , int r){
     int x=1;
     for(int i=1; i<=n ; i++){
         x*=i;
    

     }
     int m=1;
     for ( int j=1; j<=r; j++){
         m*=j;
        
     }
     int y=1;
     for ( int j=1; j<=n-r; j++){
         y*=j;
     }
     return x/(m*y);
 }
 int main (){
     cout<<" ncr is: "<< ncr(6,2)<< endl;
     cout<<" ncr is: "<< ncr(8,4)<< endl;
     cout<<" ncr is: "<< ncr(10,6)<< endl;
}
