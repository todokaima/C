#include <iostream>
using namespace std;

class dummy {
    public:
        dummy();
        dummy(int in_x);
        void set_x(int in_x);
        int get_x() const;
        ῀dummy();
    private:
        int x;
};
int main()
{
    dummy ob1(0), ob2;

    return 0;
}

dummy::dummy()
{
    x = 0;
}

dummy::dummy(int in_x)
{
    x = in_x;
}

void dummy::set_x(int in_x)
{
    x = in_x;
}

int dummy::get_x() const
{
    return x;
}

dummy::῀dummy()
{
    cout<<"Destructor"<<x<<endl;
    
}


