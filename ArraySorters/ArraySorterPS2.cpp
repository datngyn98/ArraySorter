#include "ArraySorter.h"
#include <stdexcept>
using namespace std;
void ArraySorter::stepCompleted(ostream& aOStream) 
{
	aOStream << "State: " << *this << endl;
}

void ArraySorter::swapElements(unsigned int aSourcIndex, unsigned int aTargetIndex)
{
	int lTemp = fArrayOfNumbers[aSourcIndex];
	fArrayOfNumbers[aSourcIndex] = fArrayOfNumbers[aTargetIndex];
	fArrayOfNumbers[aTargetIndex] = lTemp;
}

void ArraySorter::sort(std::ostream& aOStream)
{
	stepCompleted(aOStream);
}

const unsigned int ArraySorter::at(unsigned int aIndex) const
{
	if (aIndex < fArraySize)
	{
		return fArrayOfNumbers[aIndex];
	}
	_Throw_range_error("Index out of bounds.");
}

const unsigned int ArraySorter::getRange() const
{
	return fArraySize;
}

ostream& operator<<(ostream& aOStream, const ArraySorter& aObject)
{
	bool lFirst = true;
	aOStream << "[";
	for (unsigned int i = 0; i < aObject.getRange(); i++)
	{
		if (lFirst)
		{
			lFirst = false;
		}
		else
		{
			aOStream << ",";
		}
		aOStream << aObject.fArrayOfNumbers[i];
	}
	aOStream << "]";
	return aOStream;
}