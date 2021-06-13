#include <iostream>
#include <string>
using namespace std;
//the enhancements of this cpp file was to make it more complex and keep it functioning in the same manner
//by doing so I did the following: Add a case structure, data array that holds clients names, array that holds clients info,
//limit the number of attempts to enter file, add functions getline(cin, junk) and clear to keep file clean, 
//continue to keep user looping the file with more options, bounded the options of clients with if statment, 
//bounded the options to change clients info with if statment, and add a loop to iterate for changes in the clients change 

int main()   //main function
{
    int password = 123;
    string username = "Gerardo";
    string userinput;
    string names[5] = {  //I add this data array structure that holds the clients names in a string names
        "Gerard Martinez", //to make the file more complex 
        "Greg Stefanelli",
        "Amy Friendly",
        "Johnny Smith",
        "Carol Spears",
    };
    int options[5] = { 1, 2, 1, 1, 2 };// here is a array of int I created that holds the current status of client

    cout << "Created by Gerard Martinez" << endl;

    int attemptCount = 0; //I am adding attemptCount for username/password
                      // attempts for extra layer of security

    while (attemptCount < 2)//adding attemptCount for user with a limit of 2 tries to login
    {
        cout << "Hello Welcome to out Investment Company" << endl;
        cout << "Enter username: ";
        cin >> userinput;

        if (userinput != username)
        {
            cout << "invalid username" << endl;
            attemptCount++;
            continue;
        }

        cout << "\n";
        cout << "Enter password: ";
        cin >> password;

        if (password != 123) {  // while password not valid
            cout << "Access Denied.....Invalid Password " << endl;
            attemptCount++;  //heres is a iterations for attemptCount of passwords attemps allowed that i added
            continue;
        }

        cout << "Access Granted..." << endl;

        do {
            cout << "What would you like to do?" << endl;
            cout << "DISPLAY the client list (enter 1)" << endl;
            cout << "CHANGE a client's choice (enter 2)" << endl;
            cout << "Exit the progam .. (enter 3)" << endl;
            int choice;
            cin >> choice;

            if (cin.fail()) {    //I made the structure a little more complex here by adding fail and clear after 
                cin.clear();     //followed by cin junk 
                cout << "Invalid input\n";
                string junk;
                getline(cin, junk);
                continue;
            }
            //I had a simple IF structure file and I switched it to a case structure to enhance the performance of the file

            switch (choice) {
            case 1:
                cout << "you chose 1" << endl;
                cout << "Client's Name Service Selected (1 = Brokerage, 2 = Retirement)" << endl;
                
                //I created a while loop that gives up the option to update a clients option from 1 & 2
                //doing so added complexity to the file 
                for (int i = 0; i < 5; i++) {
                    cout << i + 1 << ". " << names[i] << " selected option " << options[i] << endl;
                }

                continue; // I learned and added these continues after every case to keep the program running 
            case 2:
                cout << "you chose 2" << endl;
                cout << "Enter the number of the client that you wish to change" << endl;
                int customer;
                cin >> customer;

                if (cin.fail()) {
                    cin.clear();
                    cout << "Invalid input\n";
                    string junk;
                    getline(cin, junk);
                    continue;
                }
                // I added an if statement that kept the int choice between 1 and 5 from the array 
                //data I added above
                if (customer < 1 || customer > 5) {
                    cout << "no such account\n";
                    continue;
                }

                cout << "Enter 1 for Brokerage, 2 for Retirement\n";
                int option;
                cin >> option;

                if (cin.fail()) {
                    cin.clear();
                    cout << "Invalid input\n";
                    string junk;
                    getline(cin, junk);
                    continue;
                }
                //here I added the options of 1 and 2 to update the clients information from brokerage and 
                // retirement. keeping the options inbound for those two choices 
                if (option < 1 || option > 2) {
                    cout << "Invalid choice\n";
                    continue;
                }
                //here the options are subtracted by 1 form 5 to keep the options inbound 
                options[customer - 1] = option;
                continue;
            case 3:
                cout << "you chose 3 goodbye" << endl;  //num 3 choice exits the program with a return 
                return 0;
            default:
                cout << "Invalid input\n";
                continue;
            }
        } while (true);
    } // end while
}