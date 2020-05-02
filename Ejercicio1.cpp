#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <istream>


using namespace std;

int main(int argc, char** argv) {
        string ruta=argv[1];
        ofstream archivo_2("datos_fin.txt");
        ifstream archivo_1(ruta);
        int promedio;
        string rut,a1,a2,a3,a4,a5;
        while (!archivo_1.eof()){
            for (int i=0;i<6;i++){
                getline(archivo_1,rut,';');
                getline(archivo_1,a1,';');
                getline(archivo_1,a2,';');
                getline(archivo_1,a3,';');
                getline(archivo_1,a4,';');
                getline(archivo_1,a5,'\n');
                promedio= ((stoi(a1)+stoi(a2)+stoi(a3)+stoi(a4)+stoi(a5))/5);
                if (rut!=""){
                    archivo_2<<rut<<";"<<promedio<<endl;
                }
            }
        }
        archivo_1.close();
        archivo_2.close();
        return 0;
}