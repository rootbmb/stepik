/**
Число десятков
Дано целое неотрицательное число N, определите число десятков в нем (предпоследнюю цифру числа). Если предпоследней цифры нет, то можно считать, что число десятков равно нулю.
Формат входных данных
На вход дается целое положительное число N (0 ≤ N ≤ 1000000).
Формат выходных данных
Выведите одно целое число - ответ на задачу.

Sample Input:
73

Sample Output:
7
**/

#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    cout << (a / 10) % 10 << endl;
    return 0;
}
