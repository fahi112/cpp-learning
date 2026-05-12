#include <iostream>
using namespace std;
int main(){
    int n=4;
    int j=1;
for(int i=1; i<n;i*=2){
   j=j*i;
}
      if(j==n) {
        cout<< true;
      }
      else{
        cout<< false;
      
}
}
