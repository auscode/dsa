#include <bits/stdc++.h>
#define MAX_SIZE 100

using namespace std;

struct Queue{
    int arr[MAX_SIZE];
    int front;
    int rear;
};
bool isEmpty(Queue& q){
    return (q.front==-1&&q.rear==-1);
}
void initQueue(Queue& q){
    q.front=-1;
    q.rear=-1;
}
void display(Queue& q){
    if(isEmpty(q)){
        cout<<"The Q is empty";
        return;
    }
    for(int i=q.front;i<=q.rear;i++){
        cout<<q.arr[i]<<" ";
    }
    cout<<endl;
}

bool isFull(Queue& q){
    return (q.rear==MAX_SIZE-1);
}
int peek(Queue& q){
    if(isEmpty(q)){
        cout<<"Q is empty";
        return -1;
    }
    return q.arr[q.front];  
}
int sizeq(Queue& q){
    int count{0};
    for(int i =q.front;i<=q.rear;i++){
        count++;
    }
    return count;
}
void clear(Queue& q){
    q.front=-1;
    q.rear=-1;
}


bool enqueue(Queue& q, int value){
    if(q.rear==MAX_SIZE-1){
        cout<<"overflow cannot insert"<<endl; 
        return false;
    }
    if(q.front==-1){
        q.front =0;
    }
    q.rear++;
    q.arr[q.rear]=value;
    return true;
}
int dequeue(Queue& q){
    if(isEmpty(q)){
        cout<<"the Q is empty"<<endl;
        return -1;
    }
    int value = q.arr[q.front];
    if(q.front==q.rear){
        q.front=-1;
        q.rear=-1;
    }else{
        q.front++;
    }
    return value; 
}


int main (){
    Queue q;
    initQueue(q);
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    display(q);
    dequeue(q);
    dequeue(q);
    display(q);
    return 0;
}
