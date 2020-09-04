#pragma once
#include <string>
#include <iostream>
#include<memory> 
using namespace std;


/////////////////////////////////////////////
//  CUSTOMER CLASS  
//  Features: setting login and password
/////////////////////////////////////////////
class Customer sealed{
    string m_login{"admin"};
    string m_password{"admin"};
    unique_ptr<string> m_pPassword{ new string };
    unique_ptr<string> m_pLogin{ new string };

public:
    Customer() = default;
    /*Customer(const Customer& other):m_pLogin(new string),m_pPassword(new string) {
        this->m_login = other.m_login;
        this->m_password = other.m_password;
    }*/

    void setLogin(Customer& other) {
       string log;
       cout << "Please enter your new Login: "; cin >> log;
       other.m_login = log;
    }

   string getLogin(Customer &other) { return other.m_login;}

   void setPassword(Customer& other) {
       string pass;
       cout << "Please enter your new Password: "; cin >> pass;
       other.m_password = pass;
   }

   string getPassword(Customer& other) { return other.m_password; }
   friend ostream& operator<<(ostream& out,const Customer& other);
   friend void Login(Customer& other);
   friend bool Password(Customer& other);
   friend void MenuRegistration();
  
};
ostream& operator<<(ostream& out,const Customer& other) {
    out << "-------> Here is customer`s info: <-------" << endl;
    out << "Login: " << other.m_login << endl;
    out << "Password: " << other.m_password << endl;
    return out;
 }