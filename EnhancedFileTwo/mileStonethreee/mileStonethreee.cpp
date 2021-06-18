//THIS IS THE ENHANCED CODE THAT WAS CHANGED TO C++ FROM JAVA
//BELOW THIS CODE IS THE JAVA CODE I WORKED FROM 
// mileStonethreee.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
using namespace std;

// The purpose of this enhancement was to transfer this java file into a c++ file. By doing so I as a developer am showing the 
//capability of recreating/reveres engingeering many files from other languages into the language of my choice. through this file 
//I had to learn how to create a hash in c++, how to hold data in a text file and data structure, reverse engineer other file outputs
//construct functional files from other languages, and make sure the file executes the same. 

int main()
{

    //string line "  ";
    ifstream readFile("userandpassword.txt"); //This is the text file that holds the user information username and passwords
    string UserName;
    string Password;
    string _UserName;
    string _Password;

    {   //I created a visual data structure that is in a txt file of user names and password that is stored to
        //authenticate a user for the system 
        string username = "Gerardo";  
         string userinput;
        string names[5] = {
            "Dr. Martinez Veterinarian ",
            "John Doe Management",
            "Amy Friendly zookeeper",
            "Johnny Smith zookeeper",
            "Carol Spears Veterinarian",
        };
        string options[5] = { Veterinaian, Management, zookeeper, zookeeper, Veterinarian };


    cout << "Enter UserName: ";
    cin >> UserName;
      
    //a challenge face was recreating the hash table function for a cpp file. understanding how to recreate a java hash
    //into a c++ hash to function in the same manner as the java file. The purpose of this hash is to add security to the system
    //I used a software salt to create the functioning hash table
    
    for-each-row in file do :
        read username-in, salt, password-hash-in

            if ( username-in == username && hash(salt, password) == password-hash-in):
                success!

    cout << "Enter Password: ";
    cin >> Password;

    bool found = false;
    while (getline(readFile, line)) {

        stringstream iss(line);
        iss >> _UserName >> _Password;

        if (UserName == _UserName && Password == _Password)
        {

            cout << "Login Succesfully! " << endl;
            found = true;
            continue;  //adding a continue instead of break here to keep the program running 
        }
    }
    if (!found) {
        cout << "Invalid UserName and Password" << endl;
    }
    do {
        cout << "Welcom user " << names <<  endl;
        int choice;
        cin >> choice;

        if (cin.fail()) {  //I added the fail and clear functions that allows for the file to execute with no drag data 
            cin.clear();
            cout << "Invalid input\n";
            string junk;
            getline(cin, junk);
            continue;
        }
        //here is the  displays of the users name followed by the occupation  from the choice of the users option 

    switch (choice) {
    case 1:
        cout << "you chose 1" << endl;
        cout << "Welcome Dr. Martinez Veterinarian" << endl;

        continue;
    case 2:
        cout << "you chose 2" << endl;
        cout << "Welcome John Doe Management" << endl;
            continue;
    case 3: 
        cout << "you chose 3" << endl;
        cout << "Welcome Amy Friendly zookeeper" << endl;

    case 4:
        cout << "you chose 4" << endl;
        cout << "Welcome Johnny Smith zookeeper" << endl;

    case 5:
        cout << "you chose 5" << endl;
        cout << "Welcome Carol Spears Veterinarian" << endl;

    }
        
    }
    return 0;
}

//THIS IS THE ORIGINAL JAVA FILE I USED TO TRANSFER THE LANGUAGE TO C++ FROM JAVA 
    
    
    import java.io.File;
import java.security.MessageDigest;
import java.util.Scanner;


/**
 *
 * @author Gerardo Martinez
 */
public class ZooAuthenticationSystem {
    

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws Exception {
        // TODO code application logic here
    }
    Scanner readInput = new Scanner(System.in);
    int attempts = 0; /* repeat until a successful attempt or 3 unsuccessful 
    attempts or exit*/
    while (true)
    {
    
    System.out.print("Enter user name: "); //prompt username
    String userName = readInput.next(); 
    System.out.print("Enter password: "); //prompt for user password
    String original = readInput.nextLine();
    
    MessageDigest md = MessageDigest.getInstance("MD5"); //converting password
    md.update(original.getBytes());
    byte[] digest = md.digest();
    StringBuffer sb = new StringBuffer();
    for (byte b : digest)
    {
        sb.append(String.format("%02x", b & 0xff));
    }
    boolean authentication = false; //boolean for login successful or not
    Scanner readCred = new Scanner (new File("Credentials.txt"));
    // credential search 
    while(readCred.hasNextLine()){
        String record = readCred.nextLine();// record read
        String columns[] = record.split("\t");// checking individual fields
        if(columns[0].trim().equals(userName))/* if matches check 
            converted password 
        */
        if(columns[1].trim().equals(sb.toString()))//checking user password
            
            authenticationSuccess = true; 
        
            Scanner readRole = new Scanner (newFile(columns[3].trim() + ".txt"));
            
            while(readRole.hasNextLine()){
                System.out.println(readRole.nextLine());
            }
            break;
            if(authenticationSuccess){
                System.out.println(Do you want to log out(y/n)):/*option to log 
                out
                */
                
                String choice = readInput.nextLine();
                if(choice.toLowerCase().charAt(0) == 'y')
                    System.out.println("Successfully loged out.");
                    break;
            }
            else {
                authenticationSuccess = false; // boolean 
                
            }
            
            else{
                    attempts ++ // reached max
                            if(attempts == 3){
                    System.out.println("Maximum attempts! \n Exiting.");
                    break;
                    } 
            else{
                    System.out.println("Please enter correct credentials");

