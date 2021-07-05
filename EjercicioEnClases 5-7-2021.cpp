#include <iostream>
using namespace std;

/*  1) Una funci�n recibe 3 n�meros enteros. La funci�n debe devolver el mayor de ellos. 
No debe utilizar condiciones compuestas (AND, ni OR)*/
int mayor(int a, int b, int c) {
    int d;
    if (a > b)
        if (a > c)
            d = a;
        else
            d = c;
    else if (b > c)
        d = b;
    else
        d = c;
    return d;
}

/* 2) Una funci�n recibe como par�metro un n�mero entero, que representa el mes del a�o. 
La funci�n debe devolver el nombre del mes. Por ejemplo si el mes es 2 debe devolver "febrero". */
string nmes(int a){
    string b="";
    if(a==1)
        b="Enero";
    else if(a==2)
        b="Febrero";
    else if(a==3)
        b="Marzo";
    else if(a==4)
        b="Abril";
    else if(a==5)
        b="Mayo";
    else if(a==6)
        b="Junio";
    else if(a==7)
        b="Julio";
    else if(a==8)
        b="Agosto";
    else if(a==9)
        b="Septiembre";
    else if(a==10)
        b="Octubre";
    else if(a==11)
        b="Noviembre";
    else if(a==12)
        b="Diciembre";
    else
        b="Mes fuera de rango";
    return b;
}

/* 3) Dise�e la funci�n que genere un rect�ngulo.  La funci�n debe recibir un entero que indica 
el n�mero de filas del rect�ngulo; y un car�cter que indica el relleno del rect�ngulo. 
Versi�n con string*/
string cua(int a, string b){
    string aux="";
    for(int x=1;x<=a;x++) {
        for (int c = 1; c <= 10; c++)
            aux = aux + b;
        aux = aux + "\n";
    }
    return aux;
}

/* 3) Dise�e la funci�n que genere un rect�ngulo.  La funci�n debe recibir un entero que indica 
el n�mero de filas del rect�ngulo; y un car�cter que indica el relleno del rect�ngulo. 
Versi�n char*/
void cua2(int a, char b){
    for(int c=1;c<=a;c++)
    {
        for(int d=1; d<=10;d++)
            cout<<b;
        cout<<endl;
    }
}
/* Funci�n para saber si es primo*/
bool esPrimo (int num){
    int cont=2;
    bool flat=true;
    while(cont <= num /2 && flat==true){
        if(num % cont == 0)
            flat=false;
        cont++;
    }
    return flat;
}

/* 4) Dise�e una funci�n que imprima los primeros n n�meros primos. El par�metro n indica el 
total de primos a imprimir. */
void imprimeprimos(int a){
    int b=1; int c=1;
    while(b<=a)
    {
        c++;
        if(esPrimo(c))
        {
            cout<<" "<< c;
            b++;
        }
    }
}

/* 5) Dise�e la funci�n que devuelva la sumatoria de los n primeros n�meros primos. 
El par�metro n indica el total de primos a sumar. */
int sumaprimo(int a){
    int b=1; int c=1; int d=0;
    while(b<=a)
    {
        c++;
        if(esPrimo(c))
        {
            d+=c;b++;
        }
    }
    return d;
}

/* 6) Dise�e la funci�n que recibe un entero que representa el mes del a�o
 La funci�n debe retornar el d�a m�ximo que trae ese mes. Por ejemplo, si es 7 debe devolver 31.
 Ojo con el mes de Febrero*/
int mes(int nmes, int anio){
	int lim=0;
	if(nmes==1 || nmes==3 || nmes==5 || nmes==7 || nmes==8 || nmes==10 || nmes==12)
		lim=31;
		else if(nmes==2){
			if (anio % 4 == 0)
				lim=29;
				else
					lim=28;
				}				
		else
			lim=30;
	return lim;
}

int main() {
    int a, b;
    cout << endl << "el mayor de 20, 10, 8 es: " << mayor(20, 10, 8);
    cout << endl << "el mayor de 20, 30, 21 es: " << mayor(20, 30, 21);
    cout << endl << "el mayor de 20, 30, 210 es: " << mayor(20,30,210);
    cout << endl << "el mes 5 corresponde a " << nmes(5);
    cout << endl << "el mes 1 corresponde a " << nmes(1);
    cout << endl << "el mes 12 corresponde a " << nmes(12);
    cout << endl << "el mes 15 corresponde a " << nmes(15);
    cout<<endl;
    cout<<cua(5,"+")<<endl;
    cua2(5,'c');
    cout<<endl<<"ingrese la cantidad de numeros primos que desea imprimir"<<endl;
    cin>>a;
    imprimeprimos(a);
    cout<<endl<<"ingrese la cantidad de numeros primos que desea sumar"<<endl;
    cin>>a;
    cout<<endl<<"la suma es: "<<sumaprimo(a)<<endl;
    cout << endl << "Ingrese el mes en numero entero" << endl;
    cin >> a;
    cout << "Es anio bisiesto? escriba 1 para si, escriba 2 para no" << endl;
    cin >> b;
    cout << mes(a, b);
}
