//
// Created by asem on 01/04/18.
//

#ifndef SBE201_WORDCOUNT_MAPS_SET_HPP
#define SBE201_WORDCOUNT_MAPS_SET_HPP

#include "bst.hpp"

namespace set
{

using WordSet = bst::BSTNode *;

WordSet create()
{
    return nullptr;
}

bool isEmpty(WordSet &wset)
{
    return wset == nullptr;
}

int size(WordSet &wset)
{
    return 1 + bst::size(wset->left) + bst::size(wset->right);
}

bool contains(WordSet &wset, std::string item)
{
    if (bst::isEmpty(wset))
    {
        std::cout << "item not found" << std::endl;
    }
    else
    {
        return bst::find(wset, item);
    }
}

void remove(WordSet &wset, std::string to_remove)
{
    if (bst::find(wset->left, to_remove))
    {
        bst::remove(wset->left, to_remove);
    }
    else if (bst::find(wset->right, to_remove))
    {
        bst::remove(wset->right, to_remove);
    }
    else
        return;
}

void insert(WordSet &wset, std::string new_item)
{
    if (!bst::find(wset, new_item))
        bst::insert(wset, new_item);
}

void printAll(WordSet &wset)
{
    if (wset)
    {
        printAll(wset->left);
        std::cout << wset->item << std::endl;
        printAll(wset->right);
    }
}
WordSet populate(WordSet set1, WordSet &set2)
{
    populate(set1->left, set2);
    populate(set1->right, set2);
    bst::insert(set2, set1->item);
}

WordSet union_(WordSet &set1, WordSet &set2)
{
    WordSet set3 = {};
    set::populate(set1, set3);
    set::populate(set2, set3);
}

WordSet intersect(WordSet &set1, WordSet &set2)
{
    WordSet s = {};
    WordSet set4 = {};
    //for (int i = 0; i < set2->size; ++i)
    {
        if (set::contains(set1, set2->item))
        {
            bst::insert(s, set2->item);
            set::populate(s, set4);
        }
    }
}

bool equals(WordSet &set1, WordSet &set2)
{
    return bst::size(set1) == bst::size(set2);
    return set1->item == set2->item;
}
}
#endif //SBE201_WORDCOUNT_MAPS_SET_HPP
