#include <iostream>
#include "complex.h"
#include <fstream>
#include <vector>

int main(int argc, char** argv){

    if (argc < 2 ){
        cout << "Olvidó indicar la dirección del archivo que contiene la información." << endl;
        return 1;
    }

    vector<Complex> vecComplex;
    Complex auxC;
    double aux;
    
    cout << "Archivo a procesar: " << argv[1] << endl;

    ifstream archivo;
    archivo.open ( argv[1] );
    if ( archivo.is_open() ){
        cout << "archivo abierto" << endl;
        archivo >> aux;
        while( !archivo.eof() ){
            auxC.real( aux );
            archivo >> aux;
            auxC.imag( aux );
            vecComplex.push_back( auxC );
            archivo >> aux;
        }
        archivo.close();
        cout << "Archivo cerrado.\n"; 
    }
   
    double  vecTheta[ vecComplex.size() ];
   
    for( int i = 0; i < vecComplex.size(); i++){
        vecTheta[i] = vecComplex[i].angle();
    }
    cout << "Ángulos calculados\n";
   
    bool cambio;
    double auxT;
    do{
        cambio = false;
        for(int i = 0; i < vecComplex.size() - 1; i++){
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
   
    // Una vez ordenado los guardo en un archivo de salida
    ofstream archivo_salida;
    archivo_salida.open ( "Output.txt" );

    if( archivo_salida.is_open() ){
        archivo_salida << "#Este archivo contiene los ángulos y la lista ordenada de complejos\n";

        for( int i = 0; i < vecComplex.size(); i++)
            archivo_salida << vecTheta[i] << ", ";
       
        archivo_salida << endl;
   
        for( int i = 0; i < vecComplex.size(); i++)
            archivo_salida << vecComplex[i].real() << " + " << vecComplex[i].imag() << "j\n";
        
        archivo_salida.close();
    }
    return 0;
}

