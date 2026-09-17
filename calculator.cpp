#include<iostream>
#include<math.h>
using namespace std;
int ch=3;
int c;
int a=5;
int b=7;
int main(){
    cout<<"1.ADDITION"<<"\n";
    cout<<"subtraction"<<"\n";
    cout<<"multiplication"<<"\n";
    cout<<"divison"<<"\n";
    cout<<"power"<<"\n";
    switch(ch)
    {
        case 1:
        {
            c=a+b;
            cout<<"addition is"<<c;
            break;
        }
        case 2:
        {
            c=a-b;
            cout<<"subtraction is"<<c;
            break;
        }
        case 3:
        {
            c=a*b;
            cout<<"product is"<<c;
            break;

        }
        case 4:
        {
            c=a/b;
            cout<<"divison is"<<c;
            break;
        }
        case 5:
        {
            c=pow(a,b);
            cout<<"a raised to b is"<<c;
            break;
        }
        default:
        {
            cout<<"invalid option"<<"\n";
            cout<<"choose a number between 1-5";
            break;
        }

        
    }
    

}
