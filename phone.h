// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#pragma once
#include "operating_system.h"

class Phone {
    
public:
    string Company;
    string Model;
    string Color;
    Phone()
    {
        Company = "empty";
        Model = "empty";
        Color = "empty";
    }
    Phone(string Company, string Model, string Color) : Phone()
    {
        this->Company = std::move(Company);
        this->Model = std::move(Model);
        this->Color = std::move(Color);
    }
    virtual OS* FactoryMethod() const = 0;
    virtual OS* FactoryMethod(string Name, string Version, string Creator) const = 0;
   
   
    string StratPhone() const {
        OS* os = this->FactoryMethod();
        string result = "phone " + Company + " "
            + Model + " : " + os->Operation();
        delete os;
        return result;
    }
    string StratPhone(const string &Name, const string &Version,const string &Creator) const {
        OS* os = this->FactoryMethod(Name, Version, Creator);
        string result = "phone " + Company + " "
            + Model + " : " + os->Operation();
        delete os;
        return result;
    }
};

