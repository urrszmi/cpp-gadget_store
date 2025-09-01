#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <windows.h>
#include <time.h>
#include <fstream>
using namespace std;

void footer()
{
	cout << "\n\t________________________________________________________________________________";
	cout<<"\n\n\t                                 FH Gadget";
	cout << "\n\t________________________________________________________________________________";
}

void logo()
{
	system("color 06");
	cout<<"\n\t\t ________________________________________________________________";
	cout<<"\n\t\t|\t\t\t\t\t\t\t\t|";
	cout<<"\n\t\t|\t ______  _    _\t\t\t\t\t\t|";
	cout<<"\n\t\t|\t|  ____|| |  | |\t\t\t\t\t|";
	cout<<"\n\t\t|\t| |____ | |  | |  ____           _            _ \t| ";
	cout<<"\n\t\t|\t|  ____|| |__| | / ___| __ _  __| | __ _  ___| |_\t|";
	cout<<"\n\t\t|\t| |     |  __  || |  _ / _` |/ _` |/ _` |/ _ \\ __|\t|";
	cout<<"\n\t\t|\t| |     | |  | || |_| | (_| | (_| | (_| |  __/ |_\t|";
	cout<<"\n\t\t|\t|_|     |_|  |_||_____|___,_|___,_|___, |____|___|\t|";
	cout<<"\n\t\t|\t                                    |___/          \t|";
	cout<<"\n\t\t|_______________________________________________________________|"<<endl;
}
int main ()
{
	string name, tel, address, proname[10], product[10];
	float totalprice=0, totalprofit=0, price[10],afterdis,dis,tax,tpayment;
	int people=0, totalproduct,Tproduct=0;
	char yn='Y',cat,receipt;
	time_t tim;
    time(&tim);
	do 
	{
		//USER INFORMATION
		cout<<setprecision(2)<<fixed;
		totalproduct=0;
		people++;
		totalprice=0;
	    logo();
	    cout<<"\n\t________________________________________________________________________________";
	    cout<<"\n\n\t                              WELCOME TO FH GADGET";
	    cout<<"\n\t________________________________________________________________________________";
	    cout<<"\n                                      Press Enter To Start";
	    cin.ignore();
	    cout<<"\n\n\tPlease kindly enter your name : ";
	    getline(cin,name);
		cout<<"\n\tHow about your address        : ";
		getline(cin,address);
		cout<<"\n\tNow your number               : ";
		getline(cin,tel);
	    system("cls");
	    
	    //MENU
		for (int x = 0; x < 10; x++)
		{
			logo();
			cout<<"\t\t\t________________________________________________";
	        cout<<"\n\t\t\t|Category          |          Type             |";
	        cout<<"\n\t\t\t________________________________________________";
	    	cout<<"\n\t\t\t|A                |         IPhone             |";
	    	cout<<"\n\t\t\t|B                |          Ipad              |";
	    	cout<<"\n\t\t\t|C                |         Macbook            |";
	    	cout<<"\n\t\t\t|D                |          Ipod              |";
	    	cout<<"\n\t\t\t|E                |         Iwatch             |";
	    	cout<<"\n\t\t\t________________________________________________";
	    	cout << "\n\t\t\t(Every purchases is limited to 10 products only)"<<endl;
			cout << "\n\t\t\tChoose Category (X to Exit): ";
			cin >> cat;

			//INPUT VALIDATION
			while (!(cat=='A' || cat=='B' || cat=='C' || cat=='D' || cat=='E'||cat=='X'))
			{
				cout << "\n\t\tInvalid Category. Please enter a valid ID (A-E, or X to Exit): ";
				cin.ignore ();
				cin.clear ();
				cin >> cat;
			}
			
            //EXIT CONDITION
			if (cat == 'X'||cat =='x') 
			{
				break;
			}

			// Assign product name and price based on ID
			switch (cat) 
			{
			    case 'A':
					 cout<<"\t\t______________________________________________________________________";
	                 cout<<"\n\t\t|Item ID          |          Type              |         Price       | ";
	                 cout<<"\n\t\t______________________________________________________________________";
	                 cout<<"\n\t\t|A1               |         IPhone 16          |         RM4000      |  ";
	                 cout<<"\n\t\t|A2               |         Iphone 15          |         RM3000      |  ";
	                 cout<<"\n\t\t|A3               |         Iphone 14          |         RM2500      |  ";
	                 cout<<"\n\t\t______________________________________________________________________";
	                 cout << "\n\t\t\tEnter Item ID : ";
			         cin >> product[x];

		  	         // Input validation
			         while (!(product[x]=="A1" ||product[x]=="A2" ||product[x]=="A3" ))
			         {
			           	cout << "\n\t\tInvalid Item ID. Please enter a valid ID (A1 - A3): ";
			        	cin.ignore ();
			        	cin.clear ();
			        	cin >> product[x];
			         }
			         if (product[x] == "A1")
			         {
			         	proname[x] = "Iphone 16" ;
			        	price[x] = 4000;
			        	totalproduct++;
			         }
			         else if (product[x] == "A2")
			         {
			          	proname[x] = "Iphone 15";
			        	price[x] = 3000;
			          	totalproduct++;
			         }
			         else if (product[x] == "A3")
			         {
			        	proname[x] = "Iphone 14";
			         	price[x] = 2500;
			         	totalproduct++; 
			       	 }
			         break;
			    case 'B':
					 cout<<"\t\t______________________________________________________________________";
	                 cout<<"\n\t\t|Item ID          |          Type              |         Price       | ";
	                 cout<<"\n\t\t______________________________________________________________________";
	                 cout<<"\n\t\t|B1               |         Ipad 10th          |         RM2000      |  ";
	                 cout<<"\n\t\t|B2               |         Ipad 16A           |         RM2600      |  ";
	                 cout<<"\n\t\t|B3               |         Ipad Air           |         RM2900      |  ";
	                 cout<<"\n\t\t______________________________________________________________________";
	                 cout << "\n\t\t\tEnter Item ID : ";
			         cin >> product[x];

		  	         // Input validation
			         while (!(product[x]=="B1" ||product[x]=="B2" ||product[x]=="B3" ))
			         {
			           	cout << "\n\t\tInvalid Item ID. Please enter a valid ID (B1 - B3): ";
			        	cin.ignore ();
			        	cin.clear ();
			        	cin >> product[x];
			         }
			         if (product[x] == "B1")
			         {
			         	proname[x] = "Ipad 10th";
			        	price[x] = 2000;
			        	totalproduct++;
			         }
			         else if (product[x] == "B2")
			         {
			          	proname[x] = "Ipad 16A";
			        	price[x] = 2600;
			          	totalproduct++;
			         }
			         else if (product[x] == "B3")
			         {
			        	proname[x] = "Ipad Air";
			         	price[x] = 2900;
			         	totalproduct++; 
			       	 }
			         break;
		        case 'C':
					 cout<<"\t\t______________________________________________________________________";
	                 cout<<"\n\t\t|Item ID          |          Type              |         Price       | ";
	                 cout<<"\n\t\t______________________________________________________________________";
	                 cout<<"\n\t\t|C1               |         MacBook Air        |         RM3500      |  ";
	                 cout<<"\n\t\t|C2               |         MacBook Pro 13     |         RM5000      |  ";
	                 cout<<"\n\t\t|C3               |         MacBook Pro 16     |         RM8000      |  ";
	                 cout<<"\n\t\t______________________________________________________________________";
	                 cout << "\n\t\t\tEnter Item ID : ";
			         cin >> product[x];

		  	         // Input validation
			         while (!(product[x]=="C1" ||product[x]=="C2" ||product[x]=="C3" ))
			         {
			           	cout << "\n\t\tInvalid Item ID. Please enter a valid ID (C1 - C3): ";
			        	cin.ignore ();
			        	cin.clear ();
			        	cin >> product[x];
			         }
			         if (product[x] == "C1")
			         {
			         	proname[x] = "MacBook Air";
			        	price[x] = 3500;
			        	totalproduct++;
			         }
			         else if (product[x] == "C2")
			         {
			          	proname[x] = "MacBook Pro 13";
			        	price[x] = 5000;
			          	totalproduct++;
			         }
			         else if (product[x] == "C3")
			         {
			        	proname[x] = "MacBook Pro 16";
			         	price[x] = 8000;
			         	totalproduct++; 
			       	 }
			         break;
			    case 'D':
					 cout<<"\t\t______________________________________________________________________";
	                 cout<<"\n\t\t|Item ID          |          Type              |         Price       | ";
	                 cout<<"\n\t\t______________________________________________________________________";
	                 cout<<"\n\t\t|D1               |         Ipod Mini          |         RM1100      |  ";
	                 cout<<"\n\t\t|D2               |         Ipod Nano          |         RM800       |  ";
	                 cout<<"\n\t\t|D3               |         Ipod Shuffle       |         RM200       |  ";
	                 cout<<"\n\t\t______________________________________________________________________";
	                 cout << "\n\t\t\tEnter Item ID : ";
			         cin >> product[x];

		  	         // Input validation
			         while (!(product[x]=="D1" ||product[x]=="D2" ||product[x]=="D3" ))
			         {
			           	cout << "\n\t\tInvalid Item ID. Please enter a valid ID (D1 - D3): ";
			        	cin.ignore ();
			        	cin.clear ();
			        	cin >> product[x];
			         }
			         if (product[x] == "D1")
			         {
			         	proname[x] = "Ipod Mini";
			        	price[x] = 1100;
			        	totalproduct++;
			         }
			         else if (product[x] == "D2")
			         {
			          	proname[x] = "Ipod Nano";
			        	price[x] = 800;
			          	totalproduct++;
			         }
			         else if (product[x] == "D3")
			         {
			        	proname[x] = "Ipod Shuffle";
			         	price[x] = 200;
			         	totalproduct++; 
			       	 }
			         break;
			    case 'E':
					 cout<<"\t\t______________________________________________________________________";
	                 cout<<"\n\t\t|Item ID          |          Type              |         Price       | ";
	                 cout<<"\n\t\t______________________________________________________________________";
	                 cout<<"\n\t\t|E1               |      IWatch Ultra 2        |         RM3700      |  ";
	                 cout<<"\n\t\t|E2               |      IWatch Series 2       |         RM1700      |  ";
	                 cout<<"\n\t\t|E3               |        IWatch SE           |         RM900       |  ";
	                 cout<<"\n\t\t______________________________________________________________________";
	                 cout << "\n\t\t\tEnter Item ID : ";
			         cin >> product[x];

		  	         // Input validation
			         while (!(product[x]=="E1" ||product[x]=="E2" ||product[x]=="E3" ))
			         {
			           	cout << "\n\t\tInvalid Item ID. Please enter a valid ID (E1 - E3): ";
			        	cin.ignore ();
			        	cin.clear ();
			        	cin >> product[x];
			         }
			         if (product[x] == "E1")
			         {
			         	proname[x] = "IWatch Ultra 2";
			        	price[x] = 3700;
			        	totalproduct++;
			         }
			         else if (product[x] == "E2")
			         {
			          	proname[x] = "IWatch Series 2";
			        	price[x] = 1700;
			          	totalproduct++;
			         }
			         else if (product[x] == "E3")
			         {
			        	proname[x] = "IWatch SE";
			         	price[x] = 900;
			         	totalproduct++; 
			       	 }
			         break;
			}
			totalprice += price[x];
			system("cls");
		}
        
		// Display the summary of purchased products
		system("cls");
		logo();
		cout<<"\n\t________________________________________________________________________________";
	    cout<<"\n\n\t                              WELCOME TO FH GADGET";
		cout<<"\n\n\t________________________________________________________________________________";
	    cout<<"\n\n\tAddress : No. 40, Jalan Niaga 14, Muar, 81900, Johor Darul Takzim";
	    cout<<"\n\tContact : 07-843 8541";
	    cout<<"\n\n\t********************************************************************************";
	    cout << "\n\t\t\t\t\t\t\t" <<"  Date " <<ctime(&tim);
		cout << "\tDear "<<name;
		cout << "\n\tContact: "<<tel;
		cout << "\n\tAddress: "<<address;
		cout << "\n\t================================================================================";
		cout << "\n\t\t                  Summary of Purchased Products";
		cout << "\n\t================================================================================";
		for (int i = 0; i < totalproduct; i++)
		{
			cout << "\n\t\tItem ID     : " << product[i] << endl;
			cout << "\t\tProduct Name: " << proname[i] << endl;
			cout << "\t\tPrice       : RM" << price[i] << endl<<endl;
		}
		cout << "\t================================================================================";
      	cout<<setprecision(2)<<fixed;
        dis = 0; 
        if (totalprice >= 50000) {
             dis = 0.15 * totalprice; 
        } else if (totalprice >= 25000) {
             dis = 0.1 * totalprice; 
        } else if (totalprice >= 10000) {
             dis = 0.08 * totalprice; 
        }
        afterdis = totalprice - dis; 
        tax=0.06*afterdis;
        tpayment=tax+afterdis;
        totalprofit+=tpayment;
        cout << "\n\t\tSubtotal      : RM" << totalprice;
	    cout << "\n\t\tTotal discount: RM" << dis;
	    cout << "\n\t\tTotal Tax (6%): RM" << tax;
	    cout << "\n\t\tTotal Payment : RM" << tpayment;
		cout << "\n\t================================================================================";
		cout << "\n\t\tThank you for your purchase! Your item will be delivered soon";
		cout << "\n\n\t\t                  Enter 1 to print a receipt :";
		ofstream Save("Receipt.doc");
		cin  >> receipt;
		
		if (receipt == '1')
		{
			Beep(768,500);
			Save<<"\n_________________________________________________________________________";
	        Save<<"\n\t\t ______  _    _";
	        Save<<"\n\t\t|  ____|| |  | |";
	        Save<<"\n\t\t| |____ | |  | |  ____           _            _ ";
	        Save<<"\n\t\t|  ____|| |__| | / ___| __ _  __| | __ _  ___| |_";
	        Save<<"\n\t\t| |     |  __  || |  _ / _` |/ _` |/ _` |/ _ \\ __|";
	        Save<<"\n\t\t| |     | |  | || |_| | (_| | (_| | (_| |  __/ |_";
	        Save<<"\n\t\t|_|     |_|  |_||_____|___,_|___,_|___, |____|___|";
	        Save<<"\n\t\t                                    |___/          ";
			Save<<"\n_________________________________________________________________________";
	        Save<<"\n\n\t                    WELCOME TO FH GADGET";
		    Save<<"\n\n_________________________________________________________________________";
	        Save<<"\n\n\tAddress : No. 40, Jalan Niaga 14, Muar, 81900, Johor Darul Takzim";
	        Save<<"\n\tContact : 07-843 8541";
	        Save<<"\n\n*************************************************************************";
	        Save<<"\n\t\t\t\t\t\t\t" <<"  Date " <<ctime(&tim);
		    Save << "\n\tDear "<<name;
		    Save << "\n\tContact: "<<tel;
		    Save << "\n\tAddress: "<<address;
		    Save << "\n=========================================================================";
		    Save << "\n\t\t          Summary of Purchased Products";
		    Save << "\n=========================================================================";
		    for (int i = 0; i < totalproduct; i++)
		    {
			   Save << "\n\t\tItem ID     : " << product[i] << endl;
			   Save << "\t\tProduct Name: " << proname[i] << endl;
			   Save << "\t\tPrice       : RM" << price[i] << endl<<endl;
		    }
		    Save << "=========================================================================";
		    Save<<setprecision(2)<<fixed;
            if (totalprice >= 10000) {
              dis = 0.15 * totalprice; 
            } else if (totalprice >= 5000) {
              dis = 0.1 * totalprice; 
            } else if (totalprice >= 1000) {
              dis = 0.08 * totalprice; 
            }
            afterdis = totalprice - dis; 
            tax=0.06*afterdis;
            tpayment=tax+afterdis;
            Save << "\n\t\tSubtotal      : RM" << totalprice;
            Save << "\n\t\tTotal discount: RM" << dis;
	        Save << "\n\t\tTotal Tax (6%): RM" << tax;
	        Save << "\n\t\tTotal Payment : RM" << tpayment;
		    Save << "\n=========================================================================";
		    Save << "\n\tThank you for your purchase! Your item will be delivered soon";
			cout<<"\n\t\t" <<"File is being saved by the name of Receipt.doc .... "<<endl;
		}
		
		cout << "\n\n\t\t\tDo you want to continue (Y-yes||Default-no): ";
		cin >> yn;
		Tproduct=Tproduct+totalproduct;
	    system("cls");
	} while (yn=='Y'||yn=='y');
	logo();
	cout << "\n\t================================================================================";
	cout << "\n\t                                TODAY SUMMARY";
	cout << "\n\t================================================================================"<<endl;
	cout << "\n\t		Total customer      : "<< people<<endl;
	cout << "\n\t		Total products sold : "<< Tproduct<<endl;
	cout << "\n\t		Total profit        : RM "<< totalprofit<<endl;
	cout << "\n\t================================================================================";
	footer();
	Sleep(10000);
	return 0;
}
