#include "phone.h"

Phone::Phone()
{
	Company = "empty";
	Model = "empty";
	Color = "empty";
}
Phone::Phone(string Company, string Model, string Color) : Phone()
{
	this->Company = Company;
	this->Model = Model;
	this->Color = Color;
}

string Phone::SomeOperation() {
	OS* os = this->FactoryMethod();
	string result = "Phone: "+ Company + " "
		+ Model + " : " + os->Operation();
	delete os;
	return result;
}