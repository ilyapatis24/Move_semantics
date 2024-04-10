#include <iostream>
#include <vector>

template<class T>
void move_vectors(T& one, T& two)
{
    two = std::move(one);
};

template<class T>
void print_vectors(std::vector<T>& vect)
{
    for (const auto& elem : vect)
    {
        std::cout << elem << '\t';
    }
    std::cout << std::endl;
};

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Russian");
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::vector <std::string> two;

    std::cout << "one before\t";
    print_vectors(one);
    std::cout << "two before\t";
    print_vectors(two);

    move_vectors(one, two);

    std::cout << "one after\t";
    print_vectors(one);
    std::cout << "two after\t";
    print_vectors(two);
    return 0;
}