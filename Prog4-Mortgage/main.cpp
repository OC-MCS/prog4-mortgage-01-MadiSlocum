//================
//Madison Slocum
//Due Date: Feb 20, 2019
//Mortgage Program 4
//====================

#include <iostream>
#include <string>
#include <cmath>
#include "Mortgage.h"

using namespace std;



int main()
{
  
  Mortgage m; //mortgage instance
  double mLoan, mRate, monthPay, term, totalPay;
  int mYears;
  

  cout << "Enter Loan Amount: " << endl;
  cin >> mLoan;//loan // dollar amount of loan used in calculation
  m.setLoan(mLoan);

  cout << "Enter Rate Amount: " << endl;
  cin >> mRate; //rate // annual interest rate used in calculation
  m.setInterest(mRate);

  cout << "Enter Number of Years: " << endl;
  cin >> mYears; //years // the number of years of the loan used in calculation
  m.setYears(mYears);

  term = pow((1 + (mRate / 12)), (12 * mYears));
  monthPay = ((mLoan * (mRate / 12) * term) / (mYears - 1));

  cout << "Monthly payment amount: " << endl;
  cout << monthPay;//member func m.getmonthlypayment
  
    

  cout << "\nTotal amount paid to the bank at the end of the loan period: "<< endl;
  totalPay = (monthPay * mLoan); 
  cout << totalPay << endl;

   

  return 0;
}
