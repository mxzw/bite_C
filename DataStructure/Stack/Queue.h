#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int QDataType;

typedef struct QListNode 
{ 
    struct QListNode* next; 
    QDataType data; 
}QNode; 

// 队列的结构 
typedef struct Queue 
{ 
    QNode* front;
    QNode* tail; 
}Queue; 

// 初始化队列 
void QueueInit(Queue* q); 
// 队尾入队列 
void QueuePush(Queue* q, QDataType data); 
// 队头出队列 
void QueuePop(Queue* q); 
// 获取队列头部元素 
QDataType QueueFront(Queue* q); 
// 获取队列队尾元素 
QDataType QueueBack(Queue* q); 
// 获取队列中有效元素个数 
int QueueSize(Queue* q); 
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
int QueueEmpty(Queue* q); 
// 销毁队列 
void QueueDestroy(Queue* q);