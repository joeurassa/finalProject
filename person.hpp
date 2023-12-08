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
    
public:
    //functions to set, get and construct the object 'person'
    
    //set names
    void setName(string first, string last);
    
    //get names from user or pre-set in code
    string getFirstName()const;
    string getLastName()const;
    
    //funtions to display names, this will be inherited in the program
    void displayName()const;
    
    person(string first, string last);
    
    
};

#endif /* person_hpp */
