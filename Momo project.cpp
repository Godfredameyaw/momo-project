#include <iostream>
using namespace std;
int main(){
    string pin ="0000",reference,enteredpin;
    int balance= 1000,option,choice,number,NumAttempts=0;
    double amount;
    
       
        while(true) {// Authentication
        cout << "Enter MOMO Pin: ";
        cin >> enteredpin;
        if (enteredpin != pin) {
            NumAttempts++;
            if (NumAttempts >= 3) {
                cout << "Too many wrong attempts. Exiting." << endl;
                return 0; }
                
            cout << "Incorrect PIN. Please try again." << endl;  continue;}
            
      NumAttempts = 0; // Reset wrong attempts counter
      
      /*Menu*/
        cout << "Select an option:" << endl;
        cout << "1. Change/Reset Pin" << endl;
        cout << "2. Check balance" << endl;
        cout << "3. Send money" << endl;
        cout << "4. Exit" << endl;
        cin >> option;
        
        
      // Option 1: Reset PIN
         if (option ==1){
      cout<<"Enter current pin"<<endl;
      cin >>enteredpin;
      if(enteredpin!=pin){cout<<"Wrong pin input. Exiting."<<endl; return 0;}
      if(enteredpin==pin){cout<<"Enter New Pin"<<endl;
      cin>>enteredpin;
      cout<<"Reset pin is done."<<endl; return 0;}}
      
                //Option 2: Check balance
        if (option == 2) {cout<<"Enter pin to continue action: ";
        cin>>enteredpin;
        if(enteredpin==pin){
        cout<<"Charged fee is Ghs 0.00"<<endl;
            cout << "Available balance is Ghs " << balance << endl;return 0;
        }
        else{cout<<"Wrong pin. Exiting."<<endl;return 0;}}
        
        
         /*Option 3: Send money*/
        if (option == 3) {
            cout<<"Enter receipients number: ";
            cin>>number;
            cout << "Enter amount to send: ";
            cin >> amount;
            cout<<"Input reference: ";
            cin>>reference;
            if (amount > balance) {
                cout << "Insufficient balance." << endl;return 0;
            } else {
                amount <= balance;
                cout << "Transaction successful. You have successfully sent Ghs " <<amount<< " to "<< number<< "."<< " New balance is Ghs " <<balance-amount<<"."<< endl;return 0;
            }
        }
        
            // Option 4: Exit
        if (option == 4) {
            cout << "System exiting." << endl;
            return 0;
        }
        
        /*Invalid option*/
        else {
            cout << "Invalid option. Provide pin and choose a valid option." << endl;}
        }
        
       }
