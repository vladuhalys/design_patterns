#include "samsung.h"

OS* Samsung::FactoryMethod() {
    return new Android();
}