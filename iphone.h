// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com


#include "phone.h"
#include "ios_system.h"

class Iphone : public Phone {
public:
    Iphone():Phone()
    {}
    Iphone(string Company, string Model, string Color) :Phone(Company, Model, Color)
    {}
    OS* FactoryMethod() const override {
        return new IOS();
    }
    OS* FactoryMethod(string Name, string Version, string Creator) const override {
        return new IOS(Name, Version, Creator);
    }
};
