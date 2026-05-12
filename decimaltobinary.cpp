#include <iostream>
using namespace std;
 int dectobin( int n){
     int ans=0 ; int pow=1;
      while(n>0){
         int rem=n%2;
         n/=2;
         ans+=(rem*pow);
         pow*=10;
}
      return ans;
 }
 int main(){
     cout << "ans is : "<< dectobin(10)<< endl;
 }
