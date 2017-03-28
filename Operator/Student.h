#pragma once
#include <string>
using namespace std;

class Student
{
    string name;
    int id;

public:
    Student(string name);
    ~Student();
    string getName();
    void setID(int id);
    bool equals(const Student &other);
    bool operator==(const Student &other);
    void operator+=(const Student &other);
    int getID();
};

