#include "BaseClass.h"

int main() {
    BaseClass* base = BaseClass::getInstance();
    BaseClass* anotherBase = BaseClass::getInstance();

    std::cout << base << std::endl;
    std::cout << anotherBase << std::endl;
}
