#pragma once
#include <iostream>
using std::string;

class OS 
{
public:
	string Name;
	string Version;
	string Creator;
	OS()
	{
		Name = "empty";
		Version = "empty";
		Creator = "empty";
	}
	OS(string Name, string Version, string Creator) : OS()
	{
		this->Name = Name;
		this->Version = Version;
		this->Creator = Creator;
	}
	
	virtual string Operation() const = 0;

};
