#include <cstring>

template<typename T>
const T& max(const T& a, const T& b)
{
    return b < a ? a : b;
}

const char* max(const char* a, const char* b)
{
    return std::strcmp(b, a) < 0 ? a : b;
}

template<typename T>
const T& max(const T& a, const T& b, const T& c)
{
    return max(max(a, b), c); // Ошибка при передаче аргументов в max(a, b) по значению
}

int main() {
    auto m1 = ::max(7, 42, 68); // OK

    char const* s1 = "frederic";
    char const* s2 = "anica";
    char const* s3 = "lucas";

    auto m2 = ::max(s1, s2, s3); // UB
}