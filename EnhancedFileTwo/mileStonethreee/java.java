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

