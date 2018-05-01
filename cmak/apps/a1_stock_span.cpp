#include <iostream>
#include"member1.hpp"
using namespace stack;
int main ()
{
  int size;
  int newElement;
  int *pr=NULL;
  int *s=NULL;


  std::cout<<"enter your size"<<std::endl;
  std::cin>>size;
  pr=new int [size];
  s=new int [size];
  std::cout<<"enter your elements "<<std::endl;
  for(int i=0;i<size;i++)
  {
      std::cin >> newElement;
      pr[i]=newElement;
  }
  CalculateTheSpan(&pr[0],size,&s[0]);
    std::cout<<"your span is "<<std::endl;
    for(int i=0;i<size;i++)
  {
    std::cout<<s[i]<<std::endl;
  }
  
}      