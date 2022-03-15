#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
	float cash=5000, x; 
	char username[20];
	int password=9876; //Sifreyi kullanýcýdan almak yerine ben belirledim.
	int option;
	double account_number; //Kullanýcýdan transfer iþlemi için istenilen hesap numarasý
	

	printf("Welcome To AkifBank\n\n");
	printf("Please enter your username: "); 
	scanf("%d", &username);
	printf("Please enter your password: "); 
	scanf("%d", &password);
	
	while(password!=9876)
	{
		printf("Wrong Password. Try again...\n");
		printf("Please enter your password: ", password); //Sifre kontrolü icin while yapýsý kullanýldý.Sifre dogru girilmedigi sürece tekrar sorgulanýyor.
	    scanf("%d", &password);
		if (password==9876)
		{
			break;
		}
	}
	
	printf("The Password Is Matched... \n\n");

	
	printf("...The System Is Loading.Please Wait...\n\n"); //3 saniye bekleme süresi.
    Sleep( 3000 );  

   
	printf("MENU\n");
	printf("***************\n");
	printf("1-BALANCE\n");
	printf("2-DEPOSIT\n");
	printf("3-WITHDRAW\n");
	printf("4-MONEY ORDER\n");
	printf("5-EXIT\n");
	printf("***************\n");
	scanf("%d" ,&option);

	
	while(option!=1 && option!= 2 && option!=3 && option!= 4 && option!= 5 ) //Sadece menudeki secenekler girilebilir.
	{
		printf("Please press 1,2,3,4 and 5...\n");
		Sleep(1000);
		    printf("MENU\n");
            printf("***************\n");
            printf("1-BALANCE\n");
            scanf("%d" ,&option);
            printf("2-DEPOSIT\n");
            scanf("%d" ,&option);
            printf("3-WITHDRAW\n");
            scanf("%d" ,&option);
            printf("4-MONEY ORDER\n");
            scanf("%d" ,&option);
            printf("5-EXIT\n");
            scanf("%d" ,&option);
            printf("***************\n");
            scanf("%d" ,&option);
            return 0;
		
	}

	switch (option)
	{
	case 1:

		printf("Your Balance is 5000 TL\n\n");
		break;
		
	case 2:
			printf("Enter the amount of money: ");
			scanf("%f" , &x);
			while(x<0)
			{
				printf("You Can Not Enter A Negative Value...\n"); //Negatif sayi kontrolü
				printf("Enter the amount of money: ");
			    scanf("%f" , &x);
				if(x>0)
				{
					break;
				}
			}
			printf("New cash= %5.2f\n", cash=cash+x);



			break;
		
		case 3:
		
			printf("Enter the amount of money: ");
			scanf("%f" , &x);
			while(x>5000)
			{
				printf("Insufficient Funds...\n"); //Bakiye kontrolü
				printf("Enter the amount of money: ");
			    scanf("%f" , &x);
					
			    if(x<5000)
			    {
			     break;
			    }
			
			}
			printf("New cash= %5.2f\n", cash=cash-x);
			
			break;
			
		
		case 4:
		
			printf("Please enter a account number which is transfer to money: \n");
			scanf("%f",&account_number);
			printf("Enter the amount of money: \n");
			scanf("%f", &x);
			while(x>5000)
			{
				printf("Insufficient Funds...\n");
				printf("Enter the amount of money: ");
			    scanf("%f" , &x);
					
			    if(x<5000)
			    {
			     break;
			    }
			}
			printf("Transfer Is Completed...\n");
			printf("New cash= %5.2f\n", cash=cash-x);
			break;

		case 5:
			printf("Thanks For Choosing Us "); //Mesajý verdikten sonra 1 saniye bekler sonra sistem otomatik kapanýr.
			Sleep( 10000 ); 
			return 0;
			break;

		
	default:
		return 0;
		break;
	}
	   _getch();
  }
	

