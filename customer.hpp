/* 
 * File:   customer.hpp
 * Author: Qiraa Qadri
 * Created: July 2024
 * Version 1.0
 * Purpose: Class definition for Customer class
*/

#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <iostream>
#include <string>
#include <unistd.h>
#include <ios>
#include <limits>
#include "definitions.hpp"
using namespace std;

class Customer{
    private:
        char name[MAX_NAME];
        char email[MAX_EMAIL];
        char phone[MAX_PHONE];
        char department[MAX_NAME];   
    public:
        // constructor
        Customer();
        // destructor
        ~Customer();
        // get name
        char* get_name();
        // get email
        char* get_email();
        // get phone
        char* get_phone();
        // get department
        char* get_department();
        // set name
        void set_name(char* name);
        // set email
        void set_email(char* email);
        // set phone
        void set_phone(char* phone);
        // set department
        void set_department(char* department);
        // print customer info
        void print_customer_info();
        // register new customer
        void register_customer();
        
};

// helper functions

// initialize customer database
bool init_customer();

// check if customer exists in database file
bool check_customer(char* name // name of the customer
                    );

// add customer to file
bool create_customer(Customer* customer // customer to initialize
                    );
// check of employee
bool check_employee(char* name // name of the employee
                    );

// closes customer database file
bool close_customer();

        

#endif