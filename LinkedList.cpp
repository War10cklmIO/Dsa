#include<iostream>
#include<vector>
struct Node{
    int data;
    Node* next;

    Node(int data1,Node* next1=nullptr){
        data=data1;
        next=next1;
    }
};
int main(){
    vector<int> arr={1,2,3,4};
    Node* y=new Node(arr[0],nullptr);
    cout<<y->data;
}
