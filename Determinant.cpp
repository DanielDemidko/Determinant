#include <iostream>
#include <random>
#include <vector>
#include <string>

int main(const int argc, const char *const *const argv)
{
    setlocale(0, "");
    if (argc < 3)
    {
        std::cout << "Нужно указать два имени через пробел." << std::endl;
        return 0;
    }
    std::vector<std::string> persons{ argv[1], argv[2] };
    std::shuffle(persons.begin(), persons.end(), std::default_random_engine(std::random_device{}()));
    std::cout << "Курицу будет готовить " << persons.front() << ", а картошку " << persons.back() << std::endl;
}
