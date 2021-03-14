#include "pch.h"
#include "CppUnitTest.h"
#include "../2.3/Vector3D.h"
#include "../2.3/Vector3D.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector3D x(4),y(8),z(9);
			Assert::AreEqual(sqrt((x * x) + (y * y) + (z * z)), 32.);

		}
	};
}
