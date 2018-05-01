#ifndef MEMBER2_HPP
#define MEMBER2_HPP

#include<iostream>
namespace LinkdList
{
    struct node
{
    int data;
    node *next;

};
struct List
{
    node*head=NULL;
    node*tail=NULL;
};
int  Front(List &list)
{
    
    return list.head->data;  
}
bool IsEmpty (List &list)
{
    return(list.head==NULL);

}
int Size(List &list)
{
    int count=0;
    node*temp=list.head;
    while(temp->next!=NULL)
    {
         temp=temp->next;
         count=count+1;

    }
    return count+1;

}
void Clear(List &list)
{
    list.head=NULL;
}
node* SearchingForTheEnd(List &list)
{
    node*temp=list.head;
    while(temp->next!=NULL)
    {
         temp=temp->next;
    }
    return temp;
}
node* SearchForNode(List &list,int position)
{
    node*temp=list.head;
    for(int i=1; i<position ; i++)
    {
        if(temp->next!=NULL)
        {
            temp=temp->next;
        }
    }
    return temp;


}
void PrintAll(List & list)
{
    node*temp=list.head;
    while(temp->next!=NULL)
    {
        std::cout<<temp->data<<std::endl;
         temp=temp->next;
    }
    std::cout<<temp->data<<std::endl;
    


}
void FrontInsertion(List &list,int value)
{
    node*front=NULL;
    front=new node;
    front->data=value;
    front->next=list.head;
    list.head=front;
}
void BackInsertion(List &list,int value)
{
    node *back;
    back=new node;
    back->data=value;
    back->next=NULL;
    list.tail=SearchingForTheEnd(list);
    list.tail->next=back;

}
void MiddleInsertion(List &list,int value,int position)
{
    node*middle;
    middle=new node;
    middle->data=value;
    node*temp=list.head;
    for(int i=2; i<position ; i++)
    {
        if(temp->next!=NULL)
        {
            temp=temp->next;
        }
    }
    middle->next=temp->next;
    temp->next=middle;

}
void DeleteFromFront(List & list)
{
    list.head=list.head->next;

}
void DeleteFromBack(List &list)
{
    node*temp=list.head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}
void DeleteFromMiddle(List & list,int position)
{
   
    node*temp=list.head;
    for(int i=2; i<position ; i++)
    {
        if(temp->next!=NULL)
        {
            temp=temp->next;
        }
    }
    
   temp->next=temp->next->next;
    
}
}


/*char linked list */


struct chnode
{
    char data;
    chnode *next;

};
struct chList
{
    chnode*head=NULL;
    chnode*tail=NULL;
};
char  Front(chList &list)
{
    
    return list.head->data;  
}
bool IsEmpty (chList &list)
{
    return(list.head==NULL);

}
int Size(chList &list)
{
    int count=0;
    chnode*temp=list.head;
    while(temp->next!=NULL)
    {
         temp=temp->next;
         count=count+1;

    }
    return count+1;

}
void Clear (chList &list)
{
    list.head=NULL;
}
chnode* SearchingForTheEnd(chList &list)
{
    chnode*temp=list.head;
    while(temp->next!=NULL)
    {
         temp=temp->next;
    }
    return temp;
}
chnode* SearchForNode(chList &list,int position)
{
    chnode*temp=list.head;
    for(int i=1; i<position ; i++)
    {
        if(temp->next!=NULL)
        {
            temp=temp->next;
        }
    }
    return temp;


}
void PrintAll( chList & list)
{
    chnode*temp=list.head;
    while(temp->next!=NULL)
    {
        std::cout<<temp->data<<std::endl;
         temp=temp->next;
    }
    std::cout<<temp->data<<std::endl;
    


}
void FrontInsertion(chList &list,char ch)
{
    chnode*front=NULL;
    front=new chnode;
    front->data=ch;
    front->next=list.head;
    list.head=front;
}
void BackInsertion(chList &list,char ch)
{
    chnode *back;
    back=new chnode;
    back->data=ch;
    back->next=NULL;
    list.tail=SearchingForTheEnd(list);
    list.tail->next=back;

}
void MiddleInsertion(chList &list,char ch,int position)
{
    chnode*middle;
    middle=new chnode;
    middle->data=ch;
    chnode*temp=list.head;
    for(int i=2; i<position ; i++)
    {
        if(temp->next!=NULL)
        {
            temp=temp->next;
        }
    }
    middle->next=temp->next;
    temp->next=middle;

}
void DeleteFromFront(chList & list)
{
    list.head=list.head->next;

}
void DeleteFromBack(chList &list)
{
    chnode*temp=list.head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}
void DeleteFromMiddle(chList & list,int position)
{
   
    chnode*temp=list.head;
    for(int i=2; i<position ; i++)
    {
        if(temp->next!=NULL)
        {
            temp=temp->next;
        }
    }
    
   temp->next=temp->next->next;
}


/*double linked list */



struct doublenode
{
    double data;
    doublenode *next;

};
struct doubleList
{
    doublenode*head=NULL;
    doublenode*tail=NULL;
};
double  Front(doubleList &list)
{
    
    return list.head->data;  
}
bool IsEmpty (doubleList &list)
{
    return(list.head==NULL);

}
int Size(doubleList &list)
{
    int count=0;
    doublenode*temp=list.head;
    while(temp->next!=NULL)
    {
         temp=temp->next;
         count=count+1;

    }
    return count+1;

}
void Clear (doubleList &list)
{
    list.head=NULL;
}
doublenode* SearchingForTheEnd(doubleList &list)
{
    doublenode*temp=list.head;
    while(temp->next!=NULL)
    {
         temp=temp->next;
    }
    return temp;
}
doublenode* SearchForNode(doubleList &list,int position)
{
    doublenode*temp=list.head;
    for(int i=1; i<position ; i++)
    {
        if(temp->next!=NULL)
        {
            temp=temp->next;
        }
    }
    return temp;


}
void PrintAll( doubleList & list)
{
    doublenode*temp=list.head;
    while(temp->next!=NULL)
    {
        std::cout<<temp->data<<std::endl;
         temp=temp->next;
    }
    std::cout<<temp->data<<std::endl;
    


}
void FrontInsertion(doubleList &list,double value)
{
    doublenode*front=NULL;
    front=new doublenode;
    front->data=value;
    front->next=list.head;
    list.head=front;
}
void BackInsertion(doubleList &list,double value)
{
    doublenode *back;
    back=new doublenode;
    back->data=value;
    back->next=NULL;
    list.tail=SearchingForTheEnd(list);
    list.tail->next=back;

}
void MiddleInsertion(doubleList &list,double value,int position)
{
    doublenode*middle;
    middle=new doublenode;
    middle->data=value;
    doublenode*temp=list.head;
    for(int i=2; i<position ; i++)
    {
        if(temp->next!=NULL)
        {
            temp=temp->next;
        }
    }
    middle->next=temp->next;
    temp->next=middle;

}
void DeleteFromFront(doubleList & list)
{
    list.head=list.head->next;

}
void DeleteFromBack(doubleList &list)
{
    doublenode*temp=list.head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}
void DeleteFromMiddle(doubleList & list,int position)
{
   
    doublenode*temp=list.head;
    for(int i=2; i<position ; i++)
    {
        if(temp->next!=NULL)
        {
            temp=temp->next;
        }
    }
    
   temp->next=temp->next->next;
}









#endif // MEMBER2_HPP
