//Daniel A Sanchez
//S01368279
//2/13/22
//This program calculates monthly payment
//using a class and functions 
#include <iostream>
#include <cmath>
using namespace std;

class Loan  // Loan is called structure tag 
{
 //public functions
public:
    void set();
    void payment(); //setting payment from float to void
    void display();

 //private data members
private:
    int ID;         // assume an unique integer between 1111-9999
    float amount;   // $ amount of the loan
    float rate;     // annual interest rate
    int term;       // number of months, length of the loan
    float monthly_payment; // adding monthly_payment as a data member
};



int main() {

    Loan loan1; //creating object loan1 from Loan class

    loan1.set(); //initilize data members
    loan1.payment();//calculate montlhy payment
    cout << endl; //blank space
    loan1.display(); // display data members info and monthly payment

	return 0;
}

//display information from loan
void Loan::display() {
    cout << "Your loan ID is: " << ID << endl;
    cout << "Amount of loan is: " << amount << endl;
    cout << "rate of your loan is: " << rate << endl;
    cout << "Term of your loan is: " << term << endl;
    cout << "The monthly payment of your loan is: " << monthly_payment << endl;
}

//calculate monthly payment
void Loan::payment() {
  rate = (rate / 1200);  // To convert % yearly rate to monthly fraction
  monthly_payment = amount * rate * (pow((rate + 1), term) / (pow((rate + 1), term) - 1));
  rate = (rate * 1200); //converting rate from decimal to integer 
}

//set function initialize data members
void Loan::set()
{
    cout << "Enter the ID of this loan: ";
    cin >> ID;

    cout << "Enter the amount of this loan: ";
    cin >> amount;

    cout << "Enter the annual interest rate of this loan (in %): ";
    cin >> rate;

    cout << "Enter the term (number of months, length of the loan): ";
    cin >> term;
}