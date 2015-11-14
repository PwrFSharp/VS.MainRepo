#pragma once
class CAsciiIterator
{
public:
	char _array;
	CAsciiIterator(char *aChar);
	~CAsciiIterator();

	//char& operator++(AsciiIterator &aTable) {
	//	return (_array + 1);
	//}

	char* operator++();
};

