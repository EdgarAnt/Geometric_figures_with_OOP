#include<iostream>
#include<cstdlib>
#include<Math.h>

using namespace std;


class Triangulo{
	private:
		double base;
		double altura;
		double area;
	public:
		void setBase(double);
		double getBase();
		void setAltura(double);
        double getAltura();
		void CalcularArea();
		double getArea();
};

void Triangulo::setBase(double base){
	this->base=base;
}
double Triangulo::getBase(){
	return this-> base;
}
double Triangulo::getAltura(){
	this->altura=altura;
}
void Triangulo::setAltura(double altura){
	this-> altura=altura;
}
void Triangulo::CalcularArea(){
	this->area=(this->base*this->altura)/2;
}
double Triangulo::getArea(){
	return this->area;
}


class Cuadrado{
	private:
		double lado;
		double area;
	public:
		void setLado(double);
		double getLado();
		void CalcularArea();
		double getArea();
};

void Cuadrado::setLado(double lado){
	this->lado=lado;
}
double Cuadrado::getLado(){
	return this->lado;
}
void Cuadrado::CalcularArea(){
	this->area=pow(this->lado,2);
}
double Cuadrado::getArea(){
	return this->area;
}

class Rectangulo{
	private:
		double base;
		double altura;
		double area;
	public:
		void setBase(double);
		double getBase();
		void setAltura(double);
		double getAltura();
		void CalcularArea();
		double getArea();
};

void Rectangulo::setBase(double base){
	this->base=base;
}
double Rectangulo::getBase(){
	return this-> base;
}
double Rectangulo::getAltura(){
	this->altura=altura;
}
void Rectangulo::setAltura(double altura){
	this-> altura=altura;
}
void Rectangulo::CalcularArea(){
	this->area=(this->base*this->altura);
}
double Rectangulo::getArea(){
	return this->area;
}



void menu(){

    int opc;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"|                                     Menu                                     |"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"1) Triangulo"<<endl;
	cout<<"2) Cuadrado"<<endl;
	cout<<"3) Rectuangulo"<<endl;
	cout<<"4) Salir"<<endl;
	cout<<"opcion: ";
	cin>>opc;

	switch(opc)
	{
	    case 1:{
	        double base=0,altura=0;
        Triangulo ob;
        system("cls");
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"|                                  Triangulo                                   |"<<endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"Ingrese la Base del Triangulo: "; cin>>base;
        cout<<endl<<"Ingrese la Altura del Triangulo: "; cin>>altura;
        ob.setBase(base);
        ob.setAltura(altura);
        ob.CalcularArea();
        cout<<endl<<"El Area del Triangulo es: "<<ob.getArea();

        system("pause>>cls");
        }
	break;

        case 2:{
        double lado=0;
        Cuadrado ob;

        system("cls");
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"|                                   Cuadrado                                   |"<<endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"Ingrese El lado del cuadrado: "; cin>>lado;
        ob.setLado(lado);
        ob.CalcularArea();

        cout<<endl<<"El Area del Cuadrado es: "<<ob.getArea();
        }
        break;

        case 3:
            {
        double base=0,altura=0;
        Rectangulo ob;
        system("cls");
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"|                                  Rectangulo                                 |"<<endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"Ingrese la Base del Rectangulo: "; cin>>base;
        cout<<"Ingrese la Altura del Rectangulo: "; cin>>altura;
        ob.setBase(base);
        ob.setAltura(altura);
        ob.CalcularArea();
        cout<<endl<<"El Area del Triangulo es: "<<ob.getArea();

        system("pause>>cls");
        }
        break;
         case 4: cout<<endl<<"Presione (0) para salir"<<endl;
         break;

         default: cout<<"Opcion invalida"<<endl;
}
            }

int opc=0;
int main(int argc, char** argv) {



do{
    system("cls");
menu();
cout<<endl<<"Continuar 1[si] 0 [no] "<<endl;
        cin>>opc;
}while(opc!=0);

system("pause>>cls");
return 0;
}

