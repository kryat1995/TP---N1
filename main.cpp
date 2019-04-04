#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

struct categorias {
  int IDCategoria;
  char descripcion[50];
  char tipo;
  bool estado;
};
struct cuentas{
  int IDCuenta;
  char descripcion[50];
  float saldo;
};
#include "FuncCuentas.h"
#include "FuncCategorias.h"
#include "FuncArchivosCategorias.h"
#include "FuncArchivosCuentas.h"
#include "FuncMenu.h"

int main(){
      int choice;
      while(true){
      system("cls");
      cout<<"MENU PRINCIPAL"<<endl;
      cout<<"----------"<<endl;
      cout<<"1)CATEGORIAS."<<endl;
      cout<<"2)CUENTAS."<<endl;
      cout<<"----------"<<endl;
      cout<<"0)SALIR DEL PROGRAMA."<<endl;
      cout<<"-----"<<endl;
      cout<<"opcion: ";
      cin>>choice;
      system("cls");

      switch(choice){

      case 1:
        MenuCategorias();
      ;break;

      case 2:
        MenuCuenta();
      ;break;

      case 0:
          return 0
      ;break;

      default:
          cout<<"INGRESE OPCION CORRECTA.\n";
          system("pause");
      ;break;
      }
    }
}

