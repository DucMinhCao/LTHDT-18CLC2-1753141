#include <iostream>

class BaseClass {
    private:
        static BaseClass* instance;
        BaseClass();
    public:
        static BaseClass* getInstance();
};