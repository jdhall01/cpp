#include "pch.h"

/*
#ifndef __COURSE__
#include "../GoogleTestDemo/Course.h"
#include "../GoogleTestDemo/Course.cpp"
#define __COURSE__
#endif // !__COURSE__
*/

#include "../GoogleTestDemo/Student.h"
#include "../GoogleTestDemo/Student.cpp"

TEST(StudentTestSuite, StudentTestBasic) {
	Student stud1("John", "121");
	EXPECT_STRCASEEQ("John", stud1.getStuName().c_str());
	EXPECT_STRCASEEQ("121", stud1.getStuNumber().c_str());
}

TEST(StudentTestSuite, StudentTestWithCourse) {
	Student stud1("John", "121");

	stud1.assignGrade("Learn C++", 2);
	stud1.assignGrade("Learn Java", 3);

	EXPECT_EQ(3, stud1.getGrade("Learn Java"));
}
