/*
Name: Hossain, Shah Rahat
AIUB ID: 22-47411-2
Age: 18
Country: Bangladesh
*/

// Hello everyone, I am not good at programming but I love to learn coding.
// I tried to create 2 bank accounts where account 1 will send some cash to account 2.
// I also used Sleep() function for delay animation


#include <iostream> // c++ headerfile
#include <conio.h> // Not important but I like this headerfile, because it helps me to remove extra text (Example: code run time)
#include <windows.h> // used for changing the color of text on cmd
#include <string.h> // for some string variable

using namespace std;

class Bank  // In OOP we need class and objects. Here the class is "Bank"
{
private: // private access modifier
    int64_t bank_account; // You can use int data type but I used int64_t because the max limit of int is only 2147483647. In Bangladesh account size is 10/13 digits
    string bank_account_user_name; // It will store you Account User Name
    string type; // Account Type: REGULAR / SAVING / CURRENT etc.
    float bank_balance; // It will store you Account Balance
    float Send_Balance;
public: // public access modifier
    void setAccount()
    {
        cout << " Enter Your Account No. : ";
        cin >> bank_account;
    }

    void setAccount_Name()
    {
        cout << " Enter Your Name (For Account) : ";
        cin >> bank_account_user_name;
    }

    void setBalance()
    {
        cout << " Add Balance : ";
        cin >> bank_balance;
    }

    void setSend_balance()
    {
        cout << " Send Money : ";
        cin >> Send_Balance;
    }

    void setType()
    {
        cout << " Account Type : ";
        cin >> type;
    }

    int getAccount()
    {
        return bank_account;
    }

    string getAccount_Name()
    {
        return bank_account_user_name;
    }

    string getType()
    {
        return type;
    }

    float getBalance()
    {
        return bank_balance;
    }

    float getSend_Balance()
    {
        return Send_Balance;
    }
};


int main ()
{

system ("color 06");

    Bank A1; // for class Bank I created A1 object for account 1

    A1.setAccount();
    A1.setAccount_Name();
    A1.setBalance();
    A1.setType();

    system ("cls");

    Bank A2; // for class Bank I created A2 object for account 2

    A2.setAccount();
    A2.setAccount_Name();
    A2.setBalance();
    A2.setType();

    system ("cls");

    cout << A1.getAccount_Name() <<" transfer money to " << A2.getAccount_Name() << endl;
    A1.setSend_balance();

    system ("cls");

    cout << "Checking Your Input ";
    Sleep(1000); // delay funtion
    cout << ".";
    Sleep(1000); // delay funtion
    cout << ".";
    Sleep(1000); // delay funtion
    cout << ".";
    Sleep(1000); // delay funtion
    cout << ".";
    Sleep(1300); // delay funtion

    system ("cls");

    cout << "Account has been created and Money transfer completed!!";
    Sleep(3000); // delay funtion

    system ("cls");

    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------------ ABCD Bank -------------------------------------------------------" << endl;
    cout << "------------------------------------------------------------------------------------------------------------" << endl;
    cout << "- Account No.     \t: " << A1.getAccount()              << endl;
    cout << "- Account Name    \t: " << A1.getAccount_Name()         << endl;
    cout << "- Account Type    \t: " << A1.getType()                 << endl;
    cout << "- Account Balance \t: " << A1.getBalance()  << " BDT "  << endl;
    cout << "- New Account Balance ( Money Send : " <<  A1.getSend_Balance() << " )    \t: " << A1.getBalance()- A1.getSend_Balance() << " BDT "  << endl;
    cout << "------------------------------------------------------------------------------------------------------------" << endl << endl;

    cout << "- Account No.           \t: " << A2.getAccount()               << endl;
    cout << "- Account Name          \t: " << A2.getAccount_Name()          << endl;
    cout << "- Account Type          \t: " << A2.getType()                  << endl;
    cout << "- Old Account Balance   \t: " << A2.getBalance()  << " BDT "   << endl;
    cout << "- New Account Balance ( Money Received : " <<  A1.getSend_Balance() << " ) \t: " << A2.getBalance() + A1.getSend_Balance() << " BDT " << endl;
    cout << "------------------------------------------------------------------------------------------------------------" << endl;

    getch(); // end
    return 0;
}

/*
If you find any error please let me know.
email: shah.rahat.hossain.aiub@gmail.com
*/
