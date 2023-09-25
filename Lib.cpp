#include "Lib.h"


ui ScanBoolVector(char v[], int n){
	ui x = 0;
	for(int i = 0; i < n; ++i){
		x <<= 1;
		if(v[i] == '1'){
			x++;
		}
	}
	return x;
}
void PrintBoolVector(ui x, int n){
	ui mask = 1;
	mask <<= n-1;
	for(int i = 0; i < n; i++){
		printf("%d", (x&mask) ? 1 : 0);
		mask >>= 1;
	}	
}

void ScanBoolMatrix(ui *BoolMatrix, int m, int n){
	char *s = new char[n];
	for(int i = 0; i < m; ++i){
		scanf("%c", s);
		for(int j = 0; j < n; ++j){
			scanf("%c", s+j);
		}
		BoolMatrix[i] = ScanBoolVector(s, n);
	}
	
}
void PrintBoolMatrix(ui *BoolMatrix, int m, int n){
	for(int i = 0; i < m; ++i){
		 PrintBoolVector(BoolMatrix[i], n);
		 printf("\n");
	}
}
