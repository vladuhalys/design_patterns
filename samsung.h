#include "phone.h"
#include "android_system.h"

class Samsung : public Phone {
public:
    OS* FactoryMethod() override;
};
