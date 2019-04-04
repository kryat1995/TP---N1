#ifndef FUNCCUENTAS_H_INCLUDED
#define FUNCCUENTAS_H_INCLUDED
///CARGAR CUENTAS
struct cuentas CargarCuentas(int pos){
    cuentas reg;
    int cant=pos+1;
    cout<<"ID de Cuenta: "<<cant<<endl;;
    reg.IDCuenta=pos;
    cout<<"Descripcion: ";
    cin.ignore();
    cin.getline(reg.descripcion, 50);
    cout<<"Saldo: ";
    cin>>reg.saldo;
    cout<<endl;
    return reg;
}


#endif // FUNCCUENTAS_H_INCLUDED
