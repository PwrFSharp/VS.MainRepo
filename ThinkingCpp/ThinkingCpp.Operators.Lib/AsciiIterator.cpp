#include "stdafx.h"
#include "AsciiIterator.h"

CAsciiIterator::CAsciiIterator(char *array,int size)
{
	_size = size;
	char *buffArray = new char[_size];
	buffArray = array;

	_array = buffArray;

	buffArray = NULL;
}

CAsciiIterator::CAsciiIterator(const CAsciiIterator &aVal)
{
	_size = aVal._size;
	_array = new char[_size];
	_array = aVal._array;
}

CAsciiIterator& CAsciiIterator::operator=(const CAsciiIterator &right)
{
	if (&right != this)
	{
		_array = new char[right._size];
		_array = right._array;
		_size = right._size;
	}

	return *this;
}

CAsciiIterator& CAsciiIterator::operator++()
{
	char *buffNew = new char[_size];
	buffNew[0] = char(int(_array[0] + 1));
	buffNew[1] = _array[1];

	_array = buffNew;

	buffNew=NULL;	
	return *this;
}

CAsciiIterator& CAsciiIterator::operator++(int)
{
	CAsciiIterator *_previous = this;

	_array[0] = char(int(_array[0] + 1));
	_array[1] = _array[1];

	return *_previous;
}

CAsciiIterator& CAsciiIterator::operator+(CAsciiIterator &right)
{
	int buffSize = _size + right._size;
	char *ret = new char[buffSize];

	for (int i = 0; i < _size; i++)
	{
		ret[i] = _array[i];
	}

	for (int i = 0, j = _size; i < _size; i++,j++)
	{
		ret[j] = right._array[i];
	}

	_size = buffSize;
	_array = ret;

	return *this;
}

CAsciiIterator& CAsciiIterator::operator-(CAsciiIterator &right)
{
	bool flagEqual = true;

	if (_size >= right._size)
	{
		for (int i = 0; i < right._size;i++)
		{
			flagEqual &= right._array[i] == _array[_size - (i + 1)];
		}
	}

	if (flagEqual)
	{
		int buffSize = _size - right._size;
		char *ret = new char[buffSize];

		for (int i = 0; i < buffSize; i++)
		{
			ret[i] = right._array[i];
		}

		_size = buffSize;
		_array = ret;
	}

	return *this;
}

bool CAsciiIterator::Equals(CAsciiIterator &right)
{
	bool flagEqual = true;

	if (_size == right._size)
	{
		for (int i = 0; i < right._size;i++)
		{
			flagEqual &= right._array[i] == _array[i];
		}
	}
	else
	{
		flagEqual = false;
	}

	return flagEqual;
}

void CAsciiIterator::Print(ostream & os)
{
	os << _array;
}


CAsciiIterator::~CAsciiIterator()
{
	for (int i = 0; i < _size;i++)
	{
		_array[i] = NULL;
	}

	_array = 0;
}
