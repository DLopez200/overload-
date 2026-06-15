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

    int get_numn(){
        return num;
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

ostream& operator<<(ostream& out, number a){ //ostream mus be a refrence(&)
    out << a.get_numn();
    return out;
};

int main(){

    /*a.f(b);the same
        a+b*/

        number a = (2);
        number b = (4);

        cout <<a + b<< endl;

        //a++; // a--
        ++a; // --a

        cout << a <<endl;

        a++;
        cout << a << endl;
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