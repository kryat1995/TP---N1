#ifndef FUNCCATEGORIAS_H_INCLUDED
#define FUNCCATEGORIAS_H_INCLUDED

///CARGAR CATEGORIA
struct categorias CargarCategoria(int pos){
    categorias reg;
    int cant=pos+1;
    cout<<"ID de Categoria: "<<cant<<endl;
    reg.IDCategoria=pos;
    cout<<"Descripcion: ";
    cin.ignore();
    cin.getline(reg.descripcion, 50);
    cout<<"Tipo: ";
    cin>>reg.tipo;
    reg.estado=true;
    cout<<endl;
    return reg;
}

/*
///MOSTRAR ARTICULO
void mostrararticulo(categorias a){
    cout<<endl<<endl;
    cout<<"Codigo: "<<a.codigo<<endl;
    cout<<"Nombre: "<<a.nombre<<endl;
    cout<<"Precio: "<<a.precio<<endl;
    cout<<"Stock: "<<a.stock<<endl;
    cout<<"Origen: "<<a.origen<<endl;
}
*/
/*
///CARGAR ARTICULOS EN VECTOR
void cargararticulos(categorias *v, int tam){
    for (int i=0;i<tam;i++){
        v[i]=cargararticulo();
    }
}
*/
/*
///MOSTRAR ARTICULOS VECTOR
void mostrararticulos(categorias *v,int tam){
    for(int i=0;i<tam;i++){
        mostrararticulo(v[i]);
    }
}
*/
#endif // FUNCCATEGORIAS_H_INCLUDED
