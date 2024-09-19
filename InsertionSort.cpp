#include<iostream>
using namespace std;
void InsertionSort(int a[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
    }
}
void printArr(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[5]={1,5,2,8,6};
    InsertionSort(a,5);
    printArr(a,5);
    return 0;
}