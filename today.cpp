#include<iostream>
using namespace std;

class Unary {
    private:
    int a,b,c;

    public:
    Unary (int x, int y , int z){
        a = x ; b = y ; c = z;
    }

    void display(){
        cout << a << " \n" << b << "\n" << c << "\n";
    }

    void operator ++ (){
        a++;
        b++;
        c++;
    }

    friend void operator ++ (Unary &obj){
        obj.a++;
        obj.b++;
        obj.c++;
    }

};

int main (){
    Unary obj (10,20,30);
    cout << "before increment \n";
    obj.display();
    cout << "after\n";
    obj.operator++();
    obj.display();



}