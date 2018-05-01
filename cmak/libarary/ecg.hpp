#ifndef ECG_HPP
#define ECG_HPP

#include "arrays.hpp"
namespace ecg
{
    struct satistics 
    {
        double mean ;
        double variance;
        double max;
        double min;

    };
    using EcgArry = arrys::DoubleArry;

    satistics analyzeECG( EcgArry arry)
    {
        satistics analysis;
        analysis.mean=arrys::MeanArry(arry);
        analysis.variance=arrys::VarianceArry(arry);
        analysis.max=arrys::MaxElement(arry);
        analysis.min=arrys::MinElement(arry);
        return analysis;
    }

}

#endif // ECG_HPP
