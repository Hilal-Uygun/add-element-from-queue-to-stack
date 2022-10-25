#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define size 100

struct stack{
int top;
int items_stack[size];
};
struct stack s;

struct queue{
int front;
int rear;
int items_queue[size];
};
struct queue q;

void push(struct stack s, int a){
  if(s.top == size){
    exit(1);
  }
  else{
    s.items_stack[++(s.top)] = a;
  }
  return;
}

bool isFull(struct queue q){
  if(q.rear == size){
    return true;
  }
  return false;
}

void ekle(int x){
  if(isFull(q)){
    return;
  }
  else{
    q.items_queue[q.rear] = x;
    (q.rear)++;
  }
}

void append(){
  for(int i=0;i<size;i++){
    int num = rand()%1000;
    ekle(num);
    printf("%d. %d\n", i+1, num);
  }
  return;
}

int main(void) {
  printf("-----------------------Here is queue---------------------\n");
  append();
  printf("-----------------------Here is stack---------------------\n");
  for(int i=0; i<size;i++){
    int a_s = q.items_queue[i];
    push(s, a_s);
    printf("%d. %d\n", size-i, a_s);
  }
} 