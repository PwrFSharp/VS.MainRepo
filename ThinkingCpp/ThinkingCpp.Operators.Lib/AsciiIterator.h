#pragma once
#include <iostream>

using namespace std;

class CAsciiIterator
{
public:

	int _size;
	char *_array;
	CAsciiIterator(char *aChar,int size);
	CAsciiIterator(const CAsciiIterator &aVal);
	CAsciiIterator &operator=(const CAsciiIterator & right);

	~CAsciiIterator();

	CAsciiIterator& operator++();
	CAsciiIterator& operator++(int);
	CAsciiIterator& operator+(CAsciiIterator &right);
	CAsciiIterator& operator-(CAsciiIterator &right);
	bool Equals(CAsciiIterator &right);
	void Print(ostream &os);
};

