#include <iostream>
using namespace std;

 int Array[4]={0};

void modifying()
{
    for(int i=0;i<4;i++)
    {
        Array[i]=(Array[i]+7)%10;
    }
}

void swap()
{
    int temp;
    temp=Array[2];
    Array[2]=Array[0];
    Array[0]=temp;
    temp=Array[1];
    Array[1]=Array[3];
    Array[3]=temp;
}

int main()

{

   
    cout<<"Please inter a 4 digit number: ";
    for(int i=0;i<4;i++)
    {
        cin>>Array[i];
        
    }
    cout<<endl;
    cout<<endl;

    for(int i=0;i<4;i++)
    {
        cout<<Array[i]<<" ";
    }
   
    
    modifying();
    swap();
    cout<<endl;
    

    
    for(int i=0;i<4;i++)
    {
     cout<<Array[i]<<" ";
    }
    cout<<endl;
    cout<<endl;

    
}
