#ifndef MEMBER1_HPP
#define MEMBER1_HPP

//make special types for stack to hold values 
namespace stack 
{
struct IntegersStack
{
   int *buffer=NULL; //an array of size 100 to hold values in stack
   int top = -1; //stack initially empty
};

struct CharStack //same as IntegersStack
{
   char buffer [100];
   int top = -1;
};

//begining of functions 

void push( IntegersStack &stack , int data )
{

  ++stack.top ; //increment top to point to the last added element
  stack.buffer [stack.top] = data ; //adding the element through array(buffer) into place(top)

}

int pop( IntegersStack &stack )
{
  int lifo = stack.buffer [stack.top] ;
  --stack.top ; 
  return lifo ;
}

int front( IntegersStack &stack )
{
    return stack.top ; //front or head or top all are the same
}

bool isEmpty( IntegersStack &stack )
{
    return stack.top == -1 ;
}

int size( IntegersStack &stack )
{
   return stack.top + 1 ; //since top will start from (0) till end of stack so we +1 to make size (1 to 100)
}

void clear( IntegersStack &stack )
{
  stack.top = -1 ; //since top is the master if we made it as empty stack would be cleared

}
void CalculateTheSpan(int *pr,int n,int * s)
{
    IntegersStack st;
    st.buffer=new int[n];
    push(st,0);
    s[0]=1;
    for( int i=1;i<=n;i++)
    {
        while(pr[st.top]<pr[i])
        {
            if(!isEmpty(st))
            {
              pop(st);
            }

        }
        if(isEmpty(st))
        s[i]=i+1;
        else
        s[i]=i-st.top;

    push(st,i);
    }    
    



}    



//character stacks, same as integer but change type into char 



void push( CharStack &stack , char data )

{

  ++stack.top ;
  stack.buffer [stack.top] = data ;

}

char pop( CharStack &stack )
{
  char lifo = stack.buffer [stack.top] ;
  --stack.top ;
  return lifo ;
}

char front( CharStack &stack )
{
    return stack.top ;
}

bool isEmpty( CharStack &stack )
{
    return stack.top == -1 ;
}

int size( CharStack &stack ) //size is int anyway 
{
   return stack.top + 1 ;
}

void clear( CharStack &stack )
{
  stack.top == -1 ;

}
}
#endif // MEMBER1_HPP
