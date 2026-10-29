#include<iostream>
using namespace std;
class calculadora{
	private:
	float primero;
	float segundo;
bool comprobar(){
		return segundo!=0;
	}
	public:
		calculadora(){
			primero=0;
			segundo=0;
		}
	void setnumero(double a,double b){
		primero=a;
		segundo=b;
	}
	double getprimero(){
		return primero;
	}
	double getsegundo(){
		return segundo;
	}
	double sumar(){
		return primero+segundo;
	}
	double restar(){
		return primero-segundo;
	}
	double multiplicar(){
		return primero*segundo;
	}
	bool dividir(double &resultado){
		if(comprobar()){
			resultado=primero/segundo;
			return true;
		}
		return false;
	}
};
int main(){

calculadora c;
double a,b,resultado;
cout<<"valores de a y b: "<<endl;
cin>>a>>b;
c.setnumero(a,b);
	cout<<"el primer numero: "<<c.getprimero()<<endl;
	cout<<"el segundo  numero: "<<c.getsegundo()<<endl;
	cout<<"se imprime el resultado de sumar dos numeros : "<<c.sumar()<<endl;
	cout<<"los numeros restado: "<<c.restar()<<endl;
	cout<<"los numero multiplicados: "<<c.multiplicar()<<endl;
	if(c.dividir(resultado)==true)
		cout<<"el resusltado de la division es : "<<resultado;
	else
		cout<<" La division no tiene resultado: ";
	return 0;

}
