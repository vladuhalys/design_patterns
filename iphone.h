#include "phone.h"
#include "ios_system.h"

class Iphone : public Phone {
public:
    OS* FactoryMethod() override;
};
