#include <stdio.h>
 
 
// Switch case yapýsý ile Hesap Makinesi 

int main()
{
    int sayi1,sayi2;
    int islem;
    
    printf("\t\t HESAP MAKINESI \t\t");
    printf("\nYapmak istediginiz islemi seciniz\n");
    printf("1.Toplama\n");
    printf("2.Cikarma\n");
    printf("3.Bolme\n");
    printf("4.Carpma\n");
    
    printf("\nIslemi seciniz:");
    scanf("%d",&islem);
    
    switch(islem){
        case 1:
        	
        	printf("Toplama icin 1.Sayiyi giriniz:");
    		scanf("%d",&sayi1);
    		printf("Toplama icin 2.Sayiyi giriniz: ");
    		scanf("%d",&sayi2);
            printf("Toplama isleminin sonucu : %d",sayi1 + sayi2);
            break;
            
            
        case 2:
        	
        	printf("Cikarma icin 1.Sayiyi giriniz:");
    		scanf("%d",&sayi1);
    		printf("Cikarma icin 2.Sayiyi giriniz: ");
    		scanf("%d",&sayi2);
            printf("Cikarma isleminin sonucu : %d",sayi1 - sayi2);
            break;
            
        case 3:
        	
        	printf("Bolme icin 1.Sayiyi giriniz:");
    		scanf("%d",&sayi1);
    		printf("Bolme icin 2.Sayiyi giriniz: ");
    		scanf("%d",&sayi2);
            printf("Bolme isleminin sonucu : %f", (float) sayi1 / (float) sayi2);
            break;
            
        case 4:
        	printf("Carpma icin 1.Sayiyi giriniz:");
    		scanf("%d",&sayi1);
    		printf("Carpma icin 2.Sayiyi giriniz: ");
    		scanf("%d",&sayi2);
            printf("Carpma isleminin sonucu : %d", sayi1 * sayi2);
            break;
            
        default:
            printf("Lutfen gecerli bir sayi giriniz..");
    }
}
