#ifndef MEMBER4_HPP
#define MEMBER4_HPP
#include <iostream>
#define MaxSize 10
namespace queue
{
//start of double queue

struct DQueue
{
    int size = 0;
    double array[MaxSize];
    int front = 0;
    int rear = -1;
};
void enqueue(double data, DQueue &Queue)
{
    if (Queue.size == MaxSize)
    {
        std::cout << "queue is full";
    }
    else
    {
        Queue.rear = Queue.rear++ % MaxSize;
        Queue.array[Queue.rear] = data;
        Queue.size++;
    }
}

bool isEmpty(DQueue &Queue)
{
    return (Queue.size == 0);
}

double dequeue(DQueue &Queue)
{
    if (isEmpty(Queue))
    {
        return -1;
    }
    else
    {
        Queue.front = Queue.front++ % MaxSize;
        Queue.size--;
    }
}

double front(DQueue &Queue)
{
    return Queue.array[Queue.front];
}

int size(DQueue &Queue)
{
    return Queue.size;
}

void clear(DQueue &Queue)
{
    Queue.rear = -1;
    Queue.front = 0;
    Queue.size = 0;
}

// start of char queue
struct CQueue
{
    int size = 0;
    char array[MaxSize];
    int front = 0;
    int rear = -1;
};
void enqueue(char data, CQueue &Queue)
{
    if (Queue.size == MaxSize)
    {
        std::cout << "queue is full";
    }
    else
    {
        Queue.rear = Queue.rear++ % MaxSize;
        Queue.array[Queue.rear] = data;
        Queue.size++;
    }
}

bool isEmpty(CQueue &Queue)
{
    return (Queue.size == 0);
}

char dequeue(CQueue &Queue)
{
    if (isEmpty(Queue))
    {
        return -1;
    }
    else
    {
        Queue.front = Queue.front++ % MaxSize;
        Queue.size--;
    }
}

char front(CQueue &Queue)
{
    return Queue.array[Queue.front];
}

char size(CQueue &Queue)
{
    return Queue.size;
}

void clear(CQueue &Queue)
{
    Queue.rear = -1;
    Queue.front = 0;
    Queue.size = 0;
}
}

#endif // MEMBER4_HPP
