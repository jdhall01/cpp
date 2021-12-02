#include "pch.h"

#ifndef __COURSE__
#include "../GoogleTestDemo/Course.h"
#include "../GoogleTestDemo/Course.cpp"
#define __COURSE__
#endif // !__COURSE__

TEST(CourseTestSuite, CourseTest) {
	Course learnCPP("Learn C++", 2);
	EXPECT_STRCASEEQ("Learn C++", learnCPP.getCourseName().c_str());
}
