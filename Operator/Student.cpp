#include "Student.h"


Student::Student(string name)
{
    this->name = name;
}

Student::~Student()
{
}

string Student::getName(){
    return name;
}
void Student::setID(int id){
    this->id = id;
}

bool Student::equals(const Student &other){
    if (id == other.id)
        return true;
    else
        return false;
}

bool Student::operator==(const Student &other){
    if (id == other.id)
        return true;
    else
        return false;
}

void Student::operator+=(const Student &other){
    name += other.name;
    
}

int Student::getID(){
    return id;
}
