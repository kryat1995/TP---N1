#ifndef FUNCMENU_H_INCLUDED
#define FUNCMENU_H_INCLUDED
///MENU CATEGORIAS.
int MenuCategorias(){
  int choice;
    while(true){
    system("cls");
    cout<<"MENU CATEGORIAS"<<endl;
    cout<<"----------"<<endl;
    cout<<"1)NUEVA CATEGORIA."<<endl;
    cout<<"2)MODIFICAR CATEGORIA."<<endl;
    cout<<"3)LISTAR CATEGORIA POR CODIGO."<<endl;
    cout<<"4)LISTAR TODAS LAS CATEGORIAS."<<endl;
    cout<<"5)ELIMINAR CATEGORIA."<<endl;
    cout<<"----------"<<endl;
    cout<<"0)VOLVER AL MENU PRINCIPAL."<<endl;
    cout<<"-----"<<endl;
    cout<<"opcion: ";
    cin>>choice;
    system("cls");

    switch(choice){

    case 1:
      NuevaCategoria();
    ;break;

    case 2:
    ;break;

    case 3:
    ;break;

    case 4:
    ;break;

    case 5:
    ;break;

    case 0:
        return 0;
    ;break;

    default:
        cout<<"INGRESE OPCION CORRECTA.\n";
        system("pause");
    ;break;
    }
  }
}

///MENU CUENTAS
int MenuCuenta(){
  int choice;
    while(true){
    system("cls");
    cout<<"MENU CUENTAS"<<endl;
    cout<<"----------"<<endl;
    cout<<"1)NUEVA CUENTA."<<endl;
    cout<<"2)LISTAR CUENTA POR CODIGO."<<endl;
    cout<<"3)LISTAR TODAS LAS CUENTAS."<<endl;
    cout<<"----------"<<endl;
    cout<<"0)VOLVER AL MENU PRINCIPAL."<<endl;
    cout<<"-----"<<endl;
    cout<<"opcion: ";
    cin>>choice;
    system("cls");

    switch(choice){

    case 1:
      NuevaCuenta();
    ;break;

    case 2:
    ;break;

    case 3:
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


#endif // FUNCMENU_H_INCLUDED
