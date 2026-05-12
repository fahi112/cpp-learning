#include <iostream>
using namespace std;
int bintodec(int n){
   int ans=0 ; int pow=1;
    while(n>0){
        int rem=n%10;
        n/=10;
        ans+=(rem*pow);
        pow*=2;
    }
    return ans;
}
int main(){
    cout<< "dec is : "<<bintodec(101010)<< endl;
}
