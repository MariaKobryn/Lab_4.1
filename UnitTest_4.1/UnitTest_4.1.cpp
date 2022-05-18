#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_4.1/Human.h"
#include "../Lab_4.1/Human.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest41
{
	TEST_CLASS(UnitTest41)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Human H(20, "Tom");
			string s = "[ Kind: Human, Age: 20, Name: Tom ]";
			Assert::AreEqual(H.Description(), s);

		}
	};
}
