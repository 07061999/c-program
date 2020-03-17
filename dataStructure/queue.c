#include<stdio.h>
#define SIZE 5
void enqueue(int);
void dequeue();
void display();

int queue[SIZE];
int front=-1;
int rear=-1;
int main(){
enqueue(10);
enqueue(20);
enqueue(20);
dequeue();
display();
}

void enqueue(int item){
    if(rear==SIZE-1){
        printf("Queue is Full");
    }else{
        if(front==-1){  
            front=0;
        }
        rear++;
        queue[rear]=item;

    }
}

void dequeue(){
    if(front==-1){
        printf("queue is empty");
    }else{
        front++;
        if(front>rear){
            front=rear=-1;
        }
    }

}
void display(){
    for(int i=front;i<=rear;i++){
        printf(" %d",queue[i]);
    }
}