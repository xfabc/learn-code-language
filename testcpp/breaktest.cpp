#include <iostream>

using namespace std;

int main(){

    int a = 10;

    do{
        cout << "a的值是：" << a << endl;
        a = a + 1;
        if(a>15){
            break;
        }
    }while (a<20);

    return 0;
    
}