//
//  person.cpp
//  payRollAppC++
//
//  Created by Joe on 12/6/23.
//

#include "person.hpp"
#include <iostream>


using namespace std;

void person::setName(string first, string last){
    firstName = first;
    lastName = last;
}

string person::getFirstName()const{
    return firstName;
}

string person::getLastName()const{
    return lastName;
}

//print or display funtion
void person::displayName()const{
    cout<<firstName+lastName<<endl;
}
person::person(string first,string last){
    firstName = first;
    lastName = last;
}
