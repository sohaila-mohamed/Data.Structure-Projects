#include "mathematics.hpp" // for mathematics::heron
#include <iostream> // for std::cout
#include <algorithm> // for std::atof
int main(int argc,char **argv)
{ 
     mathematics::Tringle T {0,0,0};
   
  if(argc==1)
  {
      std::cin>>T.a>>T.b>>T.c;
  }
  else if(argc==4)
  {
      T.a=std::atof(argv[1]);
      T.b=std::atof(argv[2]);
      T.c=std::atof(argv[3]);
    
  }
  
  double Area=mathematics::heron(T);
  std::cout<<"Area Of Triangle ="<<" "<<Area<<std::endl;
}

// We need main function here!