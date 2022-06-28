#include <iostream>
include <math.h>
using namespace std;
int main()
{
    cout << "giải pt bậc 2 : a*x2 + b*x + c = 0" << "\n";
    int a,b,c;
    cout << "a=";
    cin >> a
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    if(a==0)
    {
        if(b=0)
        {
            if(c=0)
            {
            cout << "pt có vsn";
            }
            else
            {
                cout << "pt vô nghiệm";
            }
          
        }
          else
            {
                cout << "pt có nghiệm duy nhất" << "x=" << -b/a << "/n";
            }
    }
    
     else
            {
                float delta = b*b - 4*a*c;
                if(delta<0)
                {
                    cout << "pt vô nghiệm";
                }
                else if(delta==o)
                {
                    cout << "pt có nghiệm duy nhất x=" << -b/(2*a)<< "/n";
                }
                else
                {
                    cout << "pt có 2 nghiệm phân biệt x1 = "<< (-b+sqrt(delta)/(2*a))<<"/n";
                    cout << "x2 =" << (-b-sqrt(delta)/(2*a))<<"/n";
                }
            }   
             
            return 0;
}