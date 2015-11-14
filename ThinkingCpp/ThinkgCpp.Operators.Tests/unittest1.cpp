#include "stdafx.h"
#include "CppUnitTest.h"
#include "AsciiIterator.h

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ThinkgCppOperatorsTests
{		
	TEST_CLASS(TestAsciIterator)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//arrange
			char temp = 'a';
			AsciIterator it(&temp);
			char expected = 'b';

			//act
			char reachedAfterIt = *(++it);

			//assert	
			Assert.AreEquals(expected, reachedAfterIt);
		}
	};
}