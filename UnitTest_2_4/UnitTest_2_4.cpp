#include "pch.h"
#include "CppUnitTest.h"
#include "../array.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest24
{
	TEST_CLASS(UnitTest24)
	{
	public:
		
		TEST_METHOD(LengthTest)
		{
			Array a(13, 3);
			Assert::AreEqual(a.length(), 13);
		}

		TEST_METHOD(FindTest)
		{
			Array a(13, 3);
			Assert::IsTrue(a.find(3));
		}

		TEST_METHOD(ExtendTest)
		{
			Array a(13, 3);
			a.extend(15);
			Assert::AreEqual(a.length(), 15);
		}

		TEST_METHOD(AddTest)
		{
			Array a(5, 0);
			a.add(5);
			Assert::AreEqual(a[5], 5);
		}

		TEST_METHOD(InsertTest)
		{
			Array a(10, 0);
			a.insert(5, 5);
			Assert::AreEqual(a[5], 5);
		}

		TEST_METHOD(RemoveTest)
		{
			int* arr = new int[10]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
			Array a(10, arr);
			delete[] arr;

			a.remove(5);
			Assert::AreNotEqual(a[5], 5);
		}

		TEST_METHOD(ArrayPlusArrayTest)
		{
			Array a(10, 1);
			Array b(10, 5);
			Array c = a + b;
			for (int i = 0; i < 10; ++i) {
				Assert::AreEqual(c[i], 6);
			}
		}

		TEST_METHOD(PlusArrayTest)
		{
			Array a(10, 1);
			Array b(10, 5);
			a += b;
			for (int i = 0; i < 10; ++i) {
				Assert::AreEqual(a[i], 6);
			}
		}

		TEST_METHOD(ArrayPlusIntTest)
		{
			Array a(10, 1);
			int x = 6;
			Array c = a + x;
			for (int i = 0; i < 10; ++i) {
				Assert::AreEqual(c[i], 7);
			}
		}
	};
}
