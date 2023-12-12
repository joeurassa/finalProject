//
//  person.cpp
//  payRollAppC++
//
//  Created by Joe on 12/6/23.
//

#include "person.hpp"
#include <iostream>
#include <iomanip>


using namespace std;
//set first and last name
void person::setName(){
    string first,last;
    cout<<" Enter First Name:";
    cin>>first;
    firstName = first;
    cout<<" Enter Last Name:";
    cin>>last;
    lastName = last;
}
//set employment type
void person::setEtype(){
    string employmentType;
    cout<<" Enter employment type: ";
    cin>>employmentType;
    eType = employmentType;
}
//get first name
string person::getFirstName()const{
    return firstName;
}
//get last name
string person::getLastName()const{
    return lastName;
}

//get employment type
string person::getEtype()const{
    return eType;
}

//print or display funtion
void person::displayPerson()const{
    cout<<firstName<<" "<<lastName;
}
void person::displayType()const{
    cout<<eType<<endl;
}
person::person(string first,string last,string emType){
    firstName = first;
    lastName = last;
    eType = emType;
}
person::person(){}
person::~person(){}
