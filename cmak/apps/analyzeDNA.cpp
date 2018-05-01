#include "helpers.hpp" // for helpers::loadDNA
#include "dna.hpp" // for dna::analyzeDNA


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
        
        char *dnaArray1 = helpers::getDNA( argv[1] , 0 , size );

        dna::DnaCounter P_counter{0,0,0,0};
        dna::DnaArry arry{dnaArray1,size};
         

        char *complementarySeq = dna::AnalyzeDNA( arry , &P_counter );


        // We may need to make a new character array, but with a null terminated character to be able to print on screen.
        char *complementarySeqTerminated = new char[ arry.size + 1 ];
        std::copy( &complementarySeq[0] , &complementarySeq[arry.size - 1] , &complementarySeqTerminated[0] );
        complementarySeqTerminated[arry. size ] = '\0';

        std::cout <<"Adenine (A) content:" << P_counter.countA<< std::endl
                 << "Guanine (G) content:" << P_counter.countG<< std::endl
                 << "Cytocine(C) content:" << P_counter.countC << std::endl
                 << "Thymine (T) content:" << P_counter.countT << std::endl << std::endl
                 << "Complementary Sequence:" << std::endl << complementarySeqTerminated << std::endl;

        // Clean up.
        delete [] complementarySeq;
        delete [] complementarySeqTerminated;
        return 0;
    }
}
