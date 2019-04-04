#ifndef FUNCARCHIVOSCATEGORIAS_H_INCLUDED
#define FUNCARCHIVOSCATEGORIAS_H_INCLUDED

///CANTIDAD DE REGISTROS
int CantidadRegistrosCategorias(){
  FILE *p;
  int cont=0;
  struct categorias reg;
  p=fopen("categorias.dat","rb");
  if(p==NULL){cout<<"ERROR DE ARCHIVO.";return-1;}
  while(fread(&reg,sizeof reg,1,p)==1){
    cont++;
  }
  return cont;
}
///ALTA ARCHIVO
int NuevaCategoria(){
    FILE *p;
    struct categorias reg;
    p=fopen("categorias.dat","ab");
    if(p==NULL){cout<<"ERROR DE ARCHIVO.";return-1;}
    reg=CargarCategoria(CantidadRegistrosCategorias());
    fwrite(&reg,sizeof reg,1,p);
    fclose(p);
    return 0;
}
/**
///LEER ARTICULO
int LeerArchivo(){
    FILE *p;
    struct articulo reg;
    p=fopen("articulos.dat","rb");
    if(p==NULL){cout<<"ERROR DE ARCHIVO.";return-1;}
    fread(&reg,sizeof reg,1,p);
    mostrararticulo(reg);
    fclose(p);
    return 0;
}
///LISTAR ARCHIVO
int ListarArchivo(){
    FILE *p;
    struct articulo reg;
    p=fopen("articulos.dat","rb");
    if(p==NULL){cout<<"ERROR DE ARCHIVO.";return-1;}
    while(fread(&reg,sizeof reg,1,p)==1){
        mostrararticulo(reg);
    }
    fclose(p);
    return 0;
}
///BUSCAR ARTICULO ARCHIVO
int BuscarArticuloArchivo(char *cod){
    FILE *p;
    struct articulo reg;
    int cont=0;
    p=fopen("articulos.dat","rb");
    if(p==NULL){cout<<"ERROR DE ARCHIVO.";return-1;}
    while(fread(&reg,sizeof reg,1,p)==1){
        cont++;
        if(strcmp(cod,reg.cod)==0){
            fclose(p);
            return cont; ///devuelve posicion.
        }
    }
    fclose(p);
    return 0; ///si no encuentra el articulo.
}
///BAJA LOGICA ARCHIVO
int BajaArticuloArchivo(){
    char codigo[5];
    struct articulo reg;
    FILE *p;
    p=fopen("articulos.dat","rb+");
    if(p==NULL){cout<<"ERROR DE ARCHIVO.";return-1;}
    cout<<"Codigo de articulo a borrar: ";
    cin>>codigo;
    while(fread(&reg,sizeof reg,1,p)==1){
        if(strcmp(codigo,reg.codigo)==0){
            fseek(p,-sizeofreg,1); ///retrocedo un lugar 0=principio/1=lugar/2=final
            ///nombre de archivo, desplazamiento en bytes, desde donde
            reg.activo=false; ///cambio el estado
            fwrite(&reg,sizeof reg,1,p); ///sobreescribo
            fclose(p); ///cierro archivo
            return 0; ///devuelvo
        }
    }
    fclose(p);
    return -2; ///si no escuentra
}
*/


#endif // FUNCARCHIVOSCATEGORIAS_H_INCLUDED
