// This class will sort a list and print it out.
#include "SortList.h"

void SortList::run()
{
    int choice;

    cout << "1) bubble, 2) selection, 3) insertion\n";
    cin >> choice;

    doSort(choice);

    for (int i=0; i<MAX; i++)
    {
        cout << grades[i] << " ";
    }
    cout << "\n";
}

void SortList::bubbleSort()
{
    for (int i = MAX-1; i>0; i--)
    {
        for (int j = 0; j<i; j++)
        {
            if (grades[i] < grades[j])
            {
                swap(grades[i], grades[j]);
            }
        }
    }
}

void SortList::selectionSort()
{
    for (int i = 0; i<MAX-1; i++)
    {
        for (int j = i+1; j<MAX; j++)
        {
              if (grades[i] > grades[j])
                  swap(grades[i], grades[j]);
        }
    }
}

void SortList::insertionSort()
{
    for (int i = 0; i<MAX-1; i++)
    {
        for (int j = MAX-1; j>i; j--)
        {
              if (grades[i] > grades[j])
                  swap(grades[i], grades[j]);
        }
    }
}


void SortList::doSort(int choice)
{

    switch (choice)
    {
       case 1:
           // implement function bubbleSort
           bubbleSort();
           break;
       case 2:
           // implement function selectionSort
           selectionSort();
           break;
       case 3:
           // implement function insertionSort
           insertionSort();
           break;
    }
}
