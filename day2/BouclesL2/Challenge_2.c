#include <stdio.h>

int main() {
	
    int nombre_ling = 7;

	for (int i=0;i<nombre_ling;++i){
		for (int j=0 ; j<nombre_ling; j++){
			printf (" ");
		}
		for (int k=0; k <= i*2;k++){
			printf ("*");
		}
		printf ("\n");
	}
	return 0;
}