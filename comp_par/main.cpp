#include <iostream>
#include "complex.h"

int main(int argc, char** argv){

    if (argc < 13 ){
        cout << "Faltaron parámetros." << endl;
        return 1;
    }

    Complex vecComplex[6];
    double  vecTheta[6];
	double aux;
   
   
    for(int i =0; i < 6; i++){
        aux = atof( argv[2*i+1] );
	vecComplex[i].real( aux );
        aux = atof( argv[2*i+2] );
	vecComplex[i].imag( aux );
       
        vecTheta[i] = vecComplex[i].angle();
    }
   
    bool cambio;
    double auxT;
    Complex auxC;
    do{
        cambio = false;
        for(int i = 0; i < 5; i++){
            if(vecTheta[i] > vecTheta[i+1] ){
                cambio = true;
                auxT = vecTheta[i];
                vecTheta[i] = vecTheta[i+1];
                vecTheta[i+1] = auxT;
               
                auxC = vecComplex[i];
                vecComplex[i] = vecComplex[i+1];
                vecComplex[i+1] = auxC;
            }
        }
    }while( cambio == true );
   
    // Una vez ordenado los imprimo
   
    for( int i = 0; i < 6; i++)
        cout << vecTheta[i] << ", ";
       
    cout << endl;
   
    for( int i = 0; i < 6; i++)
        cout << vecComplex[i].real() << " + " << vecComplex[i].imag() << "j\n";

    return 0;
}
