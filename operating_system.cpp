#include "operating system.h"

OS::OS()
{
	Name = "empty";
	Version = "empty";
	Creator = "empty";
}
OS::OS(string Name, string Version, string Creator) : OS()
{
	this->Name = Name;
	this->Version = Version;
	this->Creator = Creator;
}