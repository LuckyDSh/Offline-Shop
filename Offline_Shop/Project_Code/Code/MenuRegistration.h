#pragma once

#include <iostream>
#include"Customer.h"
#include"MenuProducts.h"
#include<ctime>
#include<fstream>
#include"MenuView.h"

using namespace std;

/////////////////////////////////////////////
//  MENU REGESTRATION FUNCTION  
//  Features: entering login and password 
//  (registration), exit
/////////////////////////////////////////////


	time_t TIME = time(0);
	time_t* pTime = new time_t(TIME);
	string* pLogin = new string();
	string* pPassword = new string();
	

	void Login(Customer& other) {

		other.setLogin(other);
		*pLogin = other.m_login;
 		other.setPassword(other);
		*pPassword = other.m_password;

		cout << other;
		ofstream file_out_Login_And_Password("Registration.txt", ios::out | ios::trunc);

		if (!file_out_Login_And_Password.is_open()) { 
		system("cls");
		cout << "---> Allocation problem <---" << endl;
		cout << "Try again" << endl;
		Login(other);
		}
		file_out_Login_And_Password << *pLogin << *pPassword << endl;
		file_out_Login_And_Password.close();
	}

	bool PASS{ false };
	string LOGIN{""};
	string PASSWORD{""};
	Customer cust;
	
	bool Password(Customer& other) {

		string login, password, file_Login_Password;
		
			cout << "LOGIN: "; cin >> login;
			cout << "PASSWORD: "; cin >> password;

		ifstream file_in_Login_And_Password("Registration.txt");

		if (!file_in_Login_And_Password.is_open()) { 
			system("cls"); 
			cout << "---> Allocation problem <---" << endl << "Try again" << endl; 
			Password(other);
		}

		file_in_Login_And_Password >> file_Login_Password;

		if ((login + password == file_Login_Password)) {
			PASS = true;
			return PASS;
		}
		else {
			cout << "Wrong login or password !" << endl;
			cout << "Press any key to try again" << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				Password(other);
			}
		}
		file_in_Login_And_Password.close();
	}

	void MenuRegistration() {

		unique_ptr<Customer> pCustomer(new Customer);
		char press;
		cout << "-----> Welcome to our D&A_Shop_App <-----" << endl << endl;
		cout << ">> If you do not have account please press 1 <<" << endl;
		cout << ">> If you already signed in please press 2 <<" << endl;
		cout << "press q to quit" << endl;
		cout << "_________________________________________" << endl;

		cin >> press;
		switch (press) {
		case'1': {
			system("cls");
			cout << "///------> REGISTRATION <------///" << endl;
			Login(cust);

			PASSWORD = cust.m_password;
			LOGIN = cust.m_login;

			vector<string>* somevector = new vector<string>{ PASSWORD,LOGIN };

			cout << "Press any key to continue" << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls"); MenuRegistration();
			}

		}
			break;
		case'2': {
			system("cls");
			Password(cust);
			if (PASS == true) {
				system("cls");
				MenuProducts();
				MenuView();
			}
			else { system("cls"); MenuRegistration(); }
		}
			break;
		case'q':
			break;
		default: {system("cls"); MenuRegistration(); }
			   break;
		}
	}



