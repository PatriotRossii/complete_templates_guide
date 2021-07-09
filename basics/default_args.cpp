template<typename T /* = std::string */> // Uncomment to fix erro
void f(T = "") {}

int main() {
    f(1); // T = int, f<int>(1) called

    // f();
    // ^ Error: can't determine T
}