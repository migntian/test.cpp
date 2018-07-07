#include <iostream>
using namespace std;
void Testreferencel1()
{
    int a = 1;
    int &b = a;
    cout<<"a:address-"<<&a<<endl;
    cout<<"b:address-"<<&b<<endl;
    a = 2;
    b = 3;
    int &c = b;
    c = 4;
}
void Testreferencel2()
{
    int d1 = 4;
    const int & d2 = d1;
    d1 = 5;//d1改变d2的值也会改变。
    const int d3 = 1;
    const int & d4 = d3;
    //int & d5 = d3;
    const int & d6 = 5;//常量具有常性，只有常引用可以引用常量
    double d7 = 1.1;
    //int &d8 = d7; // d7是double类型，d8是int，d7赋值给d8时要产生一个临时变量
    //也就是说d8引用的这个带有常性的临时变量，所以不能赋值
    const int &d9 = d7;
}
int main()
{
    Testreferencel2();
}
