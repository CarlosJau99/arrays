#include<iostream>
using namespace std ;

main(){
    //array=arreglo o coleccion o matriz
	
	int notas[4]; //indice o pocision  del arreglo
	notas[0]=80;
	notas[1]=65;
	notas[2]=60;	
	notas[3]=75;
	
	for(int i=0;i<4;i++){
		cout<<i<<":"<<notas[i]<<endl;
	}
	
    
	system("pause");
}
