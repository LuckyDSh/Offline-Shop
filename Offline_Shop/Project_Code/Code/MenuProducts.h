#pragma once
#include"Products.h"
#include"Customer.h"
#include<string>
#include<vector>
#define PRESS "Press any key to purchase something else"
using namespace std;

/////////////////////////////////////////////
//  MENU PRODUCTS FUNCTION  
//  Features: Choosing different products from 
//  different sections with different features 
/////////////////////////////////////////////

Products Milk("Milk", 2);						Products bicycle("Bicycle", 500); 			Products soap("Soap", 0.5);
Products Eggs("Eggs", 0.25);					Products bowling("Bowling Ball", 50); 		Products shampoo("Shampoo", 2);
Products Bread("Bread", 1);						Products boxingGlove("Boxing Glove", 125);	Products toothPaste("Tooth Paste", 1.5);
Products Pasta("Pasta", 2);						Products crossBar("Cross Bar", 200);		Products toothBrush("Tooth Brush", 3);
Products Coffee("Coffee", 2);					Products racket("Racket", 15);
Products Juice("Juice",1.5);					Products dumpBells("Dump Bells",100);

Products fridge("Fridge", 300);					Products hammer("Hammer", 2);				Products spirit("Spirit", 0.5);
Products toaster("Toaster", 150);				Products saw("Saw", 2); 					Products mask("Mask", 1);
Products microwave("Microwave", 200);			Products nailer("Nailer", 3);				Products bandage("Bandage", 1);
Products cooker("Cooker", 250);					Products level("Level", 1); 				Products vitamins("Vitamins", 2);
Products airCondition("Air Condition", 300);	Products screwdriver("Screw Driver", 2);	Products antibiotics("Antibiotics", 2);
Products FINAL("Final",0);

vector<Products> vectorProducts{ Milk,Eggs,Bread,Pasta,Coffee,Juice,bicycle,bowling,boxingGlove,crossBar,
racket,dumpBells,soap,shampoo,toothPaste,toothBrush,fridge,toaster
,microwave,cooker,airCondition,hammer,saw,nailer,level,screwdriver,spirit,mask,bandage,vitamins,antibiotics };

void MenuProducts() {
	cout << "-----------> HERE IS THE SHOP <-----------" << endl;
	cout << "---Press 1 to see Food Section" << endl;
	cout << "---Press 2 to see Sport Section" << endl;
	cout << "---Press 3 to see Hygiene Section" << endl;
	cout << "---Press 4 to see Equipment Section" << endl;
	cout << "---Press 5 to see Building Section" << endl;
	cout << "---Press 6 to see Health-Care Section" << endl;
	cout << "---Press q to Qiut" << endl;

	char press;
	cin >> press;
	switch (press) {
	case'1': {
		system("cls");
		foodlable: // here we are using lable to reduce complixety of the Menu code 
		cout << "////// HERE IS FOOD SECTION //////" << endl << endl;
		cout << "press 1 to buy some milk " << endl;
		cout << "press 2 to buy some eggs " << endl;
		cout << "press 3 to buy some bread " << endl;
		cout << "press 4 to buy some pasta " << endl;
		cout << "press 5 to buy some coffee " << endl;
		cout << "press 6 to buy some juice " << endl;
		cout << "press q to go back " << endl;
		char press;
		cin >> press;
		switch (press) {
		case '1': {

			cout << "--Milk--" << endl;
			cout << "cost 2$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;

			vectorProducts[0].m_price += Milk.m_cost * quatity;
			vectorProducts[0].m_quantity += quatity;
			
			FINAL.m_price += Milk.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto foodlable;// come back to sub-menu
			}
		}
			
			break;
		case '2': {
			cout << "--Eggs--" << endl;
			cout << "cost 0.25$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;

			vectorProducts[1].m_price += Eggs.m_cost * quatity;
			vectorProducts[1].m_quantity += quatity;

			FINAL.m_price += Eggs.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto foodlable;// come back to sub-menu
			}
		}
			break;
		case '3': {
			cout << "--Bread--" << endl;
			cout << "cost 1$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[2].m_price += Bread.m_cost * quatity;
			vectorProducts[2].m_quantity += quatity;

			FINAL.m_price += Bread.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto foodlable;// come back to sub-menu
			}
		}
			break;
		case '4': {
			cout << "--Pasta--" << endl;
			cout << "cost 2$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[3].m_price += Pasta.m_cost * quatity;
			vectorProducts[3].m_quantity += quatity;

			FINAL.m_price += Pasta.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto foodlable;// come back to sub-menu
			}
		}
			break;
		case '5': {
			cout << "--Coffee--" << endl;
			cout << "cost 2$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[4].m_price += Coffee.m_cost * quatity;
			vectorProducts[4].m_quantity += quatity;

			FINAL.m_price += Coffee.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto foodlable;// come back to sub-menu
			}
		}
			break;
		case '6': {
			cout << "--Juice--" << endl;
			cout << "cost 1.5$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[5].m_price += Juice.m_cost * quatity;
			vectorProducts[5].m_quantity += quatity;

			FINAL.m_price += Juice.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto foodlable;// come back to sub-menu
			}
		}
			break;
		case 'q':
			system("cls");
			MenuProducts();
			break;
		default: system("cls"); goto foodlable;// come back to sub-menu
			break;
		}

	}
		break;
	case'2':
	{
		system("cls");
	   sportlable: // here we are using lable to reduce complixety of the Menu code 
		cout << "////// HERE IS SPORT SECTION //////" << endl << endl;
		cout << "press 1 to buy a Bicycle " << endl;
		cout << "press 2 to buy a Bowling Ball" << endl;
		cout << "press 3 to buy Boxing Gloves " << endl;
		cout << "press 4 to buy a Cross Bar " << endl;
		cout << "press 5 to buy a Racket " << endl;
		cout << "press 6 to buy a Dump Bell " << endl;
		cout << "press q to go back " << endl;
		char press;
		cin >> press;
		switch (press) {
		case '1': {

			cout << "--Bicycle--" << endl;
			cout << "cost 500$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[6].m_price += bicycle.m_cost * quatity;
			vectorProducts[6].m_quantity += quatity;

			FINAL.m_price += bicycle.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto sportlable;// come back to sub-menu
			}
		}

				break;
		case '2': {
			cout << "--Bowling Ball--" << endl;
			cout << "cost 50$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[7].m_price += bowling.m_cost * quatity;
			vectorProducts[7].m_quantity += quatity;

			FINAL.m_price += bowling.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto sportlable;// come back to sub-menu
			}
		}
				break;
		case '3': {
			cout << "--Boxing Gloves--" << endl;
			cout << "cost 125$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[8].m_price += boxingGlove.m_cost * quatity;
			vectorProducts[8].m_quantity += quatity;

			FINAL.m_price += boxingGlove.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto sportlable;// come back to sub-menu
			}
		}
				break;
		case '4': {
			cout << "--Cross Bar--" << endl;
			cout << "cost 200$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[9].m_price += crossBar.m_cost * quatity;
			vectorProducts[9].m_quantity += quatity;

			FINAL.m_price += crossBar.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto sportlable;// come back to sub-menu
			}
		}
				break;
		case '5': {
			cout << "--Racket--" << endl;
			cout << "cost 15$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[10].m_price += racket.m_cost * quatity;
			vectorProducts[10].m_quantity += quatity;

			FINAL.m_price += racket.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto sportlable;// come back to sub-menu
			}
		}
				break;
		case '6': {
			cout << "--Dump Bell--" << endl;
			cout << "cost 100$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[11].m_price += dumpBells.m_cost * quatity;
			vectorProducts[11].m_quantity += quatity;

			FINAL.m_price += dumpBells.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto sportlable;// come back to sub-menu
			}
		}
				break;
		case 'q':
			system("cls");
			MenuProducts();
			break;
		default: system("cls"); goto sportlable;// come back to sub-menu
			break;
		}

	}
		break;
	case'3':
	{
		system("cls");
	hygienelable: // here we are using lable to reduce complixety of the Menu code 
		cout << "////// HERE IS HYGIENE SECTION //////" << endl;
		cout << "press 1 to buy a Soap " << endl;
		cout << "press 2 to buy a Shampoo" << endl;
		cout << "press 3 to buy Tooth Paste " << endl;
		cout << "press 4 to buy a Tooth Brush " << endl;
		cout << "press q to go back " << endl;
		char press;
		cin >> press;
		switch (press) {
		case '1': {

			cout << "--Soap--" << endl;
			cout << "cost 0.5$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[12].m_price += soap.m_cost * quatity;
			vectorProducts[12].m_quantity += quatity;

			FINAL.m_price += soap.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto hygienelable;// come back to sub-menu
			}
		}

				break;
		case '2': {
			cout << "--Shampoo--" << endl;
			cout << "cost 2$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[13].m_price += shampoo.m_cost * quatity;
			vectorProducts[13].m_quantity += quatity;

			FINAL.m_price += shampoo.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto hygienelable;// come back to sub-menu
			}
		}
				break;
		case '3': {
			cout << "--Tooth Paste--" << endl;
			cout << "cost 1.5$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[14].m_price += toothPaste.m_cost * quatity;
			vectorProducts[14].m_quantity += quatity;

			FINAL.m_price += toothPaste.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto hygienelable;// come back to sub-menu
			}
		}
				break;
		case '4': {
			cout << "--Tooth Brush--" << endl;
			cout << "cost 3$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[15].m_price += toothBrush.m_cost * quatity;
			vectorProducts[15].m_quantity += quatity;

			FINAL.m_price += toothBrush.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto hygienelable;// come back to sub-menu
			}
		}
				break;
		case 'q':
			system("cls");
			MenuProducts();
			break;
		default: system("cls"); goto hygienelable;// come back to sub-menu
			break;
		}
		

	}
		break;
	case'4':
	{
		system("cls");
	equipmentlable: // here we are using lable to reduce complixety of the Menu code 
		cout << "////// HERE IS EQUIPMENT SECTION //////" << endl << endl;
		cout << "press 1 to buy a Fridge " << endl;
		cout << "press 2 to buy a Toaster" << endl;
		cout << "press 3 to buy a Microwave " << endl;
		cout << "press 4 to buy a Cooker " << endl;
		cout << "press 5 to buy a Air Condition " << endl;
		cout << "press q to go back " << endl;
		char press;
		cin >> press;
		switch (press) {
		case '1': {

			cout << "--Fridge--" << endl;
			cout << "cost 300$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[16].m_price += fridge.m_cost * quatity;
			vectorProducts[16].m_quantity += quatity;

			FINAL.m_price += fridge.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto equipmentlable;// come back to sub-menu
			}
		}

				break;
		case '2': {
			cout << "--Toaster--" << endl;
			cout << "cost 150$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[17].m_price += toaster.m_cost * quatity;
			vectorProducts[17].m_quantity += quatity;

			FINAL.m_price += toaster.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto equipmentlable;// come back to sub-menu
			}
		}
				break;
		case '3': {
			cout << "--Microwave--" << endl;
			cout << "cost 200$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[18].m_price += microwave.m_cost * quatity;
			vectorProducts[18].m_quantity += quatity;

			FINAL.m_price += microwave.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto equipmentlable;// come back to sub-menu
			}
		}
				break;
		case '4': {
			cout << "--Cooker--" << endl;
			cout << "cost 250$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[19].m_price += cooker.m_cost * quatity;
			vectorProducts[19].m_quantity += quatity;

			FINAL.m_price += cooker.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto equipmentlable;// come back to sub-menu
			}
		}
				break;
		case '5': {
			cout << "--Air Condition--" << endl;
			cout << "cost 300$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[20].m_price += airCondition.m_cost * quatity;
			vectorProducts[20].m_quantity += quatity;

			FINAL.m_price += airCondition.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto equipmentlable;// come back to sub-menu
			}
		}
				break;
		case 'q':
			system("cls");
			MenuProducts();
			break;
		default: system("cls"); goto equipmentlable;// come back to sub-menu
			break;
		}
	}
		break;
	case'5':
	{
		system("cls");
	buildinglable: // here we are using lable to reduce complixety of the Menu code 
		cout << "////// HERE IS BUILDING SECTION //////" << endl << endl;
		cout << "press 1 to buy a Hammer " << endl;
		cout << "press 2 to buy a Saw" << endl;
		cout << "press 3 to buy a Nailer " << endl;
		cout << "press 4 to buy a Level " << endl;
		cout << "press 5 to buy a Screw Driver " << endl;
		cout << "press q to go back " << endl;
		char press;
		cin >> press;
		switch (press) {
		case '1': {

			cout << "--Hammer--" << endl;
			cout << "cost 2$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[21].m_price += hammer.m_cost * quatity;
			vectorProducts[21].m_quantity += quatity;

			FINAL.m_price += hammer.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto buildinglable;// come back to sub-menu
			}
		}

				break;
		case '2': {
			cout << "--Saw--" << endl;
			cout << "cost 2$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[22].m_price += saw.m_cost * quatity;
			vectorProducts[22].m_quantity += quatity;

			FINAL.m_price += saw.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto buildinglable;// come back to sub-menu
			}
		}
				break;
		case '3': {
			cout << "--Nailer--" << endl;
			cout << "cost 3$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[23].m_price += nailer.m_cost * quatity;
			vectorProducts[23].m_quantity += quatity;

			FINAL.m_price += nailer.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto buildinglable;// come back to sub-menu
			}
		}
				break;
		case '4': {
			cout << "--Level--" << endl;
			cout << "cost 1$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[24].m_price += level.m_cost * quatity;
			vectorProducts[24].m_quantity += quatity;

			FINAL.m_price += level.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto buildinglable;// come back to sub-menu
			}
		}
				break;
		case '5': {
			cout << "--Screw Driver--" << endl;
			cout << "cost 2$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[25].m_price += screwdriver.m_cost * quatity;
			vectorProducts[25].m_quantity += quatity;

			FINAL.m_price += screwdriver.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto buildinglable;// come back to sub-menu
			}
		}
				break;
		case 'q':
			system("cls");
			MenuProducts();
			break;
		default: system("cls"); goto buildinglable;// come back to sub-menu
			break;
		}
	}
		break;
	case'6':
	{
		system("cls");
	healthcarelable: // here we are using lable to reduce complixety of the Menu code 
		cout << "////// HERE IS HEALTH CARE SECTION //////" << endl << endl;
		cout << "press 1 to buy a Spirit " << endl;
		cout << "press 2 to buy a Mask" << endl;
		cout << "press 3 to buy a Bandage " << endl;
		cout << "press 4 to buy a Vitamins " << endl;
		cout << "press 5 to buy a Antibiotics " << endl;
		cout << "press q to go back " << endl;
		char press;
		cin >> press;
		switch (press) {
		case '1': {

			cout << "--Spirit--" << endl;
			cout << "cost 0.5$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[26].m_price += spirit.m_cost * quatity;
			vectorProducts[26].m_quantity += quatity;

			FINAL.m_price += spirit.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto healthcarelable;// come back to sub-menu
			}
		}

				break;
		case '2': {
			cout << "--Mask--" << endl;
			cout << "cost 1$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[27].m_price += mask.m_cost * quatity;
			vectorProducts[27].m_quantity += quatity;

			FINAL.m_price += mask.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto healthcarelable;// come back to sub-menu
			}
		}
				break;
		case '3': {
			cout << "--Bandage--" << endl;
			cout << "cost 1$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[28].m_price += bandage.m_cost * quatity;
			vectorProducts[28].m_quantity += quatity;

			FINAL.m_price += bandage.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto healthcarelable;// come back to sub-menu
			}
		}
				break;
		case '4': {
			cout << "--Vitamins--" << endl;
			cout << "cost 2$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[29].m_price += vitamins.m_cost * quatity;
			vectorProducts[29].m_quantity += quatity;

			FINAL.m_price += vitamins.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto healthcarelable;// come back to sub-menu
			}
		}
				break;
		case '5': {
			cout << "--Antibiotics--" << endl;
			cout << "cost 2$ per unit" << endl;
			cout << "enter your quantity" << endl;
			long quatity; cin >> quatity;
			vectorProducts[30].m_price += antibiotics.m_cost * quatity;
			vectorProducts[30].m_quantity += quatity;

			FINAL.m_price += antibiotics.m_cost * quatity;
			cout << "your bill is " << FINAL.m_price << endl;

			cout << PRESS << endl;
			string a;
			cin >> a;
			if (sizeof(a) != 0) {
				system("cls");
				goto healthcarelable;// come back to sub-menu
			}
		}
				break;
		case 'q':
			system("cls");
			MenuProducts();
			break;
		default: system("cls"); goto healthcarelable;// come back to sub-menu
			break;
		}
	}
		break;
	case'q':
		break;
	default: system("cls"); MenuProducts();
		break;
	}
}
