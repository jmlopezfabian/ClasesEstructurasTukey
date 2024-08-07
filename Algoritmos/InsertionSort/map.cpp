#include <bits/stdc++.h>

using namespace std;

int main(){
    int nums[] = {1,2,3,4};
    int n = 4;

    unordered_map<int, int> frec;

    /* 
    map -> ordena por llaves
    unordered_map 

    multi_map -> Permite llaves duplicadas
    */

    /*
    //INsertar
    frec[0] = 2;
    frec[1] = 3;
    frec[5] = 10;
    frec[0] = 15;


    // for elemento in lista
    //Iterar
    for(auto elemento: frec){
        cout<<elemento.first<<" "<<elemento.second<<endl;
    }
    */
   

   //Crear cubeta
    for(int i = 0 ; i<n; i++){
        int actual = nums[i];
        frec[actual]++;
    }

    for(auto it: frec){
        if(it.second > 1){
            cout<<"Hay un duplicado :D";
            return 0;
        }
        
    }
    cout<<"No hay duplicados :D";


}