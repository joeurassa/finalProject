//
//  main.cpp
//  payRollAppC++
//
//  Created by Joe on 12/3/23.
//
//Created files
#include "employeeType.hpp"
#include "person.hpp"
#include "birthDate.hpp"

//
//Standard Libraries for C++
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cstdlib>
#include<stdlib.h>

void displayMenu();



using namespace std;

int main(int argc, const char * argv[]) {
    //outPut formatting
    cout<<fixed<<showpoint;
    int choice;
    
    cout<<"**************************************************";
    cout<<"****************************"<<endl;
    cout<<setw(50)<<right<<"WELCOME TO YOUR MANAGEMENT PORTAL"<<endl
    <<setw(35)<<right<<"MENU"<<endl;
    cout<<"****************************************************";
    cout<<"**************************"<<endl<<endl;
    
    employee Tasker;

    displayMenu();
    cin>>choice;
    while(choice!=6){
        switch(choice){
            case 1:
              Tasker.addEmployee();
              break;
            case 2:
                cout<<" This feauture is not available yet"<<endl;
              break;
            case 3:
                cout<< "This feauture is not available yet"<<endl;
              break;
            case 4:
               cout<<" This feauture is not available yet"<<endl;
              break;
            case 5:
                cout<<" This feauture is not available yet"<<endl;
              break;
            case 6:
                cout<<"Thank you for using the program"<<endl;
              break;
            default:
                cout<<"Invalid choice"<<endl;
              break;
        }
        
        displayMenu();
        cin>>choice;
    }
    
    
    cout<<endl<<endl;
    return 0;
}


void displayMenu(){
  //MAIN MENU
  cout<<endl;
  cout<<" What would you like to do? Select choice below"<<endl;
  cout<<" 1: Add an employee"<<endl;
  cout<<" 2: Remove an employee. //this feature is currently not available."<<endl;
  cout<<" 3: Show employee Information"<<endl;
  cout<<" 4: Calculate employee's salary"<<endl;
  cout<<" 5: More"<<endl;
  cout<<" 6: Exit"<<endl<<endl;
  cout<<" Enter your choice: ";
}