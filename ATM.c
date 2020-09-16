#include<stdio.h>

main(){
	int sodu=1000000, nap, a;
	printf("Hang Bank xin chao quy khach");
	printf("\nSo du hien tai cua ban la:  %d VND\n", sodu);
	printf("Quy khach vui long nhap so tien da nap tien vao tai khoan: ");
	scanf("%d", &nap);
		sodu=nap+sodu;
		printf("So du hien tai cua ban la:  %d VND\n", sodu);
	
		char b;
		printf("Ban co muon rut tien khong?");
	
		fflush(stdin);
		scanf("%c",&b);
	
		if(b=='n'){printf("Cam on quy khach khi da su dung dich vu"); return 0;}
			else if (b!='y') {printf("Cam on quy khach khi da su dung dich vu"); return 0;}
				else
				printf("Luu y so tien phai la boi so cua 50.000VND  \n");
				printf("Nhap so tien ban muon rut:  \n");
				fflush(stdin);
				scanf("%d",&a);
	
				if (a>sodu) {printf("So tien rut vuot qua so du hien tai"); return 0;}
				if(a>3000000){ printf("So tien vuot qua gioi han rut"); return 0;}
					else if ((a%50000) !=0){printf("Nhap lai so tien cua ban: "); return 0;}
					else printf("Giao dich dang duoc thuc hien\n"); printf("\n Xin vui long nhan lai the sau do nhan tien")	;
}		
