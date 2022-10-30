#include "iphone.h"

OS* Iphone::FactoryMethod() {
    return new IOS();
}