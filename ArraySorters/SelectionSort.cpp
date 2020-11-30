#include "SelectionSort.h"
using namespace std;
void SelectionSort::sort(ostream& aOStream)
{
	for (unsigned int i = 0; i < getRange() - 1; i++)
	{
		unsigned int minIndex = i;

		for (unsigned int j = i + 1; j < getRange(); j++)
		{
			if (at(j) < at(minIndex))
				minIndex = j;
		}

		if (i != minIndex)
			swapElements(i, minIndex);

		ArraySorter::sort(aOStream);
	}
}

SelectionSort::SelectionSort(int aArrayOfNumbers[], unsigned int aArraySize) : ArraySorter(aArrayOfNumbers, aArraySize)
{
}