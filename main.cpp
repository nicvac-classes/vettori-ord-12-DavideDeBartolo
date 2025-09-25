#include <iostream>
int main() {
    int N;
    std::cout << "Inserisci il numero di cifre da generare: ";
    std::cin >> N;

    std::vector<int> R(N);
    std::srand(std::time(0));

    for (int i = 0; i < N; ++i) {
        R[i] = std::rand() % (N * 10 + 1);
    }

    std::sort(R.begin(), R.end());

    std::cout << "Vettore R ordinato: ";
    for (const auto& num : R) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

