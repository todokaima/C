#include <iostream>
using namespace std;
#include "dog.h"


void dog::init(int in_mood)
{
    mood = in_mood;
}

void dog::bark()
{
    cout<<"bark"<<endl;
}

void dog::report_mood()
{
    if (mood>10)
        cout<<"ocol";
    else
        cout<<"bad";
}
