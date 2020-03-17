#include<stdio.h>
#include<conio.h>
void push(char );
void pop();
void display();
void pop();
char arr[20];

int top=-1;
int main(){
    clrscr();
   
    push(2);
    push(2);
    push(10);

    
    display();
    return 0;

}
void display(){
    for(int i=0;i<=top;i++){
        printf(" %d",arr[i]);
    }
}
void push(char num){

    if(top==20){
        printf("stack is full");
    }else{
        top++;
        arr[top]=num;
    }
} 


void pop(){
    if(top==-1){
        printf("stack is empty");
    }else{
        top--;
    }
}