//#include <iostream>
//using namespace std;
//double factS(int n, long long fact = 1, int k = 1) {
//    if (k > n) return 0;
//    fact *= k;
//    return fact + factS(n, fact, k + 1);
//}
//int main() {
//    int N;
//    cout << "Введите N (1 <= N < 15): ";
//    cin >> N;
//    if (N < 1 || N >= 15) {
//        cout << "N должно быть в диапазоне от [1,14]" << endl;
//        return 1;
//    }
//    double S = factS(N);
//    cout << "Сумма S = " << S << endl;
//    return 0;
//}