#include "BaseClass.h"

BaseClass* BaseClass::instance = NULL;

BaseClass::BaseClass() {}

BaseClass* BaseClass::getInstance() {
    if (instance == 0) {
        instance = new BaseClass();
    }
    return instance;
}

