# include<iostream>
using namespace std;
class Stack{
    public:
    int top;
    int *arr;
    int size;

    Stack(int size){
        this->size=size;
        arr=new int[size];//new is used to allocate memory on the heap
        top=-1;
    }
    
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"Stack underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }
};
int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"Top element is: "<<s.peek()<<endl;
    if(s.isEmpty()){
        cout<<"Stack is empty";
    }else{
        cout<<"Stack is not empty"<<endl;
    }
    s.pop();
    cout<<"Top element: "<<s.peek()<<endl;
    s.pop();
    cout<<"Top element: "<<s.peek()<<endl;
    return 0;

}
