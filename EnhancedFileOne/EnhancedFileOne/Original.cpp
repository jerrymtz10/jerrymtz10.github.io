#include <iostream>
#include <string>
using namespace std;


int main()   //main function
{

int password;
password = 123;


string username;
username = 'Gerardo';
string userinput;

  //output statement 
  cout<<"Created by Gerard Martinez"<<endl;
  

//int attemptCount = 0; //I am adding attemptCount for username/password
                      // attempts for extra layer of security

 
//while( attemptCount < 2) //adding attemptCount for user with a limit of 2 tries to login
	
  {  cout<<"Hello Welcome to out Investment Company"<<endl;   
    cout << "Enter username:";
	cin >> userinput;
 	
 if (userinput == username);
 {
	cout <<"\n";

	cout << "Enter password:";
	cin >> password;
	
	//attemptCount ++;
 }
  }
 	
	while (userinput == username);


   if (password == 123)
    cout << "Access Granted..."<<endl;


    if (password != 123)
    cout << "Access Denied.....Invalid Username/Password:"<< endl;
    
    
    cout<<"What would you like to do?"<<endl;
    cout<<"DISPLAY the client list (enter 1)"<<endl;
    cout<<"CHANGE a client's choice (enter 2)"<<endl;
    cout<<"Exit the progam .. (enter 3)"<<endl;
    
    int choice;
    choice = 1,2,3;
    
    cin>> choice;
    
    if (choice == 1)
    cout<<"you chose 1"<<endl;
    cout<<"Client's Name Service Selected (1 = Brokerage, 2 = Retirement)"<<endl;
    cout<<"1. Bob Jones selected option 1"<<endl;
    cout<<"2. Sarah Davis selected option 2"<<endl;
    cout<<"3. Amy Friendly selected option 1"<<endl;
    cout<<"4. Johnny Smith selected option 1"<<endl;
    cout<<"5. Carol Spears selected option 2"<<endl;
  
    
    if(choice == 2){
    cout<<"you chose 2"<<endl;
    cout<<"Enter the number of the client that you wish to change"<<endl;
    
   int option;
    option = 1, 2, 3, 4, 5;
  
    cin>> option;
    }
    
    
    
    if(choice == 3)
    cout<<"you chose 3 goodbye"<<endl;
    
    

    
return 0;
}
