#include <stdio.h> 
void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size); 

int main() {
	int a = 1, b = 2, c = 3;
	printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
	swapValue(&a,&b,&c);
	printf("After swap function: a= %d, b=%d, c=%d\n\n", a, b, c);
	
	//declare and show array before swapArray
	int i=2,j,size=3;
	int A[3] ={1,2,3}; int B[3] ={4,5,6};
	printf("Before swapArray function A[%d] :", size);
	for(j=0;j<size;j++) printf(" %d",A[j]);
	printf("\n");
	printf("Before swapArray function B[%d] :", size);
	for(j=0;j<size;j++) printf(" %d",B[j]);
	printf("\n\n");
	
	//swap and show array after swapArray
	swapArray(A,B,size);
	printf("After swapArray function A[%d] :", size);
	for(j=0;j<size;j++) printf(" %d",A[j]);
	printf("\n");
	printf("After swapArray function B[%d] :", size);
	for(j=0;j<size;j++) printf(" %d",B[j]);
	printf("\n");
			
	
	return 0;
}

void swapValue(int *a, int *b, int *c){
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}
void swapArray(int a[], int b[], int size){
	int i,temp;
	for(i=0;i<size;i++){
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
}

