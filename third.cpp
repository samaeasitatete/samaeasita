#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    string name;
    char input;
    int inputuser;
    cout<<"enter your name";
    cin>>(cin,name);
    cout<<endl;
    do
    {
     srand(0);
     int variable=rand()%5+1;
     cout<<"enter any number in between range 1 to 5";
     cin>>inputuser;
     cout<<endl;
     if(inputuser==variable)
     {
        cout<<"congratulations you gussed the correct number"<<endl;
     }

     else{
        cout<<"sorry you gussed wrong number try again"<<endl;
     }
     cout<<"would you like to try again Y/N";
     cin>>input;
     cout<<endl;
    }
    while(input!='N');
    cout<<"game end"<<endl;
}     
    

