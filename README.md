# Loan Payment Calculator

This is a C++ project that calculates the monthly payments for loans using two different approaches: one with a `struct` and the other with a `class`. Both programs prompt the user to input loan details (ID, amount, interest rate, and term) and then calculate the monthly payment based on those inputs.

## Table of Contents
1. [Project Description](#project-description)
2. [Purpose of Learning](#purpose-of-learning)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Features](#features)
   

## Project Description

The **Loan Payment Calculator** consists of two programs:
1. **Struct-based Loan Calculator (`ex21.cpp`)**: Uses a `struct` to represent loan details and functions to initialize the loan and calculate the monthly payment. The user can input details for two loans, and the program calculates and displays the individual and total monthly payments.
2. **Class-based Loan Calculator (`ex22.cpp`)**: Uses a `class` to encapsulate loan details and methods to set loan data, calculate the monthly payment, and display loan information.

Both programs calculate the monthly payment using the following formula:


Where:
- **Loan Amount** is the total loan amount in dollars.
- **Annual Interest Rate** is provided by the user and converted into a monthly rate.
- **Term** is the length of the loan in months.

## Purpose of Learning

The project was created to practice and improve the following programming concepts:
- **Structures** and **Classes**: Understanding the differences between `struct` and `class` in C++.
- **Encapsulation**: Using classes to encapsulate data and related methods.
- **Functions**: Writing reusable functions to initialize data and perform calculations.
- **Input/Output**: Handling user input and displaying results in a structured format.
- **Mathematical Operations**: Implementing formulas and performing calculations with user-provided data.

## Installation

To run this project on your local machine, follow these steps:

1. Clone the repository:
    ```bash
    git clone https://github.com/M3thical/loan-payment-calculator.git
    ```

2. Navigate to the project directory:
    ```bash
    cd loan-payment-calculator
    ```

3. Compile the programs using a C++ compiler like `g++`:
    - For the struct-based version:
      ```bash
      g++ ex21.cpp -o loan_struct_calculator
      ```
    - For the class-based version:
      ```bash
      g++ ex22.cpp -o loan_class_calculator
      ```

4. Run the programs:
    - Struct-based version:
      ```bash
      ./loan_struct_calculator
      ```
    - Class-based version:
      ```bash
      ./loan_class_calculator
      ```

## Usage

### Struct-based Loan Calculator (`ex21.cpp`)
This program prompts the user to input the loan details for two loans and calculates the monthly payment for each loan. It then displays the individual monthly payments and the total monthly payment for both loans combined.

### Class-based Loan Calculator (`ex22.cpp`)
This program initializes a single loan using user input, calculates the monthly payment, and displays the loan details along with the monthly payment.

### Example Output:

For the `struct-based` program:

Enter information for loan #1 Enter the ID of this loan: 1234 Enter the amount of this loan: 5000 Enter the annual interest rate of this loan (in %): 5 Enter the term (number of months, length of the loan): 24 The monthly payment for loan 1234 is: 219.36

Enter information for loan #2 Enter the ID of this loan: 5678 Enter the amount of this loan: 7000 Enter the annual interest rate of this loan (in %): 4.5 Enter the term (number of months, length of the loan): 36 The monthly payment for loan 5678 is: 208.54

The total monthly payment for loan 1234 and loan 5678 is 427.90


For the `class-based` program:

Enter the ID of this loan: 1234 Enter the amount of this loan: 5000 Enter the annual interest rate of this loan (in %): 5 Enter the term (number of months, length of the loan): 24

Your loan ID is: 1234 Amount of loan is: 5000 Rate of your loan is: 5 Term of your loan is: 24 The monthly payment of your loan is: 219.36


## Features

- **Two approaches** to calculating loan payments: using a `struct` or a `class`.
- **User input validation**: The program ensures all relevant loan details are entered before calculating payments.
- **Calculation of monthly payments**: Uses a mathematical formula to calculate monthly payments based on user input.
