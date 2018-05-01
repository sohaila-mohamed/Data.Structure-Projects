//
// Created by asem on 01/04/18.
//

#include "set.hpp"
#include "helpers.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        std::vector<std::string> words = getFileWords(argv[1]);

        // COMPLETE HERE
        bst::Tree argv[1] ;
        int size = 0;
        for (int i = 0; i < words.size(); ++i)
        {
            if (!set::contains(argv[1], words[i]))
            {
                size++;
            }
            return size;
        }
        std::cout << "count of words = " << size << std::endl;
        // DONE HERE
    }

    return 0;
}