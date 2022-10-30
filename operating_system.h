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
		this->Name = std::move(Name);
		this->Version = std::move(Version);
		this->Creator = std::move(Creator);
	}
	virtual ~OS(){}
	
	virtual string Operation() const = 0;

};
