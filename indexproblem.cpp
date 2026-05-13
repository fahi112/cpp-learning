int main(){
    int size=5;
    int smallest =INT_MAX;
    int marks[]={23 , 8 , 35 , 12, 8  };
    for( int i=0; i<size;i++){
        if(marks[i]<smallest){
            smallest=marks[i];
        }
    }
    for(int j=0;j<size; j++){
            if (smallest==marks[j]){
            cout<<' '<<j;
    }
}
return 0;
}
