#include <iostream>
using namespace std;

int main()
{
    /* code */
    int unit,unit50,unit100,unti1002,unit250;;
    double tot;

    cout<<"Enter the electricity unit charge : ";
    cin>>unit;
    if(unit<50){
        tot = unit*0.50;
    }
    else if(unit>50 && unit<150){
        tot = 25+((unit-50)*0.75);
    }
    else if(unit>150 && unit<250){
        tot = 100+((unit-150)*1.20);
    }
    else if(unit>250){
        tot = 250+((unit-250)*1.50);
    }

    tot = tot+(tot*0.20);

    cout<<"The total electricity bill you have is "<<tot<<endl;
    return 0;
}