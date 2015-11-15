#include "stdafx.h"
#include "CppUnitTest.h"
#include "AsciiIterator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace ThinkgCppOperatorsTests
{		
	TEST_CLASS(TestAsciIteratorOperators)
	{
	public:	
		TEST_METHOD(PreIncrementation_OneChar)
		{
			//arrange
			char temp = 'a';
			int size = 1;
			char expectedPre = 'b';
			char expectedPost = 'b';
			bool expectedLogicPre = true;
			bool expectedLogicPost = true;

			CAsciiIterator it(&temp, size);
			CAsciiIterator pExpectedPre(&expectedPre, size);
			CAsciiIterator pExpectedPost(&expectedPost, size);

			//act
			CAsciiIterator pReachedPre = ++it;
			CAsciiIterator pReachedPost = it;

			//assert
			bool reachedLogicPre = pExpectedPre.Equals(pReachedPre);
			bool reachedLogicPost = pExpectedPost.Equals(pReachedPost);
			Assert::AreEqual(expectedLogicPre, reachedLogicPre);
			Assert::AreEqual(expectedLogicPost, reachedLogicPost);

			//cleanUp
		}

		TEST_METHOD(PreIncrementation_TwoChar)
		{
			//arrange
			char temp[] = "ab";
			int size = 2;
			char expectedPre[] = "bb";
			char expectedPost[] = "bb";
			bool expectedLogicPre = true;
			bool expectedLogicPost = true;

			CAsciiIterator it(temp, size);
			CAsciiIterator pExpectedPre(expectedPre, size);
			CAsciiIterator pExpectedPost(expectedPost, size);

			//act
			CAsciiIterator pReachedPre = ++it;
			CAsciiIterator pReachedPost = it;

			//assert
			bool reachedLogicPre = pExpectedPre.Equals(pReachedPre);
			bool reachedLogicPost = pExpectedPost.Equals(pReachedPost);

			Assert::AreEqual(expectedLogicPre, reachedLogicPre);
			Assert::AreEqual(expectedLogicPost, reachedLogicPost);
		}

		//TEST_METHOD(PostIncrementation_OneChar)
		//{
		//	//arrange
		//	char temp = 'a';
		//	int size = 1;
		//	char expectedPre = 'a';
		//	char expectedPost = 'b';
		//	bool expectedLogicPre = true;
		//	bool expectedLogicPost = true;

		//	CAsciiIterator it(&temp, size);
		//	CAsciiIterator pExpectedPre(&expectedPre, size);
		//	CAsciiIterator pExpectedPost(&expectedPost, size);

		//	//act
		//	CAsciiIterator pReachedPre = it++;
		//	CAsciiIterator pReachedPost = it;

		//	//assert
		//	bool reachedLogicPre = pExpectedPre.Equals(pReachedPre);
		//	bool reachedLogicPost = pExpectedPost.Equals(pReachedPost);
		//	Assert::AreEqual(expectedLogicPre, reachedLogicPre);
		//	Assert::AreEqual(expectedLogicPost, reachedLogicPost);
		//}

		//TEST_METHOD(PostIncrementation_TwoChar)
		//{
		//	//arrange
		//	char temp[] = "ab";
		//	int size = 2;
		//	char expectedPre[] = "ab";
		//	char expectedPost[] = "bb";
		//	bool expectedLogicPre = true;
		//	bool expectedLogicPost = true;

		//	CAsciiIterator it(temp, size);
		//	CAsciiIterator pExpectedPre(expectedPre, size);
		//	CAsciiIterator pExpectedPost(expectedPost, size);

		//	//act
		//	CAsciiIterator pReachedPre = it++;
		//	CAsciiIterator pReachedPost = it;

		//	//assert
		//	bool reachedLogicPre = pExpectedPre.Equals(pReachedPre);
		//	bool reachedLogicPost = pExpectedPost.Equals(pReachedPost);

		//	Assert::AreEqual(expectedLogicPre, reachedLogicPre);
		//	Assert::AreEqual(expectedLogicPost, reachedLogicPost);
		//}

		//TEST_METHOD(InfixAdd)
		//{
		//	//arrange
		//	char temp1 = 'a';
		//	char temp2 = 'b';
		//	int size1 = 1;
		//	int size2 = 1;
		//	int size3 = 2;
		//	char expected[] = "ab";
		//	bool expectedLogic = true;

		//	CAsciiIterator p1(&temp1, size1);
		//	CAsciiIterator p2(&temp2, size2);
		//	CAsciiIterator pExpected(expected, size3);

		//	//act
		//	CAsciiIterator pReached = p1+p2;

		//	//assert
		//	bool reachedLogic= pExpected.Equals(pReached);
		//	Assert::AreEqual(expectedLogic, reachedLogic);
		//}
		//
		//TEST_METHOD(InfixMinus)
		//{
		//	//arrange
		//	char temp1[] = "abc";
		//	char temp2[] = "bc";
		//	int size1 = 3;
		//	int size2 = 2;
		//	int size3 = 1;
		//	char expected[] = "a";
		//	bool expectedLogic = true;

		//	CAsciiIterator p1(temp1, size1);
		//	CAsciiIterator p2(temp2, size2);
		//	CAsciiIterator pExpected(expected, size3);

		//	//act
		//	CAsciiIterator pReached = p1 - p2;

		//	//assert
		//	bool reachedLogic = pExpected.Equals(pReached);
		//	Assert::AreEqual(expectedLogic, reachedLogic);
		//}

		//TEST_METHOD(ComplexInfixPlusAndMinus)
		//{
		//	//arrange
		//	char temp1 = 'a';
		//	char temp2 = 'b';
		//	char temp3 = 'b';
		//	char temp4 = 'a';
		//	int size1 = 1;
		//	int size2 = 1;
		//	int size3 = 1;
		//	int size4 = 1;

		//	CAsciiIterator it1(&temp1, size1);
		//	CAsciiIterator it2(&temp2, size2);
		//	CAsciiIterator it3(&temp3, size3);
		//	CAsciiIterator pExpected(&temp4, size3);

		//	bool expectedLogic = true;

		//	//act
		//	CAsciiIterator pReached = it1 + it2 - it3;

		//	//assert
		//	bool reachedLogic = pExpected.Equals(pReached);
		//	Assert::AreEqual(expectedLogic, reachedLogic);
		//}

		//TEST_METHOD(OutStreamPrint)
		//{
		//	//arrange
		//	char temp1 = 'a';
		//	CAsciiIterator it1(&temp1,1);
		//	
		//	stringstream reached;
		//	stringstream expected;
		//	expected << 'a';

		//	char reachedChar;
		//	char expectedChar;
		//	
		//	//act
		//	it1.Print(reached);
		//	expectedChar = expected.get();
		//	reachedChar = reached.get();

		//	//assert
		//	Assert::AreEqual(expectedChar, reachedChar);
		//}
	};
}