#include "stdafx.h"
#include "AsciiIterator.h"

CAsciiIterator::CAsciiIterator(char *array)
{
	_array = *array;
}

char* CAsciiIterator::operator++()
{
	char act = _array;
	_array = char(int(act) + 1);
	return &_array;
}

CAsciiIterator::~CAsciiIterator()
{
}
