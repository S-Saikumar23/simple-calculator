#include<iostream>
using namespace std;
class calculator
{
    protected :
        float a,b;
    public :
        calculator()
        {
            cout<<"\nEnter any two numbers :";
            cin>>a>>b;
        }
        void addition()
        {
            cout<<"\nThe Addition of "<<a<<" and "<<b<<" is "<<a+b;
        }
        void subtraction()
        {
            cout<<"\nThe Subtraction of "<<a<<" and "<<b<<" is "<<a-b;
        }
        void multiplication()
        {
            cout<<"\nThe Multiplication of "<<a<<" and "<<b<<" is "<<a*b;
        }
        void division()
        {
            cout<<"\nThe Division of "<<a<<" and "<<b<<" is "<<a/b;
        }
};

int main()
{
    int opt,rpt=0;
    cout<<"\n__________SIMPLE CALCULATOR____________";
    do
    {    
        calculator calc;
        cout<<"\nChoose a operation to perform :";
        cout<<"\n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division"<<endl;
        cin>>opt;
        switch(opt)
        {
            case 1:
                calc.addition();
                break;
            case 2:
                calc.subtraction();
                break;
            case 3:
                calc.multiplication();
                break;
            case 4:
                calc.division();
                break;
            default:
                cout<<"\nWrong choice";        
        } 
        cout<<"\nDo you Want To Continue Again (Press 1):"<<endl;
        cin>>rpt;
    }while(rpt==1);
    return 0;
