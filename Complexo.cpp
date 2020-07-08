#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
using namespace std;


class Complexo
{
    
	public:
    float real, imag, modulo, angulo;
    
    public:
    void SetRetangular(float r, float i) // forma retangular
    {
        this->real = r;
        this->imag = i;
        this->modulo = sqrt(pow(r,2)+pow(i,2)); // calcula o modulo usando regra de pitagoras
        this->angulo = (atan(i/r))*57.29;  // calcula o angulo e converte de radianos para graus (180/pi)
        if(r<0)angulo = 180 + angulo; // ajusta o quadrante
        
        
        
        //imprime resultado
		cout << "Numero criado:\n" << 
        "Retangular:" << this->real << " +(" << this->imag << "i)\n" <<
        "Polar: " << this->modulo << " <" << this->angulo << " o" << endl << endl;
    }
    void SetPolar(float m, float a) //forma polar 
    {
        
        this->angulo = a;
        this->modulo = m;
        this->real = cos(a/57.29)*m; // calcula a parte real resultante
        this->imag = sin(a/57.29)*m; //calcula a parte imaginaria resultante
         //imprime resultado
        cout << "Numero criado\n" <<
        "Polar: " << this->modulo << " L" << this->angulo << " o\n" << 
        "Retangular:" << this->real << " +(" << this->imag << "i)" <<  endl << endl;
    }
    void GetRetangular() // pega o valor retangular do numero
    {
    	cout << "Retangular:" << this->real << " +(" << this->imag << "i)" <<  endl << endl;
	}
	void GetPolar()// pega o valor polar do numero
	{
		cout << "Polar: " << this->modulo << " <" << this->angulo << " o" << endl << endl;
	}
    
   
    



 void Somar(Complexo  * num1,Complexo * num2)//funcãoo que soma dois objetos Complexos
    {
        float _real = num1->real + num2->real; // calcula a parte real resultante
        float _imag = num1->imag + num2->imag; //calcula a parte imaginaria resultante
        float _angulo = (atan(_imag/_real))*57.29; // calcula o angulo e  converte de radianos para graus
        if(_real<0)_angulo = 180 + _angulo; // ajusta o quadrante
        float _modulo = sqrt(pow(_real,2)+pow(_imag,2));// calcula o modulo usando regra de pitagoras
         //imprime resultado
		cout << "O resultado da soma: \n" 
        <<"Retangular:" << _real << " +(" << _imag << "i)\n"
        << "Polar: " << _modulo << " <" << _angulo << " o" << endl << endl;
    }
    
 
void Subtrair(Complexo  * num1,Complexo * num2) //funcao que subtrai dois objetos Complexos
    {
        float _real = num1->real - num2->real;// calcula a parte real resultante
        float _imag = num1->imag - num2->imag;//calcula a parte imaginaria resultante
        float _angulo = (atan(_imag/_real))*57.29; // calcula o angulo e converte de radianos para graus
        if(_real<0)_angulo = 180 + _angulo; // ajusta o quadrante
        float _modulo = sqrt(pow(_real,2)+pow(_imag,2)); // calcula o modulo usando regra de pitagoras
        // imprime resultado
		cout << "O resultado da Subtracao:\n" 
        <<"Retangular:" << _real << " +(" << _imag << "i)\n"
        << "Polar: " << _modulo << " <" << _angulo << " o" << endl << endl;
    }
void Multiplicar(Complexo  * num1,Complexo * num2)//funcao que multiplica dois objetos Complexos
	{
		float _modulo = num1->modulo * num2->modulo;  // calcula ao angulo do vetor resultante
		float _angulo = num1->angulo + num2->angulo; // calcula ao angulo do vetor resultante
		float _real = cos(_angulo/57.29)*_modulo;   // converte para a forma retangular
        float _imag = sin(_angulo/57.29)*_modulo;  // converte para a forma retangular
         //imprime resultado
		cout << "O resultado da Multiplicacao:\n" 
        <<"Retangular:" << _real << " +(" << _imag << "i)\n"
        << "Polar: " << _modulo << " <" << _angulo << " o" << endl << endl;
	}
	
void Dividir(Complexo  * num1,Complexo * num2)//funcao que divide dois objetos Complexos
	{
		float _modulo = num1->modulo / num2->modulo; // calcula ao angulo do vetor resultante
		float _angulo = num1->angulo - num2->angulo;// calcula ao angulo do vetor resultante
		float _real = cos(_angulo/57.29)*_modulo;  // converte para a forma retangular
        float _imag = sin(_angulo/57.29)*_modulo; // converte para a forma retangular
         //imprime resultado
		cout << "O resultado da Divisao:\n" 
        <<"Retangular:" << _real << " +(" << _imag << "i)\n"
        << "Polar: " << _modulo << " <" << _angulo << " o" << endl << endl;
	}
void Comparar(Complexo * num1, Complexo * num2)//funcao que compara dois objetos Complexos
    {
        if(num1->real < num2->real){cout << "A parte real " << num1->real << " eh menor que a parte " << num2->real<< endl;}// compara se num1 é menor que num2
        else if(num1->real > num2->real){cout << "A parte real " << num1->real << " eh maior que a parte " << num2->real<< endl;}// compara se num1 é maior que num2
        else cout << "A parte real " << num1->real << " eh igual que a parte " << num2->real<< endl;// compara se num1 é igual que num2
        
        if(num1->imag < num2->imag){cout << "A parte real " << num1->imag << " eh menor que a parte " << num2->imag<< endl;} // compara se num1 é menor que num2
        else if(num1->imag > num2->imag){cout << "A parte real " << num1->imag << " eh maior que a parte " << num2->imag<< endl;}// compara se num1 é maior que num2
        else cout << "A parte real " << num1->imag << " eh igual que a parte " << num2->imag<< endl;// compara se num1 é igual que num2
        cout << endl;
    }
 };  
 Complexo calcula;
int main()
{
    Complexo variavel1;
    Complexo variavel2;
    
    variavel1.SetRetangular(3,2);
    variavel1.GetPolar();
    
    variavel2.SetPolar(3.60,33.69);
    variavel2.GetRetangular();
    
    
    calcula.Somar(&variavel1, &variavel2);
    calcula.Subtrair(&variavel1, &variavel2);
    calcula.Multiplicar(&variavel1, &variavel2);
    calcula.Dividir(&variavel1, &variavel2);
    calcula.Comparar(&variavel1, &variavel2);

};

