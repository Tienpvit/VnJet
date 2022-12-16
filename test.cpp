#include<iostream>
#include<fstream>
#include<string.h>
#include<graphics.h>
//*****************************************************************************************************************************************************
using namespace std;
void login();
void registration();

int main()
{
	int choice;
	cout<<("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2 WELCOME TO VNJET AIRLINE RESERVATION SYSTEM \xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2 \xB2\n\n\n");
	cout<<"\t\t\t------------Welcome to VNJET Airline------------\n\n\n"<<endl;
	cout<<"To Futher Proceed, Please enter a value.\n"<<endl;
	cout<<"****Default Username && Password is root-root **** Using Default Credentials will restrict you to just view the list a Passenger...\n\n\n"<<endl;
	cout<<"\t________________________________________"<<endl;
	cout<<"\t|(a) Press 0 to Exit                   |"<<endl;
	cout<<"\t|(b) Press 1 to Login as admin         |"<<endl;
	cout<<"\t|(c) Press 2 to Register as admin      |"<<endl;
	cout<<"\t|(d) Press 3 to Login as Passenger     |"<<endl;
	cout<<"\t|(e) Press 4 to Register as Passenger  |"<<endl;
	cout<<"\t|(f) Press 5 to Display the User Manual|"<<endl;
	cout<<"\t|______________________________________|"<<endl;
	cout<<"\n\t Enter the desired option: ";
	cin>>choice;
	cout<<endl;
	
	switch(choice)
	{
		case 0:
			cout<<"Thanks for using this program.\nThis program is created by 2 newbie\n\n\n";
			Sleep(3000);
			exit(1);
			//break;
		case 4:
			registration();
			break;
		case 3:
			login();
			break;
		default:
			system("cls");
			cout<<"\t\t\t Please select from the options given above \n"<<endl;
			main ();
	}
}
//**************************************************************************************************************************************************
	void login()
	{
		int count;
		string userId, password, id, pass;
		system("cls");
	cout<<("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2 CUSTOMER LOGIN \xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2 \xB2\n\n\n");
		cout<<"Please enter the username and password!!!\n"<<endl;
		cout<<"Enter the Email to login: ";
		cin>>userId;
		cout<<"Enter the password: ";
		cin>>password;
		
		ifstream input("records.txt");
		
		while(input>>id>>pass)
		{
			if(id==userId && pass==password)
			{
				count=3;
				system("cls");
			}
		}
		input.close();
		
		if(count==3)
		{
			int choice;
			cout<<userId<<"\n Your LOGIN is successfully!!!... For further Proceedings, enter a value from below...\n"<<endl;
			cout<<("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2 BOOKING AIRLINE \xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2 \xB2\n\n\n");
        	cout<<"\t___________________________________________________________________________"<<endl;
			cout<<"\t|(a) Press 1 to Book a Flight...                                          |"<<endl;
			cout<<"\t|(b) Press 2 to Update your Data...                                       |"<<endl;
			cout<<"\t|(c) Press 3 to Delete your account...                                    |"<<endl;
			cout<<"\t|(d) Press 4 to Display Flight Schedule...                                |"<<endl;
			cout<<"\t|(e) Press 5 to Cancel a Flight...                                        |"<<endl;
			cout<<"\t|(f) Press 6 to Display to all Flight registered by...                    |"<<endl;
			cout<<"\t|_________________________________________________________________________|"<<endl;
			cout<<"\n\t Enter the desired option: ";
			cin>>choice;
			cout<<endl;
			main();
			
		}
		else{
			cout<<"\n LOGGIN ERROR!!! \n Please check your user name and password\n"<<endl;
			main();
		}
	}
	
//****************************************************************************************************************************************************	
	void registration ()
	{
		string ruserId,remail,rpassword,rphonenumber,raddress,rage,rid,rmail,rphone,raddr,ra,rpass;
		//system("cls"); //cai nay de mo qua tab moi.
	cout<<("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2 CUSTOMER SINGUP \xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2 \xB2\n\n\n");
		cout<<"\t\t\t-----Welcome to the Customer Registration Portal---------\n\n\n"<<endl;
		cout<<"Enter your Email address: ";
		cin>>ruserId;
		cout<<"Enter your Password: ";
		cin>>remail;
		cout<<"Enter your Username: ";
		cin>>rpassword;
		cout<<"Enter your Phone number: ";
		cin>>rphonenumber;
		cout<<"Enter your address: ";
		cin>>raddress;
		cout<<"Enter your age: ";
		cin>>rage;
		ofstream f1("records.txt", ios::app);
		f1<<ruserId<<' '<<remail<<' '<<rpassword<<' '<<rphonenumber<<' '<<raddress<<' '<<rage<<endl;
		system("cls");
		cout<<"\n\t\t\t Registration is successfull! \n";
		main();
		
	}
