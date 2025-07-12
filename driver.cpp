#include"implementation.cpp"
int Users::count = 0;
int main() 
{
	Menu M1;
	Easypesa E1;
	E1.U1.setData("Talha",111111111, "Male", "Telenor");
	E1.U2.setData("Amir",222222222, "Male", "Ufone");
	E1.U3.setData("Faisal",333333333, "Male", "Telenor");
	E1.U4.setData("Saira",444444444, "FeMale", "Telenor");
	E1.U5.setData("Shuja",555555555, "Male", "Ufone");
    Users u1 = E1.U1;
	Users u2 = E1.U2;
	Users u3 = E1.U3;
	Users u4 = E1.U4;
	Users u5 = E1.U5;
	
    char key,operation;
	cout << "\t\t EASYPESA.PK "<<endl;
	cout<<"================================================="<<endl<< endl;
	M1.Menu1();
	cin>>key;
	while (key != 's' && key != 'S' && key!='l' && key!='L' && key != 'x' && key != 'X')
	{
		cout<<"Error: You Entered Wrong key\n";
		cout<<"Press 'S' to Sign_UP, 'L' to Login And 'X' to EXIT the Program: ";
		cin>>key;
	}	
	if(key== 's' || key=='S')
	{
    string a,c;
    int b,d,e,f,g;
    
    system("cls");
    cout<< "=====| SIGN-UP |=====" << endl  <<endl;
    cout<<"Enter Name: "<< endl;
    cin>> a;
    cout<<"Enter Phone Number: +92 3";
    cin>> b;
    cout<<"Enter Your Gender: "<< endl;
    cin>> c;
    cout<<"Enter The Amount In Your Account: "<< endl;
    cin>> d;
    cout<<"Enter Your Age: "<< endl;
    cin>> e;
    cout<<"Enter Your PIN: "<< endl;
    cin>> f;
    cout<<"Re-Enter PIN: "<< endl;
    cin>> g;
    E1.S1.SIGNUP(a,b,c,d,e,f,g);
	}
	else if(key== 'x' || key== 'X')
	{
		M1.stop();
	}	
   do
   {
	M1.Menu2();
	cin>> key;
	if(key== '1')
	{
		string search;
		system("cls");
		cout<<"\t\t==| FRIEND LIST |==" << endl << endl;
		cout<< "Total Friends: "<<Users::count<<endl;
		E1.U1.friendList();
		E1.U2.friendList();
		E1.U3.friendList();
		E1.U4.friendList();
		E1.U5.friendList();
		cout<<endl << "Enter Friend Name to See Friend Account Details: " << endl;
		cin >> search;
		Users U1;
	    Users U2;
	    Users U3;
	    Users U4;
	    Users U5;
		if(search=="Talha")
		{
			system("cls");
			cout<< "=====| "<<E1.U1.Name <<" ACCOUNT |=====" << endl  <<endl;
			// OPERATOR << Overloaded
			cout<<E1.U1;
		}
		else if(search=="Amir")
		{
			system("cls");
			cout<< "=====| "<<E1.U2.Name <<" ACCOUNT |=====" << endl  <<endl;
			// OPERATOR << Overloaded
			cout<<E1.U2;
		}
		else if(search=="Faisal")
		{
			system("cls");
			cout<< "=====| "<<E1.U3.Name <<" ACCOUNT |=====" << endl  <<endl;
			// OPERATOR << Overloaded
			cout<<E1.U3;
		}
		else if(search=="Saira")
		{
			system("cls");
			cout<< "=====| "<<E1.U4.Name <<" ACCOUNT |=====" << endl  <<endl;
			// OPERATOR << Overloaded
			cout<<E1.U4;
		}
		else if(search=="Shuja")
		{
			system("cls");
			cout<< "=====| "<<E1.U5.Name <<" ACCOUNT |=====" << endl  <<endl;
			// OPERATOR << Overloaded
			cout<<E1.U5;
		}
	}
	else if(key=='2')
	{
		system("cls");
		// Function display() Overriding 
		E1.S1.Signup::display();
	}
	else if(key=='3')
	{
		E1.transaction();
	}
	else if(key=='4')
	{
		E1.payBills();
	}
	else if(key=='5')
	{
		E1.payChallan();
	}
	else if(key=='6')
	{
		M1.stop();
	}

    cout<<"To go back Press B, To Exit Press E: ";
	cin>>operation;
	system("cls");
}while(operation!='E' || operation!='e' && operation=='B' || operation=='b' );	

}
