# include<iostream>
using namespace std;
void SelectionSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_index]){
                min_index=j;
            }
        }
        if(min_index!=i){
            int temp=a[i];
            a[i]=a[min_index];
            a[min_index]=temp;
        }
    }
}
void printArr(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[5]={7,2,5,1,4};
    SelectionSort(a,5);
    printArr(a,5);
    return 0;

}