#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout << "giai phuong trinh bac 2 : a*x2 + b*x + c = 0" << endl;
    float a,b,c;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
            {
            cout << "pt co vo so nghiem";
            }
            else
            {
                cout << "pt vo nghiem";
            }
          
        }
        else
            {
                cout << "pt co nghiem duy nhat x= " << -c/b ;
            }
    }
    
     else
            {
                float delta = b*b - 4*a*c;
                if(delta<0)
                {
                    cout << "pt vo nghiem";
                }
                else if(delta==0)
                {
                    cout << "pt co nghiem duy nhat x=" << -b/(2*a);
                }
                else
                {
                    cout << "pt co 2 nghiem phan biet x1 = "  << (-b+sqrt(delta)/(2*a))<< " x2 =" << (-b-sqrt(delta)/(2*a));
                    
                }
            }   
             
            return 0;
}