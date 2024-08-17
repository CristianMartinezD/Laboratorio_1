#include <iostream>

using namespace std;

/*
    EJECICIO No. 1
*/
void ejercicio_1(){
    int A,B;
    cout<<"\nEscribe un numero entero: "; cin>>A;
    cout<<"\nEscribe otro numero entero: "; cin>>B;
    cout<<"\n\nEl residuo de la division "<<A<<"/"<<B<<" es: "<<A%B;
}
/*##########FIN##########*/


/*
    EJECICIO No. 2
*/
void ejercicio_2(){
    int A;
    cout<<"\nEscribe un numero entero: "; cin>>A;
    if (A%2 == 0) {cout<<endl<<A<<" Es par";}
    else {cout<<endl<<endl<<A<<" Es impar";}
}
/*##########FIN##########*/


/*
    EJECICIO No. 3
*/
void ejercicio_3(){
    int A,B,Mayor;
    cout<<"\nEscribe un numero entero: "; cin>>A;
    cout<<"\nEscribe otro numero entero: "; cin>>B;
    Mayor = (A > B) ? A:B;
    cout<<"\n\nEl mayor es "<<Mayor;
}
/*##########FIN##########*/


/*
    EJECICIO No. 4
*/
void ejercicio_4(){
    int A,B,menor;
    cout<<"\nEscribe un numero entero: "; cin>>A;
    cout<<"\nEscribe otro numero entero: "; cin>>B;
    menor = (A < B) ? A:B;
    cout<<"\n\nEl menor es "<<menor;
}
/*##########FIN##########*/


/*
    EJECICIO No. 5
*/
void ejercicio_5(){
    int A,B;
    cout<<"\nEscribe un numero entero: "; cin>>A;
    cout<<"\nEscribe otro numero entero: "; cin>>B;
    float residuo = A%B;
    if (residuo/B >= 0.5){cout<<endl<<A<<"/"<<B<<" = "<<(A/B)+1;}
    else {cout<<endl<<A<<"/"<<B<<" = "<<A/B;}
}
/*##########FIN##########*/


/*
    EJECICIO No. 6
*/
void ejercicio_6(){
    int A,B;
    cout<<"\nEscribe un numero entero: "; cin>>A;
    cout<<"\nEscribe otro numero entero: "; cin>>B;

    bool B_es_negativo = false;
    if (B < 0){ B = B*(-1); B_es_negativo = true;}

    if (B == 0) {cout<<endl<<A<<"^"<<B<<" = "<<1;}
    else{
        long long int resultado = A;
        for (int var = 1; var < B; ++var) {
            resultado *= A;
        }
        if(B_es_negativo == false)cout<<endl<<A<<"^"<<B<<" = "<<resultado;
        else {float uno = 1; float resul = uno/resultado; cout<<endl<<A<<"^-"<<B<<" = "<<resul;}
    }
}
/*##########FIN##########*/


/*
    EJECICIO No. 7
*/
void ejercicio_7(){
    int N;
    cout<<"\nEscribe un numero entero: "; cin>>N;

    bool A_es_negativo = false;
    if (N < 0) {A_es_negativo = true; N = -1*N;}

    int suma = 0;
    for (int var = 1; var <= N; ++var) {
        suma += var;
    }
    if (A_es_negativo == true) {cout<<"\nLa sumatoria desde 0 hasta -"<<N<<" es -"<<suma;}
    else cout<<"\nLa sumatoria desde 0 hasta "<<N<<" es "<<suma;
}
/*##########FIN##########*/


/*
    EJECICIO No. 8
*/
void ejercicio_8(){
    int N;
    cout<<"\nEscribe un numero entero positivo: "; cin>>N;

    int long long resultado = 1;
    for (int var = 1; var <= N; ++var) {
        resultado *= var;
    }
    cout<<"\n"<<N<<"!: "<<resultado;
}
/*##########FIN##########*/


/*
    EJECICIO No. 9
*/
void ejercicio_9(){
    int r; float pi = 3.1416;
    cout<<"\nEscribe un numero entero positivo: "; cin>>r;

    cout<<"\n\nPerimetro: "<<2*pi*r;
    cout<<"\nArea: "<<pi*r*r;
}
/*##########FIN##########*/


/*
    EJECICIO No. 10
*/
void ejercicio_10(){
    int N;
    cout<<"\nEscribe un numero mayor que 0: "; cin>>N;
    cout<<"\nMultiplos de "<<N<<" menores que 100:\n";

    int i = 1;
    while (N*i < 100) {
        cout<<N*i<<endl;
        i++;
    }
}
/*##########FIN##########*/



int main()
{
    //int opcion = 0; Para la implementación de un switch.

    ejercicio_10();

    return 0;
}
