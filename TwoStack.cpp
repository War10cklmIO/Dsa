#include <iostream>
using namespace std;

class Stack {
public:
    int top1;
    int top2;
    int size;
    int *arr;

    Stack(int s) {
        size = s;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }

    ~Stack() {
        delete[] arr;
    }

    void push1(int element) {
        if (top2 - top1 > 1) { // Ensure there is space
            top1++;
            arr[top1] = element;
        } else {
            cout << "Stack Overflow: Unable to push to Stack 1." << endl;
        }
    }

    void pop1() {
        if (top1 >= 0) { // Ensure stack is not empty
            top1--;
        } else {
            cout << "Stack Underflow: Unable to pop from Stack 1." << endl;
        }
    }

    void push2(int element) {
        if (top2 - top1 > 1) { // Ensure there is space
            top2--;
            arr[top2] = element;
        } else {
            cout << "Stack Overflow: Unable to push to Stack 2." << endl;
        }
    }

    void pop2() {
        if (top2 < size) { // Ensure stack is not empty
            top2++;
        } else {
            cout << "Stack Underflow: Unable to pop from Stack 2." << endl;
        }
    }

    void display1() {
        if (top1 >= 0) {
            cout << "Stack 1 elements: ";
            for (int i = 0; i <= top1; i++) { //top1 represent index itself. Hence, i<=top1
                cout << arr[i] << " ";
            }
            cout << endl;
        } else {
            cout << "Stack 1 is empty." << endl;
        }
    }

void display2() {
        if (top2 < size) {
            cout << "Stack 2 elements: ";
            for (int i = top2; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        } else {
            cout << "Stack 2 is empty." << endl;
        }
    }
};

int main() {
    Stack s(10);

    s.push1(5);
    s.push1(10);
    s.push2(20);
    s.push2(25);

    s.display1(); // Expected: 5 10
    s.display2(); // Expected: 25 20

    s.pop1();
    s.pop2();

    s.display1(); // Expected: 5
    s.display2(); // Expected: 25

    return 0;
}
