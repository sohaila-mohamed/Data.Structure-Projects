#include <iostream>
#include "member1.hpp"


bool checkbalancedparent(char exp[size])
{

    stack::CharStack x{100, -1};
    for (int i = 0; i <= size; ++i)
    {
        if (exp[i] == '(')
            stack::push(x, exp[i]);
        else if (exp[i] == ')')
        {
            if (x.top = -1)
                return false;
            //std::cout << "unbalanced" << std::endl;
            else

                stack::pop(x);
        }
    }

    if (stack::isEmpty(x))
        return true;
    //std::cout << "balanced" << std::endl;
    else
        return false;
    //std::cout << "unbalanced" << std::endl;
}

int main(int argc, char **argv[])
{
    int exp = 0;
    int size = 0;

    if (argc == 1)
    {
        std::cin >> "exp=" >> exp >> std::endl;
        std::cin >> "size =" >> size >> std::endl;
    }
    else if (argc <= size + 1)
    {
        for (int i = 0; i < size; ++i)
        {
            exp[i] = argv[i + 1]
        }
        return checkbalancedparent(exp);
    }
    else
        return 0;
}
