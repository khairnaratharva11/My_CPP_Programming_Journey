#include <iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        static int x;
        
        Demo()
        {
            this-> i = 0;
            this-> j = 0;
        }

        Demo(int a, int b)
        {
            this-> i = 0;
            this-> j = 0;
        }
        void fun()
        {
            cout<<"Inside Gun\n";

        }

        static void Gun()
        {
             cout<<"Inside Gun\n";
        
        }
};

int Demo :: x = 11;

int main(){
    cout<<"Value of x if : "<<Demo::x<<"\n";
    Demo :: Gun();

    return 0;
}