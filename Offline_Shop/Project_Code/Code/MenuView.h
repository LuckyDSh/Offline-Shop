#pragma once
#include"MenuRegistration.h"
#include"MenuProducts.h"

/////////////////////////////////////////////
//  VIEW FUNCTION  
//  Features: see the purchases that 
//  already were done by client
/////////////////////////////////////////////

Customer customer;
void MenuView() {
	system("cls");
	cout << "---> HERE IS A VIEW MENU <---" << endl;
	cout << "Here you can: " << endl;
	cout << "press 1 to see purchases already done" << endl;
	cout << "press 2 to modify login and password" << endl;
	cout << "press 3 to go back to the Shop" << endl;
	cout << "press q to quit the app" << endl;
	char press;
	cin >> press;
	switch (press) {
	case '1':
	{
		cout << "-----> HERE IS YOUR BILL <-----" << endl;
		for (auto prod : vectorProducts) {
			if (prod.m_price != 0) {
				cout << prod  << endl;
			}

		}
		cout << "---> Final price: " << FINAL.getPrice(FINAL) << endl;
		cout << "_____________________________________" << endl;
		string a;
		cout << "press any key to continue" << endl;
		cin >> a;
		if (sizeof(a) != 0) { system("cls"); MenuView(); }
	}
		break;
	case '2':
	{
		system("cls");
		cout << "-----> HERE YOU CAN RESET INFO <-----" << endl;
		Login(customer);
		string a;
		cout << "press any key to continue" << endl;
		cin >> a;
		if (sizeof(a) != 0) { system("cls"); MenuView(); }
	}
		break;
	case '3':
		system("cls");
		MenuProducts();
		system("cls"); MenuView();
		break;
	case 'q': {cout << __DATE__ <<"---"<< __TIME__ << "---" << __FILE__ << endl << "THANKS FOR USING THIS APP" << endl; }
		break;
	default: {system("cls"); MenuView();}
		   break;
	}
}
