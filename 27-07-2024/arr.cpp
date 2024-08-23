#include<bits/stdc++.h>
using namespace std;

class Array
{
    int size;
    int *a;
public:
    Array()
    {
        cin>>size;
        a = new int[size];

        for(int i=0; i<size; i++)
        {
            cin>>a[i];
        }
    }

    int maximum()
    {
        int t = a[0];
        for(int i=1; i<size; i++)
        {
            if (a[i]>t)
            {
                t=a[i];
            }
        }
        return t;
    }
    int minimum()
    {
        int t = a[0];
        for(int i=1; i<size; i++)
        {
            if (a[i]<t)
            {
                t=a[i];
            }
        }
        return t;
    }
    void sort()
    {
        for(int i=0; i<size-1; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                if(a[i]>a[j])
                {
                    swap(a[i],a[j]);
                }
            }
        }
    }
    void display()
    {
        for(int i=0; i<size; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    ~Array()
    {
        delete []a;
    }



};

int main()
{
    Array a1;
    cout<<"Maximum is : "<<a1.maximum()<<endl;
    cout<<"Minimum is : "<<a1.minimum()<<endl;
    a1.sort();
    cout<<"Array After Sorting "<<endl;
    a1.display();
}
