#include <iostream>
#include <string>

using namespace std;
class Estudiante{
    public:
    int carnet;
    string nombre;
    Estudiante *siguiente;
    
    Estudiante(int carnet,string nombre){
        this->carnet=carnet;
        this->nombre=nombre;
        this->siguiente=NULL;
    }
    
};

class ListaSimple{
    public:
    Estudiante *inicio;
    Estudiante *fin;
    ListaSimple(){
        inicio=NULL;
        fin=NULL;
    }
    
    void insertar(int carnet,string nombre){
        Estudiante *nuevo= new Estudiante(carnet,nombre);
        if(inicio==NULL){
            inicio=nuevo;
            fin=nuevo;
        }else{
            Estudiante *auxiliar=inicio;
            inicio=nuevo;
            inicio->siguiente=auxiliar;
        }
        
    }
    
    void eliminar(int carnet){
        Estudiante *auxiliar=inicio;
        while(auxiliar!=NULL){
            if(auxiliar->carnet==carnet){
                break;
            }
            auxiliar=auxiliar->siguiente;
        }
        auxiliar->siguiente=NULL;
        fin=auxiliar;
    }
    
    Estudiante* buscar(int carnet){
        Estudiante *auxiliar=inicio;
        while(auxiliar!=NULL){
            if(auxiliar->carnet==carnet){
                return auxiliar;
            }
            auxiliar=auxiliar->siguiente;
        }
        cout<<"no se encotró nada, retornando NULL";
        return NULL;
    }
};

int main()
{
    cout<<"Hello World";

    return 0;
}