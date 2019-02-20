#include "Mortgage.h"
#include <iostream>

Mortgage::Mortgage() { //constructor to initialize private data to 0

	loan = 0.0;
	interest = 0.0;
	years = 0;

}
//=====================set
void Mortgage::setLoan(double l)
{
	if (loan > 0)
	{
		loan = l;
	}
}

void Mortgage::setInterest(double i)
{
	if (interest > 0) {
		interest = i;
	}

}

void Mortgage::setYears(int y) {

	if (years > 0)
	{
		years = y;
	}
}

//=====================getter func
double Mortgage::getLoan() const
{
	return loan;
}

double Mortgage::getInterest() const
{
	return interest;

}

int Mortgage::getYears() const {

	return years;
}



