#include <iostream>
using namespace std;
int main()
{
  float c;
  float p;
  float t;
  cout<<"Calificacion del examen "<<endl; cin>>c;
  cout<<"Calificacion de las tareas "<<endl; cin>>t;
  cout<<"Calificacion de la participacion "<<endl; cin>>p;

  {  if (c< 8)
      {
	float m=8; 
         c=c*.7; t=t*.15; p=p*.15; m=t+p+c;
      cout << c << " " << t <<" " << p << endl;
      cout<<"Tu calificacion final es "<<m <<endl;
}
 } 
 {if ((c>=8) || (p==0) || (t==0)) 
  cout<<"Tu calificacion final es "<<c<<endl;
 }
 {if ((c>=8) || (p!=0) || (t!=0))
 {float m=8; 
         c=c*.7; t=t*.15; p=p*.15; m=t+p+c;
      cout << c << " " << t <<" " << p << endl;
      cout<<"Tu calificacion final es "<<m <<endl;
 }
 }
 
 return 0;
}
