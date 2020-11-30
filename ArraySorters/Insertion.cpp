#include "InsertionSort.h"
using namespace std;
void InsertionSort::sort(ostream& aOStream)
{
	unsigned int i = 1;
	while (i < getRange())
	{
		unsigned int j = i;
		while (j>0 && at(j-1) > at(j) )
		{
			swapElements(j, j - 1);
			j--;
		}
		i++;
		ArraySorter::sort(aOStream);
	}
}

InsertionSort::InsertionSort(int aArrayOfNumbers[], unsigned int aArraySize) : ArraySorter(aArrayOfNumbers, aArraySize)
{
}