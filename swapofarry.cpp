int revarry(int arry[], int sz){
        int start=0 ; int end = sz-1;
        while(start< end){
            swap(arry[start], arry[end]);
            start++;
            end--;
        }
}
int main(){
    int arry[]={1 , 2 , 3 , 4, 5};
    int sz=5;
    revarry(arry ,sz);
    for(int i=0; i<sz; i++){
        cout<<' '<< arry[i];
    }
  return 0;
}
