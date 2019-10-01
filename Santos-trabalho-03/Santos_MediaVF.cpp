#include<iostream>
using namespace std;

int main()
{
    float MVE,VC,VF;
    cout << "Inserir a Media de VE" << endl ; 
    cin >> MVE;
    while(MVE<0 || MVE>10)
    {
        cout << "Media de VE invalida" << endl;
        cout << "Inserir a Media de VE" << endl; 
        cin >> MVE; 
    }
    cout << "Inserir a nota de VC" << endl;
    cin >> VC;
    while(VC<0 || VC>10)
    {
        cout << "Nota de VC invalida" << endl;
		cout << "Inserir a nota de VC" << endl;
        cin >> VC; 
    }
    VF = (20-MVE-VC)/2;
    if(VF<=4.0)
    {
        cout << "Nota necessaria na VF = 4";
    }
    else
    {
        cout << "Nota necessaria igual a " << VF;
    }
    return 0 ;
}
