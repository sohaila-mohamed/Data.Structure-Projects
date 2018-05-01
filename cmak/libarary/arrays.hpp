#ifndef ARRAYS_HPP
#define ARRAYS_HPP

#include <iostream>
#include "mathematics.hpp"
 namespace arrys 
{
    struct DoubleArry
    {
        double *base ;
        int size ;

    };
    struct CharcterArry 
    {
        char *base;
        int size ;

    };

    void printall(double * base,int size)
    {
        for(int i=0;i<size;i++)
        {
            std::cout<<"arry ["<<i<<"]"<<"="<<" "<<*(base+i)<<std::endl;
        }

    

    }
    double MaxElement(double *base,int size)
    {

        double max=*base;    
        for(int i=1;i<size;i++)
        {
            if(max<=base[i])
            {
                
                max=base[i];
                
            }

          
        }
        return max;
         

    }
    double MinElement(double *base,int size)
    {
        double min=*base;
        for(int i=1;i<size;i++)
        {
            if(min>=base[i])
            {
                min=base[i];
            }
        }
        return min;
    }
    double MeanArry(double *base,int size)
    {
        double sum =0;
        for(int i=0;i<size;i++)
        {
            sum=sum+base[i];
        }
        return (sum/size);
    }
    double VarianceArry(double *base,int size)
    {
        double mean=MeanArry( &base[0] ,size);
        double sum=0;
        for(int i=0;i<size;i++)
        {
            sum=sum+(mean-base[i]);
        }
        double var = (mathematics::GitSquare(sum))/size;
        return var;
    }
    int CountChar(char *base_ptr,int size,char query)
    {   
        int counts =0;
        for(int i=0;i<size;i++)
        {
            if(base_ptr[i]==query)
            {
                counts++;

            }
        }
        return counts ;
    }
    void printall(DoubleArry arry)
    {
        printall(&arry.base[0],arry.size);
    }
    double MaxElement(DoubleArry arry)
    {
         return MaxElement(&arry.base[0],arry.size);
    }
    double MinElement(DoubleArry arry)
    {
        return MinElement(&arry.base[0],arry. size);
    }
    double MeanArry(DoubleArry arry)
    {
        return  MeanArry(&arry.base[0],arry.size);
    }
    double VarianceArry(DoubleArry arry)
    {
        return VarianceArry(&arry.base[0],arry.size);
    }
    int CountChar(CharcterArry arry,char query)
    {
        return CountChar(&arry.base[0],arry.size, query);
    }


    


    


}
#endif // ARRAYS_HPP
