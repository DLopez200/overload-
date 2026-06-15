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

    number operator++(){
        num++;
        return number(num);//for ++a
    }

    number operator++(int){ //used for a++
        number old = number(num);
        num++;
        return old;

    }



};

int main(){

    /*a.f(b);the same
        a+b*/

        number a = (2);
        number b = (4);

        (a + b).print();

        //a++; // a--
        ++a; // --a

        a.print();

        a++;
        a.print();
    /* DONT DO THIS
    ANY ASSIGNENT SHOULD BE ITS OWN LINE OF CODE
        int x = 4;
        cout << x++ << endl;
        cout << ++x << endl;
if you wanted to incrament it do this:
        x++
        cout << x<<endl;
    */


    return 0;
}