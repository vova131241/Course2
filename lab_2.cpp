#include <iostream>
using namespace std;

int CalculateXValue(int q, int r);
int CalculateImp(int p, int q, int r);

int main() {
    cout << "p q r | q∨r | p -> (q v r)\n";
    cout << "---------------------------\n";

    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            for (int r = 0; r <= 1; r++) {
                int q_or_r = CalculateXValue(q, r);
                int f = CalculateImp(p, q, r);

                cout << " " << p << " " << q << " " << r
                    << "|  " << q_or_r
                    << "  |      " << f << "\n";
            }
        }
    }

    cout << "\n=== Перевірка для власних значень ===\n";
    int p, q, r;
    cout << "Enter p (0/1): "; cin >> p;
    cout << "Enter q (0/1): "; cin >> q;
    cout << "Enter r (0/1): "; cin >> r;

    int xValue = CalculateXValue(q, r);
    int imp = CalculateImp(p, q, r);

    cout << "\np q r | q v r | p -> (q v r)\n";
    cout << "------------------------------\n";
    cout << p << " " << q << " " << r
        << " |  " << xValue
        << "    |      " << imp << "\n";

    return 0;
}

int CalculateXValue(int q, int r) {
    return q || r;
}

int CalculateImp(int p, int q, int r) {
    return (!p) || CalculateXValue(q, r);
}