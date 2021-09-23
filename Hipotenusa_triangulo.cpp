#include<iostream>
#include<math.h>

using namespace std;
int main ()
{
	int co, ca;
	float h;
	
	cout<<"Ingrese el Cateto Opuesto ";
	     cin>>co;
	cout<<"Ingrese el Cateto Adyacente ";
         cin>>ca;
         
    h = sqrt (pow(co,2)+pow(ca,2));
    cout<<"La hipotenusa es: ";
    cout<<h;
    
    return 0;
}
