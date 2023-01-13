#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    int n, num = 1, unpairedNum = 0, sum = 0;
    cout << "Введiть n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (num % 2 != 0) {
            unpairedNum++;
            sum += num;
        }
        num++;
    }
    cout << "Кiлькiсть НЕ парних чисел (вiд 1 до n) = " << unpairedNum << "\n";
    cout << "Сума всiх цiлих НЕ парних чисел (вiд 1 до n) = " << sum << "\n";
    return 0;
}
