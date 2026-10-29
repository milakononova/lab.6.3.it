
#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

int Min(const int a[], int n);

namespace UnitTest63
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMinimum)
        {
            int a[5] = { 45, 20, 73, 12, 60 };

            Assert::AreEqual(12, Min(a, 5));
        }

        TEST_METHOD(TestNegative)
        {
            int a[5] = { -5, 8, -20, 16, 3 };

            Assert::AreEqual(-20, Min(a, 5));
        }

        TEST_METHOD(TestSameValues)
        {
            int a[4] = { 7, 7, 7, 7 };

            Assert::AreEqual(7, Min(a, 4));
        }
    };
}
