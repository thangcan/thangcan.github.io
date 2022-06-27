#include <iostream>

using namespace std;

int main()
{
    cout<<"tinh trung binh cac so chia het cho 2"<<endl;
    int min,max;
    cout<<"min=";
    cin>>min;
    cout<<endl<<"max=";
    cin>>max;
    int i=min;
    int tong=0;
    int count=0;// bien dem
    while(i%2==0)//chia cho 2 du 0
    {
        if(i<=max)
        {
            tong=tong+i;//cong don vao bien tong
            count++;
        }
        i++;
    }    
        float tb=tong/count;
        cout<<"trung binh la : "<<tb<<endl;
        

    return 0;
}

