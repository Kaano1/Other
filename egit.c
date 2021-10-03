#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>//matematik kutuphanesi
#include <string.h>//string eklenti
int main(int argc,char **argv){	
 
 
 
 
 
 
 
 
  /* int vgit,fgit,vizy,candeger=60;
   float ogrenci;
   printf("Vize yuzdesi ve vize notu:");
   scanf("%d%d",&vizy,&vgit);
   printf("final notu:");
   scanf("%d",&fgit);
    printf("Vize Notunuz:%d(%%%d)+final%d(%%%d)\n",vgit,vizy,fgit,100-vizy);
    ogrenci=(vgit*vizy+fgit*(100-vizy))/100;
    printf("Ortama:%.2f\n",ogrenci);
    printf("gecti mi:%d",ogrenci>=candeger);
/*








  /*  float p,cevre,alan,r;
	printf("yari capi firin:");
	scanf("%f",&r);
	p= 3.14159;
	cevre=2*p*r;
	alan=p*r*r;
	printf("%f\n%f",cevre,alan);
	
	*/
	
	
	
	
	
	





	
	
/*/	float a,b,c,cvc;
	printf("a gir:");
	scanf("%f",&a);  
    
    printf("b gir:");
	scanf("%f",&b);  
	  
	printf("c gir:");
	scanf("%f",&c);
	  
	cvc=b*b-4*a*c;
	printf("Cevap:%.1f\n",cvc);
	printf("Cevap 0 dan kucuk mu?:%d\n",(int)cvc<0);    
	printf("Cevap 0 dan buyuk mu?:%d\n",(int)cvc>0);
*/












/*
    float a,s;
    char ch;
    printf("sayilari girin:");
    scanf("%f%f",&a,&s);
    fflush(stdin);
    printf("Istenilen islem:");
    scanf("%c",&ch);
    if(ch=='+')
	{
	printf("%f.2+%.2f=%.2f",a,s,a+s);
    }
    else if(ch=='-'){
    	printf("%.2f-%.2f=%.2f",a,s,a-s);
	}
    else if(ch=='*'){
    	printf("%.2f*%.2f=%.2f",a,s,a*s);
	}
    else if(ch=='/'){
    	printf("%.2f/%.2f=%.2f",a,s,a/s);
	}
    
*/ 




 /*


//1250 tl bakiye 500 tl yatir cek ve bakiye sorgula islemleri yapilicak
    int bak,sinir,h,s;
   
    bak=1250;
    
	sinir=500;
    
	
   
    printf("Yukleme:1,Cekme:2,Sorgulama:3\n\n");
    printf("Yapmak istenilen islemi secin:");
    scanf("%d",&s);
   
    if(s==1)
    {
    	printf("Yatirilmak istenen para(max 500 tl yatirabiliirsiniz):");
    	scanf("%d",&h);
    
		if(h>=sinir)
    	{
    		printf("hatali islem!");
    		s!=1;
		}
		printf("\nYukleme yapilmistir!");
		bak=h+bak;
	}
	
   else if(s==2)
    {
    	printf("Cekilmek istenen para(max 500 tl Cekebilirsiniz):");
    	scanf("%d",&h);
    	if(h>=sinir)
    	{
    		printf("hatali islem!");
    		s!=2;
		}
		printf("Cekim isleminiz yapilmistir!");
		bak=h+bak;
	}
    else if(s==3)
    {
    	printf("Hesabinizda Toplam:%d",bak);
   	}
	else{
		printf("Hatali islem!");
	}
    */
    
    
    
    
    
    
    




    
    
/* 
    float sayi1,sayi2,sonuc;
    char c;
    printf("islemleri girin:");
    scanf("%f%c%f",&sayi1,&c,&sayi2);
    switch(c){
	
    case '+':
	 sonuc=sayi1+sayi2;
	 printf("%.1f",sonuc);
	 break;
	
	case '-':
	 sonuc=sayi1-sayi2;
	 printf("%.1f",sonuc);
	 break;
	
	case '/':
	 sonuc=sayi1/sayi2;
	 printf("%.1f",sonuc);
	 break;
	 
	case '*':
	 sonuc=sayi1*sayi2;
	 printf("%.1f",sonuc);
	 break;
	 
	default: 
	printf("Hatali giris!")
}
    */
    
    
    
    
    
    




    



    
  /*   
    //Odev #1
    char kaan= 'A';
    printf("Hello word\n\n");
    printf("A rakam veya harf mi?%d\n",isalnum(kaan));
    printf("A harf mi?:%d\n",isalpha(kaan));
    printf("A sayi midir?:%d\n\n",isdigit(kaan));
    printf("A sayi kucuk mu?:%d\n",islower(kaan));
    printf("A sayi BUYUK mu?:%d\n",isupper(kaan));
    printf("a buyut :%c\n",toupper('a'));
    printf("A kucult:%c",tolower(kaan));
  */  
  
  
  
  
  
  
  
  
   
/*
 // #isalfha();
 char ch;
  printf("Lutfen karakter degeri girin:");
  ch=getchar();
  if(ch>='a' && ch<='z' || ch>='A' && ch<='Z') 
  {
  printf("Bu bir harf");
  }
*/
  
  
  
  
  
  
  
  
  
 /* //#isdigit
  char kaan;
  printf("Lutfen bir tusa basin:");
   kaan=getchar();
  if( kaan>='0' && kaan<='9')
  {
   printf("bu bir sayidir");
   }
*/
  
  
  
  
  
  
  
  
  
  
  /*//#tolower
  char kaan;
  printf("harf gir degistirelim boyutunu: ");
  kaan=getchar();
  if(kaan>=65 && kaan<=90)
  {
  	kaan+=32;
  	putchar(kaan);
  }
//#toupper
   else if (kaan>=97 && kaan<=122)
   {
   	kaan-=32;
   	putchar(kaan);
   }
  else  printf("Hata babacan");
  */
  
  












  /* 
  //Odev #2
   int kaan,k;
    kaan=100;
   // fflush(stdin);
   // srand(time(NULL));
  //  kaan=rand()%10000;
   if(kaan>=10000 && kaan<100000)
   {
   	k=5;
   	printf("basamak sayisi:%d , sayi:%d",k,kaan);
   }
    else if(kaan>=1000 && kaan<100000)
    {
    	k=4;
    	printf("basamak sayisi:%d , sayi:%d",k,kaan);
	}
    
    else if(kaan>=100 && kaan<1000)
    {
    	k=3;
    	printf("basamak sayisi:%d , sayi:%d",k,kaan);
	}
    
    else if(kaan>=10 && kaan<100)
    {
    	k=2;
    	printf("basamak sayisi:%d , sayi:%d",k,kaan);
	}
    
    else if(kaan>=0 && kaan<10)
    {
    	k=1;
    	printf("basamak sayisi:%d , sayi:%d",k,kaan);
	}
    
    */
   
   
   
   
   
   
   
   
   
   /* 
  
    float g,p,a,gomlek,pantolon,ayakkabi,faiz,tak,ucret;
    
	gomlek=50;
    ayakkabi=100;
    pantolon=80;
   
    char n,t,k;
    printf("Nasil odeme yapacaksaniz?(o: ozel kartimiz ,n:normal ,t:taksit):");
    scanf("%s",&k);
    
	switch(k){
		
	case 'k':
    	 if(k=='k') 
	{
		printf("kac adet gomlek istersiniz?:");
		scanf("%f",&g);
		
		printf("kac adet pantolon almak istersiniz?:");
		scanf("%f",&p);
		
		printf("kac adet ayakkabi?:");
		scanf("%f",&a);
		
	printf("Indirimimizden yararlandiniz:%f",g*gomlek/100*80+p*pantolon/100*80+a*ayakkabi/100*80);	break;
	}

   
   
   case 't':
    printf("kac adet gomlek istersiniz?:");
	scanf("%f",&g);
	printf("kac adet pantolon almak istersiniz?:");
	scanf("%f",&p);
	printf("kac adet ayakkabi?:");
	scanf("%f",&a);
	printf("kac taksit?:");
	scanf("%f",&tak);
	ucret=g*gomlek+p*pantolon+a*ayakkabi;
	tak=ucret/100*12.50+ucret;
	printf("Indirimimizden yararlanamadiniz:%f,",tak);
	break;
	
	
    
    case 'n':
    	 if(k=='n') 
	{
		printf("kac adet gomlek istersiniz?:");
		scanf("%f",&g);
		
		printf("kac adet pantolon almak istersiniz?:");
		scanf("%f",&p);
		
		printf("kac adet ayakkabi?:");
		scanf("%f",&a);
		
	printf("Ucret:%f",g*gomlek+p*pantolon+a*ayakkabi);
	}
    break;    
  }*/
   
  
   
   
   
    
   
   
   
    
 /*   
    int a,b,c,sonuc;
    printf("1.kenar girin:");
    scanf("%d",&a);
    
	printf("2.kenar girin:");
    scanf("%d",&b);
   
    printf("3.kenar girin:");
    scanf("%d",&c);
    
    if((a-b)*(a-b)<c && c<a+b)
	{
    	if((a-c)*(a-c)<b && b<a+c)
		{
			if((c-b)*(c-b)<a && a<b+c){
			printf("ucgen olusturulabilir\n");
			printf("A:%d\nB:%d\nC%d",a,b,c);
			} 
		}
  	}
  */  
    
    
    
    
    
    
    
    
    
    
 /*   
    int age;   
    printf("Enter your age");  
    scanf("%d",&age); 
    (age>=18)? (printf("x")) : (printf("z"));
    return 0;  
   */ 
 
 
 
 
 
 
 
 
 
 
 /*   
    int i,a,s,gecici;;
    printf("sayi girin:");
    scanf("%d",&a);
    i=0;
    printf("gecici sayi:");
    scanf("%d",&gecici);
    printf("gecici ters:");
	while(a>=s)
	{ 
	printf("%d",gecici%10);
	gecici/=10;
	 s*=10;
     i+=1;
     
	}
    printf("\nsayi %d haneli\n",i);
    
   */ 
    
    
  
  
  
  
  
  
  /* int i;
    i=0;
    i=1452;
    do
	{
		
		i+=1;
		printf("%d ",i);
		sleep(1);
		
		if(i==1460){
		printf("Yeter!"); break;
 	    }
	}while(i<=1474);
    
    */
    
    
    
    
    
    
    
    
    
    
  /*  
    //asal sayilar
    int sayi,bolun=0,i;
    printf("sayi giriniz:");
    scanf("%d",&sayi);
    for(i=2;i<sayi;i++)
	{ 
		if(sayi%i==0)
		{
			bolun=1;
			break;
		}
		
		 
	}
	
   
	if(bolun==0){
		printf("%d sayisi asal bir sayidir.",sayi);
	}
	else{
		printf("%d sayisi asal bir sayi degildir",sayi);
	}
    
*/
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
 /*   
  // bosluk sayisi hesaplayan program
   int bosluk=0,i;
   char ch;
   do
   {
    ch=getchar();
    
    if(ch!=' ')
       {
    	i++;
    	
		}
    else
	{
		i-=1;
	}
  		         
   }while(ch!='\n');
    printf("%d",i);

    
   */ 
    
    
    
 /*   
    //ebob ekok
   int ebob,ekok,sayi1,sayi2,buyuk,kucuk,sayac;
    printf("sayi girin1:");
    scanf("%d",&sayi1);
    printf("sayi girin2:");
    scanf("%d",&sayi2);
    if(sayi1>sayi2){
    	buyuk=sayi1;
    	kucuk=sayi2;
	}
    else{
    	buyuk=sayi2;
    	kucuk=sayi1;
	}  
   //ekok
   sayac=buyuk;
   while(1){
   	if(sayac%buyuk==0 && sayac%kucuk==0)
	   {
	   	ekok=sayac;
	   	break;
	   }
   	sayac++;
   }   
    //ebob
    sayac=kucuk;
    while(1){
    	if(buyuk%sayac==0 && kucuk%sayac==0){
    		ebob=sayac;
    		break;
		}
		sayac--;
		}
    printf("%d , %d  ekok:%d ebob:%d",sayi1,sayi2,ekok,ebob);
  */  
  
  
  
  
  
  
  
  
  /*
  
  int sayi,gecsayi,tersi=0,kalan;
  
  printf("sayi:");
  scanf("%d",&sayi);
  gecsayi=sayi;
  
  while(gecsayi!=0){
  	kalan=gecsayi%10;
  	tersi=tersi*10+kalan;
  	gecsayi/=10;
  }
  printf("sayinin tersi:%d",tersi);
  
  
  */
  
  
  /*
  //Odev#1 ucgenler
  int veri,i,icdongu,gecveri;
  printf("Ucgen or Piramit icin sayi girin:");
  scanf("%d",&veri);
  */
  /*for(i=1;i<=veri;i++)//ters ucgen
  {
  	for(icdongu=i;icdongu<=veri;icdongu++)
  	{
  		printf("*");
	  }
	  printf("\n");
  }
  */
  /*gecveri=veri;                            //duz ucgen
  for(i=1;i<=veri;i++)
  {
  	for(icdongu=0;icdongu<i;icdongu++)
  	{
  	printf("*");
	  }
	printf("\n");
  }
  */
  /*for(i=0;i<=veri;i+=2){        //<==========//ters bir ucgen fakat 2 ser bir sekilde azaliyor mantigi anlamak icin
  	for(icdongu=i;icdongu<veri;icdongu++)
	  {
	  	printf("*");
	  }
  	printf("\n");
  }
  */
  /*printf("\n");                    //<=====//tam ucgen
  for(i=1;i<veri;i+=2)
  {
  	for(icdongu=0;icdongu<(veri-i)/2;icdongu++)
	  {
	  	printf(" ");
	  }
	  for(icdongu=0;icdongu<i;icdongu++)
	  {
	  	printf("*");
	  }
	  for(icdongu=0;icdongu<(veri-i)/2;icdongu++)
	  {
	  	printf(" ");
	  }
  	printf("\n");
  }
 */
 
 
 
 
/*
    // Odev 2
    int i,buyuk=0,kucuk=0,sayi=0,bosluk=0;
    char sifre;
    do{
    	sifre=getchar();
    	i++;
    	if(bosluk==0 && sifre==' ')
    	{
    		bosluk=0;
		}
		if(buyuk==0 && isupper(sifre))
		{
			buyuk=1;
		}
		if(kucuk==0 && islower(sifre))
		{
			kucuk=1;
		}
		if(sayi==0 && isdigit(sifre))
		{
			sayi=1;
		}
		
	}while(sifre!='\n');
	
	if(i<=16 && i>=8){
	}
	else{
		printf("hata\n");
	}
	if(buyuk && kucuk && sayi && bosluk==0){
		printf("\nSifreniz Kaydedilmistir");
	}
	else{
		printf("Islem basarisiz");
	}	
*/	   

   /* //Odev#3 mukemmel sayi
    int i,toplam=0,sayi,gecicisayi;
    printf("Sayi giriniz:");
    scanf("%d",&sayi);
    
     for(i=1;i<sayi;i++)//sayi kadar ilerlemezse sayiyida toplar ve mukemmel sayi olamaz
    
    {
    	if(sayi%i==0)//sorgulama i ile sayi tam bolune biliyormu diye
    	{
    		toplam+=i;//toplanir her seferinde i ile toplam ve sonuc yazilanla ayni cikiyorsa iste mukemmel sayiyi buldunuz!
		}
	}
	printf("\n%d",toplam);
	if(toplam==sayi)
	{
		printf("\nMukemmel\n\n");
	}
	else{
		printf("\nMukemmel sayi degil!!\n\n");
	}
  
  int j;// 1000 ile 1 arasindaki mukkemmel sayilari bulan program.
   for(i=1;i<=1000;i++)//kaca kadar bakmasini istedigimizi yazabiliriz
   {
   	toplam=0;   //her seferinde sifirlanmali aksi taktirde ustune koyarak ilerler buda istenmeyen bir sayi dizesi olusmasini saglar
   	for(j=1;j<i;j++)
	   {
	   	if(i%j==0)
		   {
		   	toplam+=j;// sayinin kendisini verip veremedigini kontol bitince topluyor cikista if(i==topla) esitligi sorgulaniyor eger esitse mukemmel sayidir
		   }
	   }
	   if(i==toplam)
	   {
	   	printf("\n%d",i);//yazdirma islemi
	   }
   }
   */
   
  /* 
   int sayi1,sayi2,asal,buyuk,kucuk;
   sayi1=0;
   sayi2=100;
   
   if(sayi1<sayi2){
   	buyuk=sayi2;
   	kucuk=sayi1;
   }
    else{
   	buyuk=sayi1;
   	kucuk=sayi2;
   }
   asal=kucuk;
   while(asal<=buyuk && kucuk<=asal)
   {
   	asal++;
   	if(asal%2==0 || asal%3==0 || asal%7==0 || asal%5==0)
	   {
   		
	   }
	else
	{
		printf("\n%d",asal);
	}   
   }
  */
  
  
  
  
  
 /*
  
  //Odev#4 
  int a,b,c,sayi,i,acikA=0,acikB=0,acikC=0,toplam,kalan,gec;
  printf("\nSayi giriniz:");
  scanf("%d",&sayi);
   gec=sayi;
  for(i=0;i<=sayi;i++)
  {
  	kalan=sayi%10;
  	sayi/=10;
  	acikC++;
  	acikA++;
	if(!acikB)
	{
		acikB=2;
		b=kalan;
	}
	if(acikC==2)
	{
		acikC=3;
		c=kalan;
	}
	if(acikA==3)
	{
		acikA=1;
		a=kalan;
	}

  }
  //printf("%d%d%d",a,c,b);
  toplam=(a*a*a)+(b*b*b)+(c*c*c);
  
  {
  	printf("%d doru sayi",gec);
  }  
  else
  {
  	printf("Hatali sayi");
  }
 */
   
 

/*
    // 1 ile 1000 arasindaki sayilardan kupleri toplami kendisine esit olan sayilari yazdir 
    int toplam,sayi,i=0;
    printf("Sayiyi girin:");
    scanf("%d",&sayi);
    while(1){
    	i++;
    	if(sayi%i!=0)//bu olmassada sistem tam bir bicimde calisir
    	{
    		continue;
		}
		
		if(sayi==i)//onemlidir cunku eger esit ise islemi bitirir.
    	{
    		break;
		}
    	if(sayi%i==0)//onelmidir cunku eger tam bolunurse toplama ekler ve mukkemmel olup olmadigina bakilir
    	{
    		toplam+=i;
		}
	
	}
	if(i==toplam)//mukemmlemidir degilmidir sistem calisiyor ise 6 sayisi mukemmeldir.
	{
		printf("Mukemmel");
	}
*/  
    
  /*  
    int i = 2048;
    int sayac=0;
    for (; i; i >>= 1){
        sayac++;
    }
    printf("Sayac:%d",sayac);
  */
/*   
   //dizeler tek boyutlu;
   int sayiDizisi[10];
   sayiDizisi[0] = 1;
   sayiDizisi[1] = 2;
   sayiDizisi[2] = 3;
   sayiDizisi[3] = 4;
   sayiDizisi[4] = 5; 
   printf("Ne kadar alan kapliyor:%d byte\n\n",sizeof(sayiDizisi));//sayiDizisi[10]= 4 byte(her sayi icin) * 10 = 40;
   printf("sayi nerede:%#X ve degeri nedir: %d\n",sayiDizisi[0],sayiDizisi[0]);//%#X= nerede depolaniyor 
   printf("sayi nerede:%#X ve degeri nedir: %d\n",sayiDizisi[1],sayiDizisi[1]);
   printf("sayi nerede:%#X ve degeri nedir: %d\n",sayiDizisi[2],sayiDizisi[2]);
   printf("sayi nerede:%#X ve degeri nedir: %d\n",sayiDizisi[3],sayiDizisi[3]);
   printf("sayi nerede:%#X ve degeri nedir: %d\n",sayiDizisi[4],sayiDizisi[4]);
   printf("\n\n");
  
   // peki her zaman boylemi yazacagiz? tabiki hayir dongulerde kullanacagiz bunlari :);
   int i,dongu[10];
   for(i=0; i<10; i++){
   	dongu[i]=pow(i,2);//pow(1,2) 1 in 2 ustu yani bir pow(3,2) 3 un 2 ustu yani 9;
   	printf("sayi nerede:%#X ve degeri nedir:%d\n",dongu[i],dongu[i]);
   }
   printf("\n\n");
   
   
   //random sayilar ekleyen bir program;
   int ran[10];
   int toplam=0, ortalama, j;                     
   srand(time(NULL));
   for(j=0 ; j<10 ; j++)
   {
   ran[j]=rand()%100;                                 // rand rasgele sayi secmek icin kullaniriz hangi sayiya kadar gitmesini istedigimizi 
   printf("degeri:%d ve nerede oldugu:%#X\n",ran[j]); //%(mod)100 veya 50 veya ne yazarsaniz ona gore rasgele alir.
   }
	  	   	
   //eeee bu sayilari toplamayida ogrenelim ve ortalamasini alalim sayilarin;
   for(j=0; j<10 ; j++)
   {	
   	toplam+=ran[j];
   	printf("\ntoplam(%d):%d",j,toplam);
   }
   ortalama=toplam/10;
   printf("\n\nSayi ortalamasi:%d",ortalama); 
   */
   
   
   
   
   
   
  /* //diziler 2 boyutlu; && matris
   int ilkmatris[5][5],i,j;
   srand(time(NULL));
   for(i=0;i<5;i++){
   	for(j=0;j<5;j++){
   		ilkmatris[i][j]=rand()%10;
   		printf("%d\t",ilkmatris[i][j]);
	   }
	   printf("\n");
   }
   for(i=0;i<5;i++){
   	for(j=0;j<5;j++){
   		
	   }
   }
   */
   
   
   
  /*//satir ve sutunlardakileri kendi aralarinda toplama; 
   int ilkmatris[5][5],i,j,toplam_sutun,toplam_eleman;
   srand(time(NULL));
   for(i=0;i<5;i++){
   	for(j=0;j<5;j++){
   		ilkmatris[i][j]=rand()%10;
   		printf("%d\t",ilkmatris[i][j]);
	   }
	   printf("\n");
   }
   printf("toplamlari:\n");
   for(i=0;i<5;i++){
   	for(j=0;j<5;j++){
   		toplam_sutun+=ilkmatris[j][i];
   		toplam_eleman+=ilkmatris[i][j];
   		
	   }
	   printf("%d.satirinin toplami:%d\n",i+1,toplam_eleman);
       printf("%d.sutunun toplami:%d\n\n",i+1,toplam_sutun);
	   printf("\n");
   }
  */
  
  
  
  
  
  /*
  //iki matris toplaniyor ve asagidaki ayni sutune ve araliga kaydediliyor 1 sutun 1 elemanlari 1 sutun 1 elemanda toplaniyor OK :)
   int ilkMatris[5][5],ikinciMatris[5][5],toplamMatris[5][5],i,j;
   srand(time(NULL));
   printf("Matris 1.:\n");
   for(j=0;j<5;j++)
   {
   	for(i=0;i<5;i++)
	   {
   		ilkMatris[j][i]=rand()%10;
   		printf("%d\t",ilkMatris[j][i]);
	   }
	   printf("\n");
   }
   printf("Matris 2.:\n");
   for(j=0;j<5;j++)
   {
   	for(i=0;i<5;i++)
	   {
	   	ikinciMatris[j][i]=rand()%10;
	   	printf("%d\t",ikinciMatris[j][i]);
	   }
	   printf("\n");
   }
   printf("Matrislerin Toplami:\n");
   for(j=0;j<5;j++)
   {
   	for(i=0;i<5;i++)
	   {
	   	toplamMatris[j][i]=ilkMatris[j][i]+ikinciMatris[j][i];
	   	printf("%d\t",toplamMatris[j][i]);
	   }
	   
	   printf("\n");
   }
   */
   
   
   
   
  /* 
   //DIZIDE ARAMA KODU   int dizi[10],i,bul=0,aranan;
   srand(time(NULL));
   printf("\n\n");
   for(i=0;i<10;i++){
   	dizi[i]=rand()%100;
   	printf("%d ",dizi[i]);
   }
   printf("\n");
   printf("Lutfen sayi giriniz:");
   scanf("%d",&aranan);
   for(i=0 ; i<10 ; i++)
   {
   	if(aranan==dizi[i])
	   {
   		bul=1;
   		break;
	   }
   }
  
   if(bul)
   {
   	printf("Bulundu");
   }
   else{
   	printf("Malesef");
   }
  
  */
  
  
  
  
  
  
  
  
  
  /*
   int i,j,eleman,dizi[10];
   srnad(time(NULL)); 
   printf("Dizi\n");
   for(i=0;i<10;i++){
   	dizi[i]=rand()%100;//rasgele sayi
   	printf("%d ",dizi[i]);
   }
   printf("\n\nSirali Diziler\n");
   for(i=1;i<10;i++){
   	eleman=dizi[i];//dizinin [1] ise ve bu da 12 ise bunu elemana kaydediyor
   	printf("\n");
   	for(j=i-1;j>=0 && eleman<dizi[j];j--)//Ornegin j=12-1 den 11>=0 && 12<dizi[11];11-=1;
	   {
	   	dizi[j+1]=dizi[j];//dizi12=dizi[11] yani siralamada eger sartlar oluyorsa boyle olur.
	   }
	   dizi[j+1]=eleman;
   }
   for(i=0;i<10;i++)
   {
   	printf("%d ",dizi[i]);
   }
   */
   
   
   
   
   
   
   
   
   
   
/*   //1.Matrisin ilk 4 basamagi ile 2.Matrisin satilarinin carpiminin toplamini veren makina
  int carp[4][4],matris1[4][4],matris2[4][4],i,j,k,toplam;
   srand(time(NULL));
   printf("Matris1:\n");
   for(i=0;i<4;i++){
   	for(j=0;j<4;j++){
   		matris1[i][j]=rand()%5;
   		matris2[i][j]=rand()%5;
   		printf("%d\t",matris1[i][j]);
	   }
	   printf("\n");
   }
   printf("Matris2:\n");
   for(i=0;i<4;i++){
   	for(j=0;j<4;j++){

   		printf("%d\t",matris2[i][j]);
	   }
	   printf("\n");
   }
   printf("Carpim:\n");
   for(i=0;i<4;i++){
   	for(j=0;j<4;j++){
   		toplam=0;
   		for(k=0;k<4;k++){
		   
   		    toplam+=matris1[i][k]*matris2[k][j];
		
				
			}
			carp[i][j]=toplam;
			printf("%d\t",carp[i][j]);
		 
	   }
	  printf("\n");
   }   
   
   
   
   
   
   
   
   
   /*
   //Odev #2 satir sutun belirleme
   int diz[12]={1,2,3,4,5,6,7,8,9,10,11,12},i=0,j,sayi,satir;//yukaridaki bazi orneklerde random sayi nasil alinir bunun bilgisi var oradaki bilgilerle dizinin icindeki sayilari randomlayabilirisiniz.
 
   printf("\nLutfen sayi girin:");
   scanf("%d%d",&satir,&sayi);//kullanicidan kac kere asagi kac kere yana gidilecek bilgisi alinacak
   
   int sarp[satir][sayi];
   for(i=0; i<satir; i++){\\i kullanicinin verdigi sayi kadar asagi inecek
   	for(j=0; j<sayi; j++){\\j kullanicinin verdigi sayi kadar yana gidecek
   		sarp[i][j]=diz[sayi*i+j];//icerideki carpma islemi i 1 olduktan sonra islemin dogru bir bicimde devam etmesini sagliyor.
   		printf("%d\t",sarp[i][j]);
	   }
	   printf("\n\n");
   }
   
*/









/* a00 a01 a02 a03      1 2 3   a00 a01 a02 
   a10 a11 a12 a13      2 1 3   a10 a11 a12
   a20 a21 a22 a23      3 3 1   a20 a21 a22
   a30 a31 a32 a33
   
   a0(i)0(j)=a00          */
   
   
   
   
   
   
   
   
   
   
   
 /*  
   int diz[4][4]={{1,2,3},{2,1,3},{3,3,1}},i,j,sorgu=0;
   for(i=0;i<3;i++){
   	for(j=0;j<3;j++){
   		if(diz[i][j]!=diz[j][i]){
   			sorgu=1;
		   }
	   }
   }
   if(sorgu){
   	printf("Simetrik degildir!");
   }
   else{
   	printf("Simetrik");
   }
   */
   
   
   
   
   
   
   
   
   /*
   //kendi girdigimiz eleman ve sayilari siralayan program;
   int pw,dizi[10],eleman,iceri,kontrol,t,i;
   printf("luften eleman giriniz ");
   scanf("%d",&eleman);
   
   for(iceri=0;iceri<eleman;iceri++){
   	scanf("%d",&dizi[iceri]);
   }
   for(iceri=0;iceri<(eleman-1);iceri++){
   	pw=iceri;
   	for(kontrol=iceri+1;kontrol<eleman;kontrol++){
   		if(dizi[pw]>dizi[kontrol]){
   			pw=kontrol;
		   }
	   }
	   if(pw!=iceri){
	   	t=dizi[iceri];
	   	dizi[iceri]=dizi[pw];
	   	dizi[pw]=t;
	   }
   }
   printf("\nListe:\n");
   for(iceri=0;iceri<eleman;iceri++){
   	printf("%d ",dizi[iceri]);
   }
   */
   
   
   
   
   
   
   
   
   
   
   
   /*
   //eleman sayisini girerek rasgele sayilarin duzenli siraya gecmesini saglayan program;
   int dizi[25],i,j,s,temp;
   printf("Lutfen eleman gir ");
   scanf("%d",&s);
   for(i=0;i<s;i++){
   	dizi[i]=rand()%10;
   	printf("%d",dizi[i]);
   }
   printf("\n\n");
   for(i=0;i<s;i++){
   	for(j=i+1;j<s;j++){
   		
   		if(dizi[i]>dizi[j]){                //For example:dizi[i]=5;,dizi[j]=4;
   			temp=dizi[i];                   //temp=5; esitlendi 5 e;
   			dizi[i]=dizi[j];                //5=4;    5 degeri degerini 4 le degistirdi bundan sonra dizi[i]=4;
   			dizi[j]=temp;                   //4=tempL(5);  burdada 4 degeri degerini 5 e atanmis olan temple degistirdi yani bundan sonra dizi[j]=5;
		   }
	   }
   }
   for(i=0;i<s;i++)
   {
   	printf("%d",dizi[i]);
   }
   */
   
   
   
   
   
   
   
   
   
   /*//Sayi bulan program
   int dizi[11]={0,1,2,3,4,5,6,7,8,9,10};               //dizemizin icindeki sayilar (UNUTMA 0 la baslar;
   int sol=0,sag=10,orta,aranan;                       //sol,sag gecisler icin;
   printf("Hangi sayiyi ariyorsun dostum?:");
   scanf("%d",&aranan);                               //dizinin icine girdigimiz sayilardan birinini ariyorsan onu bulmak icin soruyoruz
   while(sol<=sag)                                    //sal, sagi gecerse orda yokur, sol dizide 0 a denktir yerini degistire degirstire sonuca ulasacagiz;
   {
   	orta=(sol+sag)/2;                                 //ortalama aliniyor bu algoritmanin ozelligi bu, aranan sayi ortalamadan buyuk mu yoksa degilmi bunu bulur ve buna gore yolunu cizer;

   	if(dizi[orta]==aranan)                            //eger ortalamayla ayni ise(ilk seferde bulmak zorunda degil dongu sirasinda ortalama degisicek) islem biter;
	   {
   		printf("%d bulundu :)",dizi[orta]);
   		break;                                        //whilelin donmesine gerek yok sade 1 sayi ariyoruz ne de olsa;
	   }
	else if(dizi[orta<aranan])
	{
		sol=orta+1;                                    //eger aradigimiz sayi ortalamadan buyuk ise sola deger artisi yaptiriz ortalmanin ustune ceker yeni ortalamayi belirleriz;
	}
	else
	{
		sag=orta-1;                                    //burda ise tam tersi eger ortalmanin alti ise en yuksek sayimizi asagi cekeriz ve de tekrar bir ortalama alinir.
	}   
   }
   
   //InsaAllah faydali olmustur :>
   */
   
   
   
   
   
   
   
   
   
   
   
 /*  //String                                          // eger  char isim[20]={"Ahmet","Mehmet","Can"}; boyle bisey yaparsaniz hata verir cunki bastaki( [] ) kelime sayisini gosterir, istege bagli olarak atama yapilmayabilir.
   char isim[][20] = {"Ahmet","Mehmet","Can"};         //burda toplam 20 byte alinmistir charin icindeki degerler 1 byte tir cunki;
   char soyisim[10] = {'d','e','m','i','r','\0'};      //hepsi ayni soy isme sahip veya kardes diye dusunulebilir.// \0 ifadesi eger harf harf kodlanacaksa yazilmak zorunda;
   int i,j; 
   i= 0;
   for (; i<=2; i++){
   	printf("%s ",isim[i]);                             //isimleri orn: Ahmet diye tanimladigimizdan %s kullandik fakat 'A','h'...'t' gibi tanilasaydik %c kullanmalliydik;
   	for(j=0; j<6; j++){
   		printf("%c",soyisim[j]);                      // %c alinmasinin sebebi harf harf girilmesi
	   }
	   printf("\n");
	  
   }   
   
  */
 
 
 
 
 
 
 
 
 
 
 
 
 /* char isim[4][20];
  int i; 
   for(i=1;i<3;i++){
   	printf("%d Ogrencinin ismini giriniz:",i);
   	scanf("%s",isim[i]);
   	
   }
   printf("\n");
   puts(isim[1]);
   puts(isim[2]);*/
   
 
 
 
 
 
 
 
 
 
   /*char isim[20];
   
   
   puts("Lutfen isim girin:");
   gets(isim);                                         //biliyorsun gets veri alir yani isim[20] ye veri sagliyor disaridan scanf ten yapmaktan daha pratik degil mi?
   int karakter = strlen(isim);                        //karaktere sayma islemi ozelligi saglamasi icin 'strlen' ekledik.
   printf("%s string %d adet karatker icermektedir.",isim,karakter);
   */
   
   
   
   
   
   
   
   
   
  /* 
   char isim[20];
   char isim2[20];
   
   puts("ogernicinin ismini girin lutfen:");
   gets(isim);
   strcpy(isim2,isim); int karakter=strlen(isim2); printf("%s string %d adet karaker icermektedir.",isim2,karakter);
   */
 
 
 
 
 
 
 
 /*  
   char isim[20];
   char isim2[20];
   puts("Soy ad:");
   gets(isim);
   puts("ad:");
   gets(isim2);
   strcat(isim2,isim);
   int karakter=strlen(isim2);
   printf("%s string %d adet karakter icermektedir.\n",isim2,karakter);
  */
  
  
  
  
  /*
  //strcmp icin; 
   //kiyaslar ASCII de ona gore bir deger girer eger alfabetik bir buyukluk var ise o vakit onu buyuk digerini kucuk ilan veya oncu olarak onu tanimlar.
   char isim [10];
   char isim2[10];
   
   puts("Birsey yaz");
   gets(isim);
   puts("Birsey daha");
   gets(isim2);
   
   int karakterson=strcmp(isim,isim2);
   
   if(karakterson==0)
   {
   	printf("string birbiriryle ayni");
   	
   }
   else if(karakterson>0){
   	printf("ilk string alfebetik olarak ikinicde sonra gelmektedir");
   }
   else{
   	printf("ilk string alfebetik olarak ikinicde once gelmektedir");
   }*/
   
   
  
  
  /* //ucgen
  int i,j,k,say;
  printf("sayi girin;");
  scanf("%d",&say);
   printf("\n");
   for(i=0;i<=say;i++)
   {
   	if(k==say){
   		i=0;
	   }
   	if(k>=say){
   		k++;
   		for(j=say;j>i;j--)
	   {
   		printf("   *");
	   }
	   printf("\n");
	   if(k==1+say*2){
	   	break;
	   }
   		continue;
	   }
	   
   	k+=1;
   	
   	for(j=0;j<i;j++)
	   {
   		printf("   *");
	   }
	   printf("\n");
	   
   }
   */
   
   
   
   
   
   /*//strlen acilim;
   char isim[20];
   int karaktersay=0;
   puts("Lutfen isiminizi giriiniz?");
   gets(isim);
   printf("\n");
   for(;isim[karaktersay]!='\0';karaktersay++){
   	printf("%c",isim[karaktersay]);
   }
   printf("\n%d",karaktersay);
   */
   
   
   
   
   
   /*//strcpy acilimi
   char isim[20],isim2[20];
   int i=0,j;
   do{
   i+=1;
   scanf("%c",&isim[i]);
   isim2[i]=isim[i];
  
   }while(isim[i]!='\n');
   
   printf("%d",i);
   printf("\n");
   for(j=0;j<i;j++){
   	printf("%c",isim2[j]);
   }
   */
   /*//strcat
   char soyad[20],isim[20];
   int i;
   puts("Lutfen soy ad:");
   gets(soyad);
   puts("Lutfen isim:");
   gets(isim);
   
   printf("%s%s",isim,soyad);
   */
   
   
   
   
   
   
   /*
   //strcmp acilim
   char isim1[20],isim2[20];
   int i=0,j=0,ox=0,xox=0;
   int  c=0;
   	printf("Kullanici adinizi giriniz:");
   // birinci kullanici
   
   do{
   	i++;
   	scanf("%c",&isim1[i]);
   	if(i==1)
	   {
   		if(isim1[1]>='A' && isim1[i]<='Z')
   		{	
   		 ox=1;
		}
	   }  
	   j=isim1[1];
   	  
   }while(isim1[i]!='\n'); 
   int k;
   //ikinci kullanici
   printf("\n2.kullanici adini girin:");
   do{
   	k++;
   	scanf("%c",&isim2[k]);
   	if(k==1){
	   	
   		if(isim2[1]>='A' && isim2[1]<='Z'){	
   		 xox=1;}
	   }  
	   c=isim2[1];
	}while(isim2[k]!='\n'); 
	printf("%d\n",c);
	
	if(ox){
	printf("Bas harfi buyuk\n");}
	else{
   	printf("bas harf kucuk\n");
	   }
   
    if(xox){
   	printf("Bas harfi buyuk\n");}
   else{
   	printf("bas harf kucuk\n");}
   
   if(j==c){
  	printf("kaan");
	}
	else if(j>c)
	{
	printf("ikinci oncelikli");
	}
   else{
   	printf("birinci oncelikli");
   }
   
   */
   /*
   char kullaniciG[20];
   int i=0,karakter;
   char gecici;
   puts("isim:");
   gets(kullaniciG);
   
   karakter=strlen(kullaniciG);
    printf("%c",kullaniciG[3]);
   for(i=0;i<karakter/2;i++){
   	gecici=kullaniciG[i];
   	kullaniciG[i]=kullaniciG[karakter-i-1];
   	kullaniciG[karakter-i-1]=gecici;}
   	
   puts("ters:");
   puts(kullaniciG);
   */
   /*//Alistirma harf,kelime hesaplama
   char isim[4200];//4200 harf yazabilirsiniz;
   int i=0;
   int bos=1,j=0;
   gets(isim);
   while(isim[i]!='\0'){
   	i++;
   	if(isim[i]==' '){
	    bos++;//kelimeleri saymak icin
		j--;//harfleriden bosluklari cikarmak icin
	   }
   }
   printf("harf:%d",i+j);
   printf("\nkelime:%d",bos);
   */
   
   
   
   
   /*//iki stringi(yazi) ayni olup olmadigini sorgular.  
  
   char ilkstring[20], ikincistring[20];
   int karakter, karakter2, i, karaktersorgu = 0;
   
   puts("Sirasiyla iki isim girin:");//output yapar ve disari printf gibi sozcukleri cikarir;
   gets(ilkstring);//veriyi ilkstring dizimize atar(klavyeden alinan veriyi);
   gets(ikincistring);
   
   karakter = strlen (ilkstring);//kac harften meydana geldiklerini ogrenmek icin 'strlen' ifadesiyle kullandik;
   karakter2 = strlen (ikincistring);
  
   if(karakter != karakter2){//klavyeden girilen harf sayisi eslesiyormu?
   	karaktersorgu=1;
   }
   else{
   	
	   for(i=0; i < karakter; i++){ //klavyedekiler eslesiyorsa bir donsunler
	   	
   		if(tolower (ilkstring[i]) != tolower (ikincistring[i])){//harf sayilarindan sonra harflerin eslelip eslesmedigine bakiliyor bu durumda buyuk kucuk ayrimi yapmamak icin tolower lar ile yapiliyor toupper larda kullanilabilirdi.
   			karaktersorgu = 1;
   			break;
		   }
	   }
   }
   if(karaktersorgu){//eger if blogumuzun sarti olan harfler uyusmuyorsa ya uyduysa o vakit karaktersorgu 1 olur ve de burdaki sonucu  verir.
   	printf("esit degil bebegim");
   }
   else{
   	printf("Esitler");
   }
   */
   
   
   
   
   /*
   //#1 Odev(dizi:) Palindrom  //acemi eserim
   char isim[20],geci,duzeltme[20];
   int i,b=0,karakter=0;
   puts("Promo gir:");
   gets(isim);
   karakter=strlen(isim);
   
    for(i=0;i<karakter/2;i++){
   	geci=isim[i];
   	isim[i]=isim[karakter-i-1];
   	isim[karakter-i-1]=geci;
   	}
    puts(isim);
    for(i=0;i<karakter;i++){
    isim[i]=duzeltme[i];
	}
    for(i=0;i<karakter/2;i++){
    geci=duzeltme[i];
    duzeltme[i]=duzeltme[karakter-i-1];
    duzeltme[karakter-i-1]=geci;
	}
    for(i=0;i<karakter;i++){
    if(isim[i]=duzeltme[i]){
	b+=1;
	}
	}
	printf("%d,kar:%d",b,karakter);
    if(b==karakter){
   	printf("Palindrom");
    }
    else{
   	printf("Palindrom degildir!!");
    }
    
   */
   
   
   
   /*
    //#1 Odev(dizi:) Palindrom  //hocanin eseri;
    char kullanici[20];
    int i,sayac;
    int sorgu=1;
   
    puts("Lutfen sorgulanacak stringi girin");
    gets(kullanici);
    sayac=strlen(kullanici);
    for(i=0;i<sayac/2;i++){
   	if(kullanici[i]!=kullanici[sayac-i-1]){
   	sorgu=0;
   	break;
	}
    }   
   
    if(sorgu){
   	printf("Palinrdomdur.");
    }
    else{
   	printf("Degildir.");
    }
   */
   
   
   
   
   /*
   //girilen stringin harflerini degistiren program.
   char isim[100];
   int i,yeni,eski,sayac=0;
   sayac=0;
   puts("lutfen isim girin");
   gets(isim);
  
   puts("Degistirmek istediginiz stringi girin");
   scanf("%c",&eski);
    fflush(stdin);//bufferi bosaltmak icin kullanilir.
   puts("Hangi stringle degistirlimesini istiyorsunuz?:");
   scanf("%c",&yeni);
   
   for(i = 0; isim[i] != '\0'; i++){
   	if(isim[i] == eski){
   		isim[i] = yeni;
   		sayac++;
	   }
	}
   for(i = 0; isim[i] != '\0'; i++){
   	printf("%c",isim[i]);
   }
   printf("\n");
   printf("%d adet harf bulundu,%c, %c ile degisti",sayac,yeni,eski);
   */
   
   
   
   
    /*
   //#1 Odev 1.stringin icinde 2. string var mi kontrolu yapar.//me
   char isim[20],isim2[20];
   int i,j=0,karakter,karakter2;
   int sorgu=0;
   puts("sirasiyla iki string girin");
   gets(isim);
   gets(isim2);
   karakter=strlen(isim);
   karakter2=strlen(isim2);
   for(i=0;i<karakter;i++){
   	if(isim[i]==isim2[j] && isim[i+1]==isim2[j+1]){
   		j++;
	   }
   }
   if(karakter2==j){
   	printf("gecer");
   }
   else{
   	printf("gecmez");
   }
   */
   
   /*
   
   //#1 Odev 1.stringin icinde 2. string var mi kontrolu yapar.//Hoca
   char isim[20],isim2[20];
   int i=0,j=0,devam=0,sorgu;
   puts("sirasiyla iki string girin");
   gets(isim);
   gets(isim2);
   while(isim[i]!='\0'){//Eger Null sa kapanicak demek oluyor
   	i=devam;            //devama esti cunki atlama olmasini engelliyor
	j=0;
   	sorgu=1;//eger sorgu bir olarak if e kadar giderse dongu olumlu bir bicimde biter yani gecer.
	   while(isim2[j]!='\0'){//harflerde olusabilecek eee ss jjj gibi birden fazla yazmalarda gecen kelimeyi yakalayamiyabiliyor ondan dolayi isim2 ye atandi
	   	if(isim[i] != isim2[j]) 
		   {
	   		sorgu=0;
	   		break;
		   }
	   	j+=1;
	   	i++;
	   }
	   if(sorgu){
	   	printf("Geciyor");
	   	break;
	   }
	   devam++;
   }
   */
   
   
   
   
   
   
   
   
   
   
   /*#2 Odev buyuk harf kucuk olur kucuk harf buyuk;
   char isim[100];
   int i,sayi;
   printf("string girin:");
   gets(isim);
   sayi=strlen(isim);
   for(i=0;i<sayi;i++){
   	if(isim[i]>='A'&& isim[i]<='Z'){
   		isim[i]=tolower(isim[i]);
	}
	else{
		isim[i]=toupper(isim[i]);
	}
   }
   puts(isim);
   */
  /* 
   //#3 Odev 
   char anga[20],anga2[20];
   int  j,i=0,karakter=0;
   puts("1.string girin");
   gets(anga);
   puts("2.string girin");
   gets(anga2);
   while(anga[i]!='\0'){
   
   	for(j=0;anga2[j]!='\0';j++){
   		if(anga[i]==anga2[j]){
   			karakter+=1;
		   }
	   }
	i++;
   }
   if(i!=karakter){
   	printf("Hata");
   }
   else{
   	printf("Dogru");
   }
   */
   /*Bas harfi buyuk almak ve bas harflerden kisatlama yapmak icin yapildi.
   char isim[100];
   char gec;
   int i=0,karakter;
   puts("isim girin:");
   gets(isim);
   while(isim[i]!='\0'){
   	if(isim[i]==isim[0] || isim[i-1]==' ')
	   {
   		isim[i]=toupper(isim[i]);
   		printf("%c",isim[i]);
	   }
	i++;
   }
   printf("\n\n");
   puts(isim);   
   */
   
    char metin[1000], ch;
    int sayi = 0,i;

    printf("Metin: ");
    fgets(metin, sizeof(metin), stdin);
    printf("aranacak harfi girin: ");
    scanf("%c", &ch);
    for (i = 0; metin[i] != '\0'; ++i) {
        if (ch == metin[i])
            ++sayi;
    }
    
    printf("Frekans %c = %d", ch, sayi);


	return 0;
}
