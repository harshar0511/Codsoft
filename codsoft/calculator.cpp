#include<bits/stdc++.h>
using namespace std;
class calci{
    double n1,n2;
    char op;
    public:
    
    void get()
    {
        cout<<"ENTER TWO NUMBERS "<<endl;
        cin>>n1>>n2;

    }
    int operation()
    {
        cout<<" +  FOR ADDITION"<<endl;
        cout<<" -  FOR SUBTRACTION"<<endl;
        cout<<" *  FOR MULTIPLICATION"<<endl;
        cout<<" /  FOR DIVIITION"<<endl;
        cout<<" ! FOR EXIT"<<endl;
        cin>>op;
        switch (op)
        {
        case ('+'):
            cout<<n1+n2<<endl;
            return 1;
            break;
        case ('-'):
            cout<<n1-n2<<endl;
            return 1;
            break;
        case ('*'):
            cout<<n1*n2<<endl;
            return 1;
            break;
        case ('/'):
            cout<<n1/n2<<endl;
            break;
        case ('!'):
            return 0;
            break;
        default:
            cout<<"WRONG INPUT\n";
            return 1;

            break;
        }


    }
    
};
int main()
{
    calci c;
    do{
        c.get();
    }while(c.operation());
    return 0;
}