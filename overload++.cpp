#include <iostream>
using namespace std;

class number {
    private:
    int num;

    public:
    number(){
        num = 0;
    }

    number (int x){
        num = x;
    }
    number operator+(const number& b){
        return number(num + b.num);

    }

    int get_numn(){
        return num;
    }
    void set_num(int x){
        num = x;
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

istream& operator>>(istream& in, number& a){ // cin needs a refrence fo rnumb
    int x;
    in >> x;
    a.set_num(x);

    return in;
}

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


        number c;
        cin >> c;

        cout << c <<endl;
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