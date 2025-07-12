#include <iostream>
using namespace std;

class Menu{
	public:
		void Menu1();		
		void Menu2();
		void stop();		
};

		class Account{
			public:
			string Name;
			int contactNumber;
			string Gender;
			int accountBalance;
			friend class Easypesa;
			
				Account();
				Account(string pName, int pcontactNumber, string pGender);
				
		};			

class Signup: public Account{
			public:
			int Age;
			int Pin;
			int reEnterPin;
			
				
			void SIGNUP(string pName, int pContact_number, string pGender, int pAccountBalance, int pAge, int pPin, int pReEnterPin);
	        void display();
};

class Users: public Account
{
	private:
		string accountType;
		string Sim;
		public:
			static int count;
			Users(){}
			friend class Easypesa;	
			Users(string pName, int pcontactNumber, string pGender, string pSim);
			void setData(string pName, int pContactnumber, string pGender, string pSim);
			void display();
			void friendList();
			friend ostream& operator <<(ostream &output, Users &U);	
		};
		

class Easypesa
    {
    	public:
    		Users U1;
	        Users U2;
	        Users U3;
	        Users U4;
	        Users U5;
    		Signup S1;
    	int number, amount, PIN;
    	char key,operation;
    	void transaction();
    	void payBills();
    	void payChallan();
};
