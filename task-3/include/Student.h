#pragma once

#include "global.h"
class Student
{
  protected:
    s_info student;

  public:
    vector<vector<int>> scores;
    Student();
    Student(string, string);
    virtual ~Student();

    virtual string getName() const = 0;
    virtual string getDayOfBirth() const = 0;
    virtual string getSchoolName() const = 0;
    virtual string getSchoolType() const = 0;
    virtual int getNumOfSemesters() const = 0;
    virtual int getNumOfCourses() const = 0;
    virtual int getNumOfAssignments() const = 0;
    virtual int getNumOfTests() const = 0;
    virtual int getNumOfExams() const = 0;

    virtual void setGPA() = 0;

    virtual void DoAssignment() = 0;
    virtual void TakeTest() = 0;
    virtual void TakeExam() = 0;

    virtual void Study() = 0;

    virtual float getAssignmentScore() const = 0;
    virtual float getTestScore() const = 0;
    virtual float getExamScore() const = 0;
    virtual float getGPA() const = 0;

    virtual void displayInfo() const = 0;

    int randomGenerator();
};

class StudentFactory
{
  public:
    virtual Student* createStudent(string, string, string) = 0;
    virtual ~StudentFactory();
};