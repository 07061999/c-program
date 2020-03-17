#include<stdio.h>
#define SIZE 10
int cirQueue[SIZE];
int front=-1;
int rear=-1;
void enqueue(int );
void dequeue();
void display();
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(50);
    enqueue(40);
    enqueue(50);
    enqueue(50);
    enqueue(50);
    dequeue();
    dequeue();
    dequeue();
    enqueue(23);
    dequeue();
  
    display();
    display();

}
void enqueue(int item){
    if((front==rear+1)||(front==0 && rear==SIZE-1)){
        printf("circular queue is full");
    }else{
        if(front==-1){
            front=0;

        }
           
        rear=(rear+1)%SIZE;
        cirQueue[rear]=item;

    }
}
void dequeue(){
    if(front==-1){
        printf("circular queue is empty");
    }else{
        if(front==rear){
            front=-1;
            rear=-1;
        }else{
            front=(front+1)%SIZE;
        }
    }
}
void display(){
    if(front==-1){
        printf("cirQueue is empty");
    }else{
        for(int i=front;i!=rear;i=(i+1)%SIZE){
            printf(" %d",cirQueue[i]);

        }
        printf(" %d",cirQueue[rear]);
    }
    
}