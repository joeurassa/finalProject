//
//  person.hpp
//  payRollAppC++
//
//  Created by Joe on 12/6/23.
//

#ifndef person_hpp
#define person_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class person {
private:
    //Person variables, first and last Name. Middle names and initials are not used in
    //thiss project. More feautures coming soon!
    string firstName;
    string lastName;
    string eType;
    
public:
    //functions to set, get and construct the object 'person'
    
    //set names
    void setName();
    void setEtype();
    
    //get names from user or pre-set in code
    string getFirstName()const;
    string getLastName()const;
    //set and get employee type
    string getEtype()const;
    
    //funtions to display names, this will be inherited in the program
    void displayPerson()const;
    void displayType()const;
    person(string first, string last,string emType);
    person();
    ~person();
    
    
};

#endif /* person_hpp */
