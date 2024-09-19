# include<iostream>
using namespace std;
int binarySearch(int a[],int size,int key){
    int start=0;
    int end=size-1;
    bool isAscending=a[1]>a[0];

    while(start<=end){
        int mid = start + (end-start)/2;
        if(key==a[mid]){
            return mid;
        }
        if(isAscending){
            if(key>a[mid]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }else{
            if(key>a[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
    }
    return -1;
}
int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={5,4,3,2,1};

    int evenIndex=binarySearch(even,6,4);
    int oddIndex=binarySearch(odd,5,2);
    cout<<"Index of 4: "<<evenIndex<<endl;
    cout<<"Index of 2: "<<oddIndex<<endl;

    return 0;
}