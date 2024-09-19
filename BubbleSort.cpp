# include<iostream>
using namespace std;
//adjacent swapping. Max elements in last place
void Bubble_Sort(int a[],int n){
    //outer loop places the largest unsorted element in its correct position
    for(int i=n-1;i>=1;i--){
        // This loop compares adjacent elements and performs swaps if necessary
        for(int j=0;j<i;j++){
            if(a[j+1]<a[j]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
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
    Bubble_Sort(a,5);
    printArr(a,5);
    return 0;
}