#include <iostream>

using namespace std;

class Cow
{
    public:
        int weight;
        void express()
        {
            if (hunger>10)
                cout<<"mmmmmmm";
        }
        int set_hunger(int h)
        {
            hunger = h;
        } 
    private:
        int hunger;
};

class dog
{
    public:
    
    void init(int in_mood)
    {
        mood = in_mood;
    }
    
    void bark()
    {
        cout<<"bark"<<endl;
    }
    
    void express_mood()
    {
        if (mood>10)
            cout<<"cool";
        else
            cout<<"bad";
            
    }
    private:
        int mood;
};
int main()
{
    Cow molly;
    molly.weight = 500;
    molly.set_hunger(49);
    molly.express();
    
    dog piko;
    piko.init(6);
    
    cout<<"piko hay?"<<endl;
    piko.express_mood();
    piko.bark();
    piko.bark();
    

    return 0;
}
