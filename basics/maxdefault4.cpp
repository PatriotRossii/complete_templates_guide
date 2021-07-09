template<typename T1, typename T2>
auto max(T1 a, T2 b)
{
    return b < a ? a : b;
}

template<typename RT, typename T1, typename T2>
RT max(T1 a, T2 b)
{
    return b < a ? a : b;
}

int main() {
    auto a = ::max(4, 7.2);                 // First template
    auto b = ::max<long double>(7.2, 4);    // Second template

//  auto c = ::max<int>(4, 7.2);
//  ^ Error: both templates fits
}