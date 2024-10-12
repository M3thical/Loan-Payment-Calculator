//Daniel A Sanchez 
//S01368279
//2/13/22
//This program calculates the monthly payment
//using struct and functions

#include<iostream>
#include<cmath>
using namespace std;

struct Loan  // Loan is called structure tag
{
    int ID;         // assume an unique integer between 1111-9999
    float amount;   // $ amount of the loan
    float rate;     // annual interest rate
    int term;       // number of months, length of the loan
};

//prototype functions
float payment(Loan &l);
void initialize_loan(Loan &l);

int main()
{
    Loan loan1 ,loan2; //creating object loan1 and loan2 from struct Loan
    float monthly_payment1 , monthly_payment2; //creating variables to store payment result

    cout << "Enter information for loan #1" << endl;
    initialize_loan(loan1); //initialize loan1
    monthly_payment1 = payment(loan1); //assigning the result of loan1 to variable monthly payment 1
    cout << "The monthly payment for loan " << loan1.ID << " is: " << monthly_payment1 << endl;
    //display loan1 monthly payment 

    cout << endl; //blank space

    cout << "Enter information for loan #2" << endl;
    initialize_loan(loan2); //initialize loan2
    monthly_payment2 = payment(loan2); //assigning the result of loan2 to variable monthly payment 2
    cout << "The monthly payment for loan " << loan2.ID << " is: " << monthly_payment2 << endl;
    //display loan2 monthly payment 

    cout << endl; //blank space

    cout << "The total monthly payment for loan " << loan1.ID << " and loan " << loan2.ID << " is " 
         << (monthly_payment1 + monthly_payment2) << endl;
   //display the total monthly payment 

    return 0;
}

//function calculates monthly payment 
float payment(Loan &l)
{
    l.rate = l.rate / 1200;  // To convert % yearly rate to monthly fraction
    return l.amount * l.rate * (pow((l.rate + 1), l.term) / (pow((l.rate + 1), l.term) - 1));
}
 
//function initialize data members
void initialize_loan(Loan& l) {
    cout << "Enter the ID of this loan: ";
    cin >> l.ID;

    cout << "Enter the amount of this loan: ";
    cin >> l.amount;

    cout << "Enter the annual interest rate of this loan (in %): ";
    cin >> l.rate;

    cout << "Enter the term (number of months, length of the loan): ";
    cin >> l.term;
}

