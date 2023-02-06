#include <iostream>

using namespace std;

double menu(double resultado);

double suma(double num1);
double resta(double num1);
double multiplicacion(double num1);
double division(double num1);

double selector(double num1,double resultado);

double potencia(double base);

int main()
{
    double resultado=0;//Es un valor constante, donde se acumula todos los resultados ___PARAMETRO___

    int i=0;

    while(i<5)
    {
        resultado=menu(resultado);
        i++;
    }

    return 0;
}

double menu(double resultado)
{
    system("CLS");
    double num1=0;

    if(resultado==0)
    {
        cout<<"ingrese un numero\n";
        cin>>num1;
    }

    resultado= selector(num1,resultado);


    cout<<resultado<<endl;
    system("pause");

    return resultado;
}

double selector(double num1,double resultado)
{
    int opt=0;

    cout<<"1-suma_ 2-resta_ 3-Multiplicacion_ 4-Potencia_ 5-DIVISION "<<endl;
    cin>>opt;

    switch(opt)
    {
    case 1:
        if(resultado==0)
        {
            return suma(num1);
        }
        else
        {
            return suma(resultado);
        }
        break;
    case 2:
        if(resultado==0)
        {
            return resta(num1);
        }
        else
        {
            return resta(resultado);
        }
        break;
    case 3:
        if(resultado==0)
        {
            return multiplicacion(num1);
        }
        else
        {
            return multiplicacion(resultado);
        }
        break;
    case 4:
        if(resultado==0)
        {
            return potencia(num1);
        }
        else
        {
            return potencia(resultado);
        }
        break;
     case 5:
        if(resultado==0)
        {
            return division(num1);
        }
        else
        {
            return division(resultado);
        }
        break;
    }
}

double suma(double num1)
{
    int num2=0;
    cout<<"ingrese un numero\n";
    cin>>num2;
    return num1+num2;
}

double resta(double num1)
{
    int num2=0;
    cout<<"ingrese un numero\n";
    cin>>num2;
    return num1-num2;
}
double multiplicacion(double num1)
{
    int num2=0;
    cout<<"ingrese un numero\n";
    cin>>num2;
    return num1*num2;
}

double potencia(double base)
{
    int num2=0;
    double exponente=base;
    cout<<"ingrese un numero\n";
    cin>>num2;

    while(num2>1)
    {
        base=base*exponente;
        num2--;
    }

    return base;
}
double division(double num1)
{
    int num2=0;
    cout<<"ingrese un numero\n";
    cin>>num2;
    return num1/num2;
}
