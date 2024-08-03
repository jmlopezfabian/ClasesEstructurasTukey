typedef struct 
{
    int edad;
    int altura;
}Persona;


void OrdenarPorEdad_Valeria(Persona *personas, int n){
Persona monitor;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      if (personas[j].edad>personas[j+1].edad){
          monitor = personas[j];
          personas[j]= personas[j+1];
          personas[j+1]=monitor;
      }
    }   
  }
}


void OrdenarPorEdad_Maga(Persona *personas, int n){
  int i,j;
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        Persona tem = personas[j];
        if(personas[j].edad>personas[j+1].edad){
          personas[j]=personas[j+1];
          personas[j+1]= tem;
          }
        }
    }

}



void ordenasporedad_al(Persona *personas, int n){
  for(int j=0;j<n; j++ ){
    for(int k=0;k<n; k++){
      if(personas[k].edad>personas[k+1].edad){
        Persona aux=personas[k];
        personas[k]=personas[k+1];
        personas[k+1]=aux;
      }
    }
  }
}


void OrderarPorEdad_sel(Persona *personas, int n){
  for (int i=0;i<n;i++){
  	for (int j=0;j+1<n;j++){
      if(personas[j].edad > personas[j+1].edad){
        Persona temp = personas[j];
        personas[j] = personas [j+1];
        personas [j+1]=temp;
        
      }
    }
  }
}
