#include <stdio.h>
#include <stdlib.h>
#define MAX 100

struct Queue{
    int arr[MAX];
    int front;
    int rear;
  
};
void initailizeQueue(struct Queue *queue){
    queue->front=-1;
    queue->rear=-1;
}
int isFull(struct Queue *queue){
    return queue->rear==MAX -1;
}
int isEmpty(struct Queue *queue){
    return queue->rear==MAX -1;||    queue->front > queue->rear;
void enqueue(struct Queue*queue,int element){
    if (isfull(queue))
