#include "interface.h"


Account::Account(){}
Account::Account(string pName, int pcontactNumber, string pGender)
	{
		Name= pName;
		contactNumber = pcontactNumber;
		Gender= pGender;
	}
	
void Menu:: Menu1()
		{
		cout<< "\t\t==| MENU |== " << endl << endl;
		cout<<"1) Press S To Sign_UP" << endl;
	    cout<<"2) Press X To EXIT" << endl;
		}
		
void Menu::Menu2()	
		{
			cout<< "\t\t==| MENU |== " << endl << endl;
			cout<<"1) Open Friend List" << endl;
			cout<<"2) Your Account" << endl;
			cout<<"3) Send Money" << endl;
			cout<<"4) Pay Bills" << endl;
			cout<<"5) Pay Police Challan" << endl;
			cout<<"6) EXIT" << endl;
		}
		
void Menu::stop() 
		{
			cout<< "==| THANK YOU |==" << endl;
			exit(0);
		}


Users::Users(string pName, int pcontactNumber, string pGender, string pSim): Account(pName, pcontactNumber, pGender)
			{
				Name= pName;
				contactNumber= pcontactNumber;
				Gender= pGender;
				Sim= pSim;	
			}
			
void Users::setData(string pName, int pContactnumber, string pGender, string pSim)
			{
				Name= pName;
				contactNumber= pContactnumber;
				Gender= pGender;
				Sim= pSim;
				count++;
			}
			
void Users::display() 
			{
				cout<< "Account Name: "<<Name << endl;
				cout<< "Phone Number: +92 3"<<contactNumber <<endl;
				cout<< "Gender: "<<Gender << endl;
				cout<< "Sim: "<<Sim << endl;
				cout<< "========================="<< endl;
			}
ostream &operator << (ostream &output, Users &U) 
   {
				cout<< "Account Name: "<<U.Name << endl;
				cout<< "Phone Number: +92 3"<<U.contactNumber <<endl;
				cout<< "Gender: "<<U.Gender << endl;
				cout<< "Sim: "<<U.Sim << endl;
				cout<< "========================="<< endl;
	}				
void Users::friendList()
			{
				cout<<"==> " <<Name << endl;
			}	
void Signup::SIGNUP(string pName, int pcontactNumber, string pGender, int pAccountBalance, int pAge, int pPin, int pReEnterPin)
		{
					Name= pName;
					contactNumber= pcontactNumber;
					Gender= pGender;
					accountBalance= pAccountBalance;
					Age= pAge;
					Pin= pPin;
					reEnterPin= pReEnterPin;
					
					if(Pin== reEnterPin)
				{
					system("cls");
					cout<< "======================================================" << endl;
					cout<< "|-->  Your Account Has Been SuccessFully Created  <--|" << endl; 
					cout<< "======================================================" << endl<<endl;
				}
				else if(Pin!= reEnterPin)
				{
					system("cls");
					cout<< "===ERROR===" << endl;
					while (reEnterPin != Pin)
	    {
		cout<<"Error: Your Password is incorrect\n";
		cout<<"Again Enter PIN: ";
		cin>>reEnterPin;
		system("cls");
	    }
		cout<< "======================================================" << endl;
		cout<< "|-->  Your Account Has Been SuccessFully Created  <--|" << endl; 
		cout<< "======================================================" << endl <<endl; 
				}
}
void Signup::display()
		{
			cout<< "=====| YOUR ACCOUNT DETAILS |=====" << endl  <<endl;
			cout<< "Name: " << Name << endl;
			cout<< "Contact Number: " << contactNumber << endl;
			cout<< "Gender: " << Gender << endl;
			cout<< "Your Account Balance: " << accountBalance << endl;
			cout<< "Age: " << Age << endl;
			cout<< "Your PIN: " << Pin << endl;
			cout << "================================" << endl;
			}
void Easypesa::transaction()
{
    		do{
    		system("cls");
    		cout<<"=====| SEND MONEY |=====" << endl  <<endl;
		    cout<<"Enter Number Of User: +92 3";
		    cin>>number;
		  
		  if(number==U1.contactNumber)
		{
		  
		  cout<<"Enter Amount: "<<endl;
		  cin>>amount;
		  while (amount > S1.accountBalance)
		{
			cout << "Not enough amount available in account!!" << endl;
			cout << "Enter the amount again you want to send: ";
			cin >> amount;
		}
		  S1.accountBalance = S1.accountBalance-amount;
		  cout<<"Amount has been sent successfully\nRemaining Balance: "<<S1.accountBalance<<endl;
		  cout<<"T to Send Again, E to exit: ";
		  cin>>operation; 
		}
		else if(number==U2.contactNumber)
		{
		  
		  cout<<"Enter Amount: "<<endl;
		  cin>>amount;
		  while (amount > S1.accountBalance)
		{
			cout << "Not enough amount available in account!!" << endl;
			cout << "Enter the amount again you want to send: ";
			cin >> amount;
		}
		  S1.accountBalance = S1.accountBalance-amount;
		  cout<<"Amount has been sent successfully\nRemaining Balance: "<<S1.accountBalance<<endl;
		  cout<<"T to Send Again, E to exit: ";
		  cin>>operation; 
		}
		else if(number==U3.contactNumber)
		{
		  
		  cout<<"Enter Amount: "<<endl;
		  cin>>amount;
		  while (amount > S1.accountBalance)
		{
			cout << "Not enough amount available in account!!" << endl;
			cout << "Enter the amount again you want to send: ";
			cin >> amount;
		}
		  S1.accountBalance = S1.accountBalance-amount;
		  cout<<"Amount has been sent successfully\nRemaining Balance: "<<S1.accountBalance<<endl;
		  cout<<"T to Send Again, E to exit: ";
		  cin>>operation;
		}
		else if(number==U4.contactNumber)
		{
		  
		  cout<<"Enter Amount: ";
		  cin>>amount;
		  while (amount > S1.accountBalance)
		{
			cout << "Not enough amount available in account!!" << endl;
			cout << "Enter the amount again you want to send: ";
			cin >> amount;
		}
		  S1.accountBalance = S1.accountBalance-amount;
		  cout<<"Amount has been sent successfully\nRemaining Balance: "<<S1.accountBalance<<endl;
		  cout<<"T to Send Again, E to exit: ";
		  cin>>operation;
		} 
		else if(number==U5.contactNumber)
		{
		  
		  cout<<"Enter Amount: "<<endl;
		  cin>>amount;
		  while (amount > S1.accountBalance)
		{
			cout << "Not enough amount available in account!!" << endl;
			cout << "Enter the amount again you want to send: ";
			cin >> amount;
		}
		  S1.accountBalance = S1.accountBalance-amount;
		  cout<<"Amount has been sent successfully\nRemaining Balance: "<<S1.accountBalance<<endl;
		  cout<<"T to Send Again, E to exit: ";
		  cin>>operation;
		   
		} 
		else
		{
		cout<<"Wrong Number Entered! Press T to Try Again, E to exit: ";
		cin>>operation;
		}
		   
		   
	    
		}while(operation!='E' && operation=='T');	
}

void Easypesa::payBills()
		{
			do{
			
			int select;
			cout<< "=====| BiLL PAYMENT |=====" << endl  <<endl;
			cout<< "1)Electricity Bill" << endl;
			cout<< "2)Gas Bill" <<endl;
			cout<< "3)Internet Bill" <<endl;
			cin>> select;
			while (select != 1 && select != 2 && select != 3)
	{
		cout<<"Error: You Entered Wrong key\n";
		cout<<"Select Again:" << endl;
		cin>>select;
	}
	if(select==1 || select==2 || select==3)
	{
		cout<<"Enter Your Bill Amount: " <<endl;
		cin>> amount;
		while (amount > S1.accountBalance)
		{
			cout << "Not enough amount available in account!!" << endl;
			cout << "Enter the amount again you want to send: ";
			cin >> amount;
		}
		cout<<"Enter Your PIN to Pay Bill: " << endl;
		cin>>PIN;
		if(PIN==S1.Pin)
		{
			cout<<"Your Bill has been Paid Sucessfully " << endl;
		}
		else if(PIN!=S1.Pin)
		{
			cout<<"== ERROR == You entered a wrong Password" << endl;
		}
	}
	else if(select!=1 || select!=2 || select!=3)
	{
		cout<<"You Press Wrong Key" << endl;
	}
	S1.accountBalance= S1.accountBalance - amount;
	cout<< "Your New Account Balance: " << S1.accountBalance << endl;
	
	    cout<<"T to Pay Again, E to exit: ";
		cin>>operation;
		}while(operation!='E' || operation!='e' && operation=='T' || operation=='t');   
	}
	void Easypesa::payChallan()
	{
			int select;
			cout<< "=====| POLICE CHALLAN PAYMENT |=====" << endl  <<endl;
			cout<< "1)Traffic Police" << endl;
			cout<< "2)Dolphin Police" <<endl;
			cin>> select;
			while (select != 1 && select != 2)
	{
		cout<<"Error: You Entered Wrong key\n";
		cout<<"Select Again:" << endl;
		cin>>select;
	}
	if(select==1 || select==2)
	{
		cout<<"Enter Your Challan Amount: " <<endl;
		cin>> amount;
		while (amount > S1.accountBalance)
		{
			cout << "Not enough amount available in account!!" << endl;
			cout << "Enter the amount again To Pay challan: ";
			cin >> amount;
		}
		cout<<"Enter Your PIN to Pay Bill: " << endl;
		cin>>PIN;
		if(PIN==S1.Pin)
		{
			cout<<"You Sucessfully Paid Bill" << endl;
		}
		else if(PIN!=S1.Pin)
		{
			cout<<"== ERROR == You entered a wrong Password" << endl;
		}
	}
	else if(select!=1 || select!=2 || select!=3)
	{
		cout<<"You Press Wrong Key" << endl;
	}
	S1.accountBalance= S1.accountBalance - amount;
	cout<< "Your New Account Balance: " << S1.accountBalance << endl;
		}						
