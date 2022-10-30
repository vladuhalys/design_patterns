// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com


#include "phone.h"
#include "android_system.h"

class Samsung : public Phone {
public:
    Samsung() :Phone()
    {}
    Samsung(string Company, string Model, string Color) :Phone(Company, Model, Color)
    {}
    OS* FactoryMethod() const override {
        return new Android();
    }
    OS* FactoryMethod(string Name, string Version, string Creator) const override {
        return new Android(Name, Version, Creator);
    }
};
