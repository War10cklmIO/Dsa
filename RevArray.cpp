# include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void revArr(int a[],int n){
    int i=0,j=n-1;
    for(i=0;i<=n/2;i++){
        swap(&a[i],&a[j]);
        j--;
    }
}
void printArr(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Ent no of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    revArr(a,n);
    printArr(a,n);
}