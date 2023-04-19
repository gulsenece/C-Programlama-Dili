int main() 
{
	int IEEE=54; 									                  //%d
	float kilo=75.99;								               //%f
	char X='a'; //charlar sadece bir harf tutar.	 //%c
	//charlarda tek bir tane data alma hakkı var.   
	
	printf("IEEE=%d\n", IEEE);
	printf("kilo=%f\n", kilo); //ondalık kısımdan max sayı alma demektir.
	printf("kilo=%.2f\n", kilo); //ondalık kısımdan sadece 2 sayı almak demektir. istenilirse 3 veya 4 de yazılabilir
	printf("X=%c\n", X);
	

	return 0;
}

