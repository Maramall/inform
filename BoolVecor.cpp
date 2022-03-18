//дан булев вектор Х размера n. Построить булев вектор Y размера 2n по правилу: Y(2i+1) = 0, Y(2i) = ~X(i), i =[0, n];
#include "Lib.h"

int main(){
	ui X, Y = 0, n, l;
	printf("Size of BoolVector is: ");
	scanf("%d", &n);
	char *Vector = new char[n];
    scanf("%c", Vector);
	printf("Input BoolVector: ");
	for(ui i = 0; i < n; ++i){
		scanf("%c", Vector+i);
	}
	X = ScanBoolVector(Vector, n);
	//PrintBoolVector(X, n);
	for(ui k = 0; k < n; k++){
		 l = 1;
		 l <<= n-k-1;
		 Y <<= 1;
		 if(!(l & X)) Y++;
		 if(k != n-1)Y <<= 1;
		}
	printf("\n");
	PrintBoolVector(Y, 2*n);
	}
