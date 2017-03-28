#include <string>
#include "Customer.h"
using namespace std;

Customer::Customer() {
    name = nullptr;
    address = nullptr;
}


Customer::Customer(const Customer& other) {
    name = nullptr;
    address = nullptr;
    if (other.name)
        name = _strdup(other.name);
    if (other.address){
        address = _strdup(other.address);
    }

}
Customer::~Customer() {
    if (name) {
        char*temp = name;
        name = nullptr;
        delete temp;
    }
    if (address) {
        delete address;
        address = nullptr;
    }
}
void Customer::setName(const char* name) {
    if (this->name) {  //if name already exists in name, clears 
        char* temp = this->name;
        this->name = nullptr;
        delete temp;
    }
    if (name)
        this->name = _strdup(name);
    }

void Customer::setAddress(const char* address) {
    if (this->address) {
        char* temp = this->address;
        this->address = nullptr;
        delete temp;
    }
    if (address)
        this->address = _strdup(address);
    }

const char* Customer::getName() const {
    return this->name;
}

const char* Customer::getAddress() const {
    return this->address;
}

//if name or address have any contents, erase first
//assign name to right hand side, assign address to right hand side

void Customer::operator=(const Customer& rhs) {
    if (name) {
        char*temp = name;
        name = nullptr;
        delete temp;
    }
    if (address) {
        char*temp = address;
        address = nullptr;
        delete temp;
    }
    if (rhs.name){
        name = _strdup(rhs.name);
    }

    if (rhs.address){
        address = _strdup(rhs.address);
    }

}


bool Customer::operator==(const Customer& rhs) const {
    if (rhs.name == name)
        return true;
    else
        return false;
}

bool Customer::operator!=(const Customer& rhs) const{
    if (rhs.name != name)
        return true;
    else
        return false;
}