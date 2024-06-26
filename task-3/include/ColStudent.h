#pragma once

#include "Student.h"

class ColStudent : public Student
{
  public:
    ColStudent();
    ColStudent(string, string, string);

    ~ColStudent();

    void setNumOfSemesters();
    void setNumOfCourses();
    void setNumOfAssignments();
    void setNumOfTests();
    void setNumOfExams();
};

class College : public School
{
  public:
    Student* createStudent(string, string, string);
};
