// Challenge 6 : Calcul et affichage des résultats
// Deux nombres réels, a et b, sont saisis au clavier.
//  Calculez et affichez a + b, a - b, a * b, et a / b 
 // avec précision décimale.

#include <stdio.h>

int main(){
 int a , b ; 
  printf("saiser le nombre a : ");
  scanf("%d",&a  );
  printf("saiser le nombre b : ");
  scanf("%d",&b  );

  printf("%d\n",a+b);
  printf("%d\n",a-b);
  printf("%d\n",a*b);

  if(b != 0 ){
 printf("%.2f",(float) a / (float)b);
  }else printf("devision de 0 est inposible");
  



  return 0;
}
