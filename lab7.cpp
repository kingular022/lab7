#include <iostream>
using namespace std;

zad 2

int NWD(int a, int b)
{
    if (b != 0)
        return NWD(b, a % b);
    return a;
}

int main()
{
    int a, b;
    cout << "Podaj dwie liczby: ";
    cin >> a >> b;
    cout << "NWD(" << a << "," << b << ") = " << NWD(a, b) << endl;
}

zad3

long int ciag_r(int n) {
    if (n == 1 || n == 2) return 1;
    return ciag_r(n - 1) + ciag_r(n - 2);
}

int main()
{
    int n;
    cout << "Podaj n: ";
    cin >> n;
    cout << ciag_r(n) << endl;
}

zad4

long int silnia_r(int n) {
    if (n == 0) return 1;
    return silnia_r(n - 1) * n;
}

int main() {
    int n;
    cout << "Silnie jakiej liczby chcesz policzyc?" << endl;
    cin >> n;
    cout << n << "!= " << silnia_r(n) << endl;
}

zad 5

long double ciag_r(int n) {
    if (n == 1) return 0;
    if (n == 2) return 0.5;
    return (-1 *ciag_r(n - 1)) * ciag_r(n - 2);
}

int main()
{
    int n;
    cout << "Podaj n: ";
    cin >> n;
    cout << ciag_r(n) << endl;
}
*/