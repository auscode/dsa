#include <bits/stdc++.h>
#define MAX_SIZE 50
using namespace std;

struct Stack{
    int arr[MAX_SIZE];
    int top;
};
void initStack(Stack& s){
    s.top =-1;   
}
bool isEmpty(Stack& s){
    return (s.top==-1);
}
bool isFull(Stack& s){
    return (s.top==MAX_SIZE-1);
}
void display(Stack& s){
    if(isEmpty(s)){
        cout<<"Stack si empty"<<endl;
        return;    
    }
    for(int i=s.top; i>=0; i--){
        cout<<s.arr[i]<<" ";
    }
    cout<<endl;
}
int peek(Stack& s){
    if(isEmpty(s)){
        cout<<"Stack is Empty";
        return -1;
    }
    return (s.arr[s.top]);
}
int sizeStack(Stack& s){
    return s.top+1;
}
bool push(Stack& s, int value){
    if(isFull(s)){
        cout << "Overflow! Cannot push " << value << endl;
        return false;
    }
    s.top++;
    s.arr[s.top]=value;
    return true;
}
int pop(Stack& s){
    if(isEmpty(s)){
        cout << "Underflow! Stack is empty." << endl;
        return -1;
    }
    int value = s.arr[s.top];
    s.top--;
    return value;
}
void clear(Stack& s){
    s.top=-1;
}

int main(){
    Stack s;
    
    initStack(s);
    push(s,10);
    push(s,20);
    push(s,30);
    
    display(s);
    pop(s);
    display(s);
    peek(s);
    sizeStack(s);
    
    clear(s);
    display(s);
    
    return 0;
}
