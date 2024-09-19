# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array length";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int hash[100001]={0};
    int largest=a[0];
    //pre computation
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
        hash[a[i]]++;
    }
    for(int i=0;i<largest;i++){
        if(hash[i]>0){
            cout<<"Frequency of "<<i<<" : "<<hash[i]<<endl;
        }
    }
    return 0;
}