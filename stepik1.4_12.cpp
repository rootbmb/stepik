/**
Яша плавал в бассейне размером N×M метров и устал. В этот момент он обнаружил, 
что находится на расстоянии X метров от одного из длинных бортиков (не обязательно от ближайшего) и Y метров от одного из коротких бортиков.
 Какое минимальное расстояние должен проплыть Яша, чтобы выбраться из бассейна на бортик?
Формат входных данных
Программа получает на вход числа N, M, X, Y.
Формат выходных данных

Программа должна вывести число метров, которое нужно проплыть Яше до бортика.

Sample Input:
23
52
8
43

Sample Output:
8
**/
#include <iostream>

using namespace std;

int main(){
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    if (n < m){
        n = n - x;
        m = m - y;
        if ( n < m){
            if ( x < y) {
                if (n < x){
                    cout << n;
                }
                else{
                    cout << x;
                }
            }
            else {
                if (n < y){
                    cout << n;
                }
                else{
                    cout << y;
                }
            }
        }
        else{
            if (x < y){
                if ( m < x){
                    cout << m;
                }
                else{
                    cout << x;
                }
            }
            else{
                if (m < y){
                    cout << m;
                }
                else{
                    cout << y;
                }
            }
        }
        
    }
    else{
        n = n - y;
        m = m - x;
        if ( n < m){
            if ( x < y) {
                if (n < x){
                    cout << n;
                }
                else{
                    cout << x;
                }
            }
            else {
                if (n < y){
                    cout << n;
                }
                else{
                    cout << y;
                }
            }
        }
        else{
            if (x < y){
                if ( m < x){
                    cout << m;
                }
                else{
                    cout << x;
                }
            }
            else{
                if (m < y){
                    cout << m;
                }
                else{
                    cout << y;
                }
            }
        }
    }
    return 0;
}
