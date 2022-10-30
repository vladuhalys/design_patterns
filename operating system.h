#pragma once
#include <iostream>
using std::string;

class OS 
{
public:
	string Name;
	string Version;
	string Creator;
	OS();
	OS(string Name, string Version, string Creator);
	
	virtual std::string Operation() const = 0;
	virtual ~OS() {}
};
