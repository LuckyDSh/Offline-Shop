#pragma once
#include<string>
#include<iostream>
#include<vector>
using namespace std;


/////////////////////////////////////////////
//  PRODUCTS CLASS  
//  Features: setting cost, price, quantity 
//  and displaying info
/////////////////////////////////////////////

struct Sections {
	vector<string> m_products{ m_EatingProducts ,m_SportProducts ,m_BathroomProducts ,m_ElectricalProducts ,m_BuildingProducts ,m_HealthCareProducts };
	string const m_EatingProducts{"FOOD_SECTION"};
	string const m_SportProducts{"SPORT_SECTION"};
	string const m_BathroomProducts{"BATHROOM_SECTION"};
	string const m_ElectricalProducts{"EQUIPMENT_SECTION"};
	string const m_BuildingProducts{"BUILDING_SECTION"};
	string const m_HealthCareProducts{"HEALTH_CARE_SECTION"};
};

class Products: public Sections{
	float m_cost;
	string m_name;
	float m_quantity{0};
	float m_price{0};
public:
	Products(string name, float cost) { this->m_name = name;  this->m_cost = cost; }
	void setCost(Products &other,float cost){
		cout << "Enter new cost" << endl;
		cin >> cost; this->m_cost = cost;

	}
	float getCost(Products& other) { return other.m_cost; }
	float getPrice(Products& other) { return other.m_price; }
	void setName(Products &other,string name){
		cout << "Enter new product" << endl;
		cin >> name; this->m_name = name;
	}
	string getName(Products& other) { return other.m_name; }

	void setQuantity(Products& other, float quantity) {
		cout << "Enter new cost" << endl;
		cin >> quantity; this->m_quantity = quantity;
	}
	float getQuantity(Products& other) { return other.m_quantity; }
	friend void MenuProducts();
	friend void MenuView();
	friend ostream& operator<<(ostream& out, Products& other);
};
ostream& operator<<(ostream& out, Products& other) {
	out << other.m_name << " : " <<" --->quantity: "<< other.m_quantity<<" --->price: "<< other.m_price << endl;
	return out;
}