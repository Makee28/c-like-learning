#include <iostream>

namespace cls
{
    class human:
        public:
            std::string name;
            int age;
            void eat()
            {
                std::cout << this.name << " is eating.\n"
            }
        private:

}