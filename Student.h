#pragma once
#include <iostream>

class Student
{
private:
    int age;
    int nummarks;
    std::string name;
    float arifmmarks;
public:
    int GetAge();
    void SetAge(int valueage);
    int GetNummarks();
    void SetNummarks(int valueage);
    std::string GetName();
    void SetName(std::string valueaname);
    float ArifmMarks(float* yspev, int nummark);
    void SetMarks(float* yspev, int nummarks);

    Student(int age1 = 18, int nummarks1 = 5, std::string name1 ="Ivan")
    {
        age = age1;
        nummarks = nummarks1;
        name = name1;
    }
    Student& operator = (const Student& stud)
    {
        if (this == &stud)
            return *this;

        age = stud.age;
        nummarks= stud.nummarks;
        name = stud.name;
        return *this;
    }
    friend std::ostream& operator <<(std::ostream& os, const Student& student);
    friend std::istream& operator >>(std::istream& os, Student& student);


};