//  Write a program in C to print or display the lower triangular of a given matrix
 #include <stdio.h>
 #include <stdlib.h>

int main(){

	int row,col;

	scanf("%d%d",&row,&col);
	col = row;

	int** arr = (int**)malloc(row * sizeof(int*));

	for(int i = 0; i < row; i++){
		arr[i] = (int*)malloc(col * sizeof(int));
	}

	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			scanf("%d",&arr[i][j]);
		}
	}

	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			if(i > j){
				*(*(arr+i)+j) = 0;
			}
		}
	}
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("%d ",*(*(arr+i)+j));
		}
		printf("\n");
	}


}
