#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int stop;
    float T;
    float F;
    float E;
    float Q; 
    cout<<"Welcome to this APP"<<endl;
    cout<<"True: ";
    cin>> T ;
    cout<<"False: ";
    cin>> F ;
    cout<<"Empety: ";
    cin>> E ;
    Q = T + F + E ;
    cout<<"Your Percentage: ";
    cout<<(((T*3)-F)/(Q*3))*100<<endl;
    
    cin>>stop;
    return 0 ;
}