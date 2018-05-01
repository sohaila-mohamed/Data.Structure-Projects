#ifndef MEMBER3_HPP
#define MEMBER3_HPP
#include <iostream>


namespace queue
{
struct node
{
    double data;
    struct node *next;
};
struct DoublesQueue
{
    node *front = NULL;
    node *rear = NULL;
};
bool isEmpty(DoublesQueue &Queue)
{
    return Queue.front == NULL;
}
void enqueue(DoublesQueue &Queue, double data)
{
    node *inElement;

    if (Queue.front->next == Queue.rear)
    {
        Queue.rear->data = data;
        Queue.rear->next = inElement;
        inElement->next = NULL;
    }
}
double dequeue(DoublesQueue &Queue)
{
    {
        double outElememt;
        if (Queue.front != NULL)
        {
            outElememt = Queue.front->data;
            Queue.front == Queue.front->next;
        }

        std::cout << "queue is empty" << std::endl;
        return outElememt;
    }
}
double front(DoublesQueue &Queue)
{
    return Queue.front->data;
}
int size(DoublesQueue &Queue)
{
    int i = 1; //number of elements in the queue
    node *temp = Queue.front;
    while (temp != Queue.rear)
    {
        i++;
        temp++;
    }

    return i;
}
void clear(DoublesQueue &Queue)
{
    Queue.front = NULL;
    Queue.rear = NULL;
}




//start of char


struct Cnode
{
    char data;
    struct Cnode *next;
};
struct CharQueue
{
    Cnode *front = NULL;
    Cnode *rear = NULL;
};
bool isEmpty(CharQueue &Queue)
{
    return Queue.front == NULL;
}
void enqueue(CharQueue &Queue, char data)
{
    Cnode *inElement;

    if (Queue.front->next == Queue.rear)
    {
        Queue.rear->data = data;
        Queue.rear->next = inElement;
        inElement->next = NULL;
    }
}
char dequeue(CharQueue &Queue)
{
    {
        char outElememt;
        if (Queue.front != NULL)
        {
            outElememt = Queue.front->data;
            Queue.front == Queue.front->next;
        }

        std::cout << "queue is empty" << std::endl;
        return outElememt;
    }
}
char front(CharQueue &Queue)
{
    return Queue.front->data;
}
int size(CharQueue &Queue)
{
    int i = 1; //number of elements in the queue
    Cnode *temp = Queue.front;
    while (temp != Queue.rear)
    {
        i++;
        temp++;
    }

    return i;
}
void clear(CharQueue &Queue)
{
    Queue.front = NULL;
    Queue.rear = NULL;
}


}
#endif // MEMBER3_HPP
