#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int r;
    int i;

public:
    Complex()
    {
        r = 0;
        i = 0;
    }

    Complex(int real, int img)
    {
        r = real;
        i = img;
    }

    int getR()
    {
        return r;
    }

    int getI()
    {
        return i;
    }

    Complex add_complex(Complex d)
    {
        int tempR = r + d.getR();
        int tempI = i + d.getI();
        Complex temp(tempR, tempI);
        return temp;
    }

    void display()
    {
        cout << "Real : " << r << " & Imagnary : " << i << endl;
    }
};

int main()
{
    Complex c1(2, 4), c2(3, 1), c3;
    c3 = c1.add_complex(c2);
    c3.display();
}