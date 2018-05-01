#ifndef DNA_HPP
#define DNA_HPP

#include "arrays.hpp"
namespace dna 
{
  struct DnaCounter
  {
     int countA;
     int countC;
     int countG;
     int countT;
  };
  using DnaArry=arrys::CharcterArry;
  
char ComplementaryBase( char base )
 {
   
   switch(base)
  {
     case 'A':{
       return 'T';
     }break;

     case 'T':{
       return 'A';
     }break;

     case 'C':{
       return 'G';
     }break;

     default:{
       return 'C';
     }break;
  }
 }
 char*ComplementarySequance(char *base,int size)
{
    char *compbase = new char [size];
    for(int i=0;i<size;i++)
    {
        int j=((size-1)-i);
        compbase[j]=ComplementaryBase(base[i]);
        
    } return compbase;
}
char *AnalyzeDNA( DnaArry arry , DnaCounter *P_counter )
{
    P_counter->countA =arrys::CountChar(&arry.base[0],arry.size,'A');
    P_counter->countC=arrys::CountChar(&arry.base[0],arry.size,'C');
    P_counter->countG=arrys::CountChar(&arry.base[0],arry.size,'G');
    P_counter->countT=arrys::CountChar(&arry.base[0],arry.size,'T');
    return ComplementarySequance(&arry.base[0],arry.size);
}   
}

#endif // DNA_HPP
