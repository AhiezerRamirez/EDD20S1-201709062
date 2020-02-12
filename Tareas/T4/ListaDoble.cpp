#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Nodo
{
public:
    char letra;
    Nodo *siguiente;
    Nodo *anterior;
    Nodo(char letra) {
        this->letra=letra;
        this->siguiente=NULL;
        this->anterior=NULL;
    }
};

class ListaDoble
{
private:
    Nodo *primero;
    Nodo *ultimo;
    int size;
public:
    ListaDoble(){
    this->primero=NULL;
    this->ultimo=NULL;
    this->size=0;
    }
    
    void insertarInicio(char caracter){
        Nodo *n=new Nodo(caracter);
        if(primero==NULL){
            primero=n;
            ultimo=n;
        }else{
            primero->anterior=n;
            n->siguiente=primero;
            primero=n;
        }
        size++;
    }
    
    void borrarFinal(){
        if(primero->siguiente==NULL){
            delete primero;
            primero=NULL;
            ultimo=NULL;
            size--;
        }else if(primero!=NULL){
            ultimo=ultimo->anterior;
            delete ultimo->siguiente;
            ultimo->siguiente=NULL;
            size--;
        }
    }
    
    Nodo buscar(std::string palabra);
    Nodo *temp=primero;
    Nodo *retorno;
    int lenth=palabra.length();
    while (temp!=NULL) {
        if(temp->letra==palabra[0]){
            for (int var = 1; var < lenth; ++var) {
                if(temp->siguiente==NULL){
                    return NULL;
                }
                temp=temp->siguiente;
                if(temp==NULL){
                    return NULL;
                }else{
                    if(temp->letra==palabra[var]){
                        if(var==lenth-1){
                            if(temp->letra==palabra[lenth-1]){
                                return retorno;
                            }
                        }
                    }else{
                        return NULL;
                    }
                }
        }
        if(temp!=NULL)
        temp=temp->siguiente;
    }
    return indices
};

int main()
{
    cout<<"Hello World";

    return 0;
}