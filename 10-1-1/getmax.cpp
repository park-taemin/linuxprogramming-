#include <iostream>
using namespace std;

template <class T>
T getmax(T data[],int n){
    T max = data[0];
    for(int i = 1;i < n; i++){
        if(data[i] > max){
            max = data[i];
        }
    }
    return max;
}

int main() {
int a[5]={-5, 10, 30, 20, 6};
double b[4]= {3.14, 1.5, -6.0, 0.5};
char c[3] = {'a', 'x', 'p'};
cout << "정수배열의 최대값은" << getmax(a,5) << endl;
cout << "실수배열의 최대값은" << getmax(b,4) << endl;
cout << "문자배열의 최대값은" << getmax(c,3) << endl;

return 0;
}
