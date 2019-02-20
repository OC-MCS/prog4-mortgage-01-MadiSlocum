#pragma once //keep this here
#include <iostream> 

using namespace std;

class Mortgage{
  
  private:
  
  double loan; //dollar amount of the loan
  double interest; //annual interest rate 
  int years; //years of the loan
 
  //=========================================================
 
public:
  
  Mortgage();  //constructor to set private data to zero

  //===================set

  void setLoan(double);  //loan

  void setInterest(double); //interest
  
  void setYears(int); //years

//=======================get

  double getLoan() const;

  double getInterest() const; 

  int getYears() const; 
  
 
};
