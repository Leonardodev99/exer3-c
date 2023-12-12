#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void findParPlusNextZero(int num[], int n){
	int i, j;
	if(n<2){
		printf("O array deve ter pelo menos dois elementos.\n");
        return;
	}
	int element1 = num[0];
	int element2 = num[1];
	int minimum_difference = abs(element1 + element2);
	
	for(i=0; i< n-1; i++){
		for(j= i+1; j< n; j++){
			int currentsum = num[i] + num[j];
			int differenceCurrent= abs(currentsum);
			
			if(differenceCurrent<minimum_difference){
				element1 = num[i];
				element2 = num[j];
				minimum_difference = differenceCurrent;
			}
		}
	}
	 printf("\n O array fornecido e:");
	 for (int i = 0; i < n; i++) {
        printf(" %d", num[i]);
    }
    printf("\n");

    printf("O par de elementos cuja soma é mínima são: [%d, %d]\n", element1, element2);

}

int main(int argc, char *argv[]) {

    int i, n=10;
    int num[n];
    
    
    
    for(i=0; i<n; i++){
    	scanf("%d",&num[i]);
	}
	printf("O array fornecido é: ");
	
    for(i=0; i<n; i++){
    	printf("%d ",num[i]);
	}
	findParPlusNextZero(num, n);

	system("pause");
	
	return 0;
}

