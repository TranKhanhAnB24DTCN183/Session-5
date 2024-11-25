#include<stdio.h>
int main()  {
	 int choice;
     float num1,num2,num3,sum,ave,temp,a,b,c;
    do {
        printf("MENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So lon nhat\n");
         printf("5. So be nhat\n");
        printf("6. Thoat\n");

     
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
	
        if (choice == 6) {
            printf("Dung lai!!!\n");
            break;
            
        }
      	  switch (choice) {
            case 1:
            	printf("Nhap vao so thu nhat:\n");
            	scanf("%f",&num1);
                fflush(stdin);
				printf("Nhap vao so thu hai:\n");
            	scanf("%f",&num2);
            	fflush(stdin);
                printf("Nhap vao so thu ba:\n");
            	scanf("%f",&num3);
            	fflush(stdin);
            	break;
            case 2:
            	printf("Nhap vao so thu nhat:\n");
            	scanf("%f",&num1);
                fflush(stdin);
				printf("Nhap vao so thu hai:\n");
            	scanf("%f",&num2);
            	fflush(stdin);
                printf("Nhap vao so thu ba:\n");
            	scanf("%f",&num3);
            	fflush(stdin);
            	printf("Tong 3 so: %.2f\n", sum=num1 + num2 + num3);
              	break;
			case 3:
			 	printf("Nhap vao so thu nhat:\n");
            	scanf("%f",&num1);
                fflush(stdin);
				printf("Nhap vao so thu hai:\n");
            	scanf("%f",&num2);
            	fflush(stdin);
                printf("Nhap vao so thu ba:\n");
            	scanf("%f",&num3);
            	fflush(stdin);
            	
            	printf("Trung binh cong cua 3 so: %.2f\n", ave=(num1 + num2 + num3)/3);
			    break;
			case 4:
				printf("Nhap vao so thu nhat:\n");
            	scanf("%f",&a);
                fflush(stdin);
				printf("Nhap vao so thu hai:\n");
            	scanf("%f",&b);
            	fflush(stdin);
                printf("Nhap vao so thu ba:\n");
            	scanf("%f",&c);
            	fflush(stdin);
            	 if (a > b) {
                        a = a + b;
                        b = a - b;
                        a = a - b;
                }
                 if (a > c) {  
                       a = a + c;
                       c = a - c;
                       a = a - c;
                 }
                 if (b > c) {
                       b = b + c;
                       c = b - c;
                       b = b - c;
                 }

				 printf("So lon nhat la:%.2f\n",c);
				 break;
		     case 5:
		     	printf("Nhap vao so thu nhat:\n");
            	scanf("%f",&a);
                fflush(stdin);
				printf("Nhap vao so thu hai:\n");
            	scanf("%f",&b);
            	fflush(stdin);
                printf("Nhap vao so thu ba:\n");
            	scanf("%f",&c);
            	fflush(stdin);
            	 if (a > b) {
                        a = a + b;
                        b = a - b;
                        a = a - b;
                }
                 if (a > c) {  
                       a = a + c;
                       c = a - c;
                       a = a - c;
                 }
                 if (b > c) {
                       b = b + c;
                       c = b - c;
                       b = b - c;
                 }

				 printf("So be nhat la:%.2f\n",a);
				 break;
		    default:
                printf("Thu lai ngay\n");
				 
          }
		  } while(choice != 6);
	
         
            	
	return 0;
}
