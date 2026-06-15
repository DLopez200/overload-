#include <iostream>
using namespace std;

class number {
    private:
    int num;

    public:
    

    number (int x){
        num = x;
    }
    number operator+(const number& b){
        return number(num + b.num);

    }

    void print(){
        cout << num << endl;
    }

    number& operator++(){

    }



};

int main(){

    /*a.f(b);the same
        a+b*/

        number a = (2);
        number b = (4);

        (a + b).print();

        //a++; // a--
        //++a; // --a

        int x = 4;

        cout << x++ << endl;
        cout << ++x << endl;

    return 0;
}