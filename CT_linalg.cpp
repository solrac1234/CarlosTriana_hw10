#include <iostream>
#include <fstream>
using std::cout;
using std::endl;

//se inicializa la funcion matrix_product.

double **matrix_product(double **A, double **B, int rowA , int rowB, int colA , int colB);

//se inicializa la funcion get_matrix.
double **get_matrix(double M, double N);

int main(){
	

	        int c1 ;
		int r1 ;
		int c2 ;
		int r2 ;


		
                //valor de entrada de las filas y columnas de las 2 matrices 
	std::cout <<"# columas A" << std::endl;
	std::cin >> c1;
	std::cout <<"# columas B" << std::endl;
	std::cin>> r1;
	std::cout <<"# filas A" << std::endl;
	std::cin >>c2;
	std::cout <<"# filas B" << std::endl;
	std::cin >> r2;

	std::cout <<"ingrese un numero" << std::endl;
	double var;
	std::cin >>var;
}
double **matrix_product(double **A, double  **B, int rowA, int rowB,int colA,int colB){

  //inicializacion de la matriz
  
  double **result = new double*[rowA];
  for(int i=0;i<rowA;i++){
    result[i] = new double*[colB];
    
  }
  int j;
  for (int i=0;i<rowA;i++){
    for(j=0;j<colB;j++){
      result[i][j]=0
	}
	int k;
	for(int k=0; k<<colA;k++){
	  result[i][j]=A[i][k]*B[k][j];
	}
    }
  
  return result;
  }


