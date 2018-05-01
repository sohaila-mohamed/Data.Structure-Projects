#include "ecg.hpp" // for ecg::analyzeECG
#include "helpers.hpp" // for helpers::loadECG

int main( int argc , char **argv )
{
    if( argc != 2 )
    {
        std::cout << "Invalid usage!" << std::endl;
        return 1;
    }
    else
    {
        int size=0;
        double *ecgArray = helpers::getECG( argv[1] , size );
        
        ecg::EcgArry Ecg{ecgArray,size};
        ecg::satistics stats =ecg::analyzeECG(Ecg);
        
        

        

        std::cout <<"ECG average : " << stats.mean << std::endl
                 << "ECG variance: " << stats.variance << std::endl
                 << "ECG range   : (" << stats.min<< "," << stats.max << ")" << std::endl;

        delete [] ecgArray;
        return 0;
    
    }
    
    
}
