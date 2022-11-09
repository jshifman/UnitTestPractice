/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, no_allnighters)
{
    Practice mypractice;
	int nights[7] = {1,1,1,1,1,1,1};
	int* result = mypractice.allnighter(nights);
	ASSERT_TRUE(result == nullptr);
}

TEST(PracticeTest, all_allnighters)
{
    Practice mypractice;
	int nights[7] = {0,0,0,0,0,0,0};
	int* result = mypractice.allnighter(nights);
	int p = *result;
	ASSERT_EQ(p, 0);
}

TEST(PracticeTest, secondday_allnighter)
{
    Practice mypractice;
	int nights[7] = {1,0,1,1,1,1,1};
	int* result = mypractice.allnighter(nights);
	int p = *result;
	ASSERT_EQ(p, 0);
}

TEST(PracticeTest, thirdday_allnighter)
{
    Practice mypractice;
	int nights[7] = {1,1,0,1,1,1,1};
	int* result = mypractice.allnighter(nights);
	int p = *result;
	ASSERT_EQ(p, 0);
}

TEST(PracticeTest, fourthday_allnighter)
{
    Practice mypractice;
	int nights[7] = {1,1,1,0,1,1,1};
	int* result = mypractice.allnighter(nights);
	int p = *result;
	ASSERT_EQ(p, 0);
}