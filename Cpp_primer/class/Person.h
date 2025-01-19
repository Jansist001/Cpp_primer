#pragma once
#include <iostream>
using namespace std;

struct Person
{
	string Name;
	string Adress;

	string Outname() const
	{
		return Name;
	}
	string Outadress() const
	{
		return Adress;
	}
};

istream& read(istream& is, Person& someone)
{
	is >> someone.Adress >> someone.Name;
	return is;
}
ostream& print(ostream& os, Person& someone)
{
	os << someone.Adress << someone.Name;
	return os;
}