#include "operating_system.h"

class Phone {
    
public:
    string Company;
    string Model;
    string Color;
    Phone();
    Phone(string Company, string Model, string Color);
    
    virtual ~Phone() {};
    virtual OS* FactoryMethod() = 0;
   
    std::string SomeOperation();
};

