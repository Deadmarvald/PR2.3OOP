#pragma once

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Money
{
private:
	long hrn;
	unsigned int kop;

public:
	Money();
	Money(long, unsigned long);
	Money(const Money&);
	~Money();

	long GetHrn() { return hrn; }
	unsigned int GetKop() { return kop; }
	void SetHrn(long hrn) { this->hrn = hrn; }
	void SetKop(unsigned int kop) { this->kop = kop; }

	Money& operator = (const Money&);
	operator string() const;

	friend Money operator -(const Money&, const Money&);
	friend Money operator *(const Money&, const double&);

	bool operator ==(const Money&);
	bool operator !=(const Money&);
	bool operator >(const Money&);
	bool operator <(const Money&);
	bool operator >=(const Money&);
	bool operator <=(const Money&);

	friend ostream& operator << (ostream&, const Money&);
	friend istream& operator >> (istream&, Money&);

	Money& operator ++();
	Money& operator --();
	Money operator ++(int);
	Money operator --(int);
};