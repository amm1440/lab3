#ifndef SORTLIST_H
#define SORTLIST_H

#include <iostream>
#include <string>
using namespace std;

class SortList
{
    private:
        const int MAX = 10;
        int grades[10] = {43, 32, 11, 76, 9, 26, 58, 93, 82, 65};
        void doSort(int choice);
        // add the three sort prototypes here
        void bubbleSort();
        void selectionSort();
        void insertionSort();

    public:
        void run();
};

#endif
