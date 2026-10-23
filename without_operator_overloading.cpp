#include<iostream>
using namespace std;
class complex
{
    private:
    float real;
    float imag;
    public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex(float r,float i)
    {
        real=r;
        imag=i;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    complex c1(2.0,3.0);
    cout<<"Complex Number is:";
    c1.display();
    complex c2(5.0,7.0);
    cout<<"Complex Number is:";
    c2.display();
    return 0;
}
//OUTPUT-
//PS D:\Shravani Kote> cd "d:\Shravani Kote\" ; if ($?) { g++ operator_overloading.cpp -o operator_overloading } ; if ($?) { .\operator_overloading }
//Complex Number is:2+3i
//Complex Number is:5+7i