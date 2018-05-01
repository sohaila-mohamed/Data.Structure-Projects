//
// Created by asem on 01/04/18.
//

#include "map.hpp"
#include "helpers.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        std::vector<std::string> words = getFileWords(argv[1]);

        // COMPLETE HERE
        map::WordMap argv[1];
        //map::create(carlMap);
        int s = 0;
        for (int i = 0; i < words.size(); ++i)
        {
            s = map::size(argv[1]);
            return s;
        }
        std::cout << "count of words = " << s << std::endl;
        // DONE HERE
    }

    return 0;
}