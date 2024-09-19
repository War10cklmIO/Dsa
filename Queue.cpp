# include<iostream>
using namespace std;
class Queue{
    public:
    int *arr;
    int qfront;
    int rear;
    int size;

    Queue(int size){
        this->size=size;
        arr= new int[size];
        qfront=0;
        rear=0;
    }
    bool isEmpty(){
        return qfront==rear;
    }
    void enque(int data){
        if(rear==size){
            cout<<"Queue is full";
        }else{
            arr[rear]=data;
            rear++;
        }
    }
    int dequeue(){
        if(qfront==rear){//no elements present
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            int result=arr[qfront];
            qfront++;
            if(qfront==rear){
                qfront=0;
                rear=0;
            }
            return result;
        }
    }
    int front(){
        if(qfront == rear){
            return -1;
        }else{
            return arr[qfront];
        }
    }
};
int main(){
    Queue q(5);
    q.enque(1);
    q.enque(2);
    q.enque(3);
    cout<<"Element dequeued: "<<q.dequeue();

}