#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include"Header.h"

using namespace std;
char f;
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	do
	{
		int N;
		printf("Выберите задание");
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{

			Magazin *TutiFruti;
			TutiFruti = (Magazin*)calloc(11, sizeof(Magazin));
			for (int i = 0; i < 11; i++)
			{
				NewName((TutiFruti + i)->Name);
				Made((TutiFruti + i)->Madein);
				(TutiFruti + i)->year = 1999 + rand() % 20;
				(TutiFruti + i)->count = 1 + rand() % 30;
				(TutiFruti + i)->price = 100 + rand() % 15000;
			}
			int PriceAll = 0;
			int Max = 0;
			int Maxi;
			for (int i = 0; i < 11; i++)
			{
				PrintInfoMagazine(TutiFruti + i);
				if (Max < (TutiFruti + i)->count)
				{
					Maxi = i;
					Max = (TutiFruti + i)->count;
				}
			}
			printf("--------------\n");
			printf("Самое большое колличество\n");
			PrintInfoMagazine(TutiFruti + Maxi);

		}
		break;
		case 2:
		{
			Notebook *PC;
			PC = (Notebook*)calloc(11, sizeof(Notebook));
			for (int i = 0; i < 11; i++)
			{
				NewNote((PC + i)->Name);
				(PC+i)->Ghrz = (1 + rand() % 100) / (1 + rand() % 10);
				(PC+i)->DDr = 8 + rand() % 16;
				(PC+i)->Dvd = 0 + rand() % 1;
				(PC+i)->price = 60000 + rand() % 500000;
			}
			for (int i = 0; i < 11; i++)
			{
				if ((PC+i)->DDr>10)
				{
					PrintInfoPC(PC + i);
			    }
			}

		}
		break;
		case 3:
		{
			student *Stud;
			Stud = (student*)calloc(11, sizeof(student));
			for (int i = 0; i < 11; i++)
			{
				NewName((Stud + i)->Name);
				(Stud + i)->year = 1990 + rand() % 3;
				(Stud + i)->Group = 1 + rand() % 3;
				(Stud + i)->Fiz = 50 + rand() % 100;
				(Stud + i)->Mat = 50 + rand() % 100;
				(Stud + i)->Inform = 50 + rand() % 100;
			}
			int count = 0;
			for (int i = 0; i < 11; i++)
			{
				if (2018 - (Stud + i)->year > 19)
				{
					PrintInfStudent(Stud + i);
					count++;
				}
			}
		}
		break;
		case 4:
		{
			Rab *office;
			office = (Rab*)calloc(11, sizeof(Rab));
			for (int i = 0; i < 11; i++)
			{
				NewName((office + i)->Name);
				(office + i)->year = 1930 + rand() % 80;
				(office + i)->zp = 40000 + rand() % 200000;
				prof((office + i)->Prof);
				Study((office + i)->Study);
			}
			for (int i = 0; i < 11; i++)
			{
				if (2018 - (office + i)->year>60)
				{
					PrintInfoOffice((office + i));
				}
			}

		}
		break;
		case 5:
		{
			Magazin *TutiFruti;
			TutiFruti = (Magazin*)calloc(11, sizeof(Magazin));
			for (int i = 0; i < 11; i++)
			{
				NewName((TutiFruti + i)->Name);
				Made((TutiFruti + i)->Madein);
				(TutiFruti + i)->year = 1999 + rand() % 20;
				(TutiFruti + i)->count = 1 + rand() % 30;
				(TutiFruti + i)->price = 100 + rand() % 15000;
			}
			int PriceAll = 0;
			int Max = 0;
			int Mini;			int Maxi;
			for (int i = 0; i < 11; i++)
			{
				if (Max< (TutiFruti + i)->price)
					Maxi = i;
			}
			printf("Самый Дорогой товар\n");
			PrintInfoMagazine(TutiFruti + Maxi);
		}
		break;
		case 6:
		{
			Notebook *PC;
			PC = (Notebook*)calloc(11, sizeof(Notebook));
			for (int i = 0; i < 11; i++)
			{
				NewNote((PC + i)->Name);
				(PC + i)->Ghrz = (1 + rand() % 100) / (1 + rand() % 10);
				(PC + i)->DDr = 8 + rand() % 16;
				(PC + i)->Dvd = 0 + rand() % 1;
				(PC + i)->price = 60000 + rand() % 500000;
			}
			int ric=0;
			for (int i = 0; i < 11; i++)
			{
				ric += (PC + i)->price;
			}
			printf("Средня цена %d\n", ric / 11);
		}
	case 7:
		{
			Rab *office;
			office = (Rab*)calloc(11, sizeof(Rab));
			for (int i = 0; i < 11; i++)
			{
				NewName((office + i)->Name);
				(office + i)->year = 1930 + rand() % 80;
				(office + i)->zp = 40000 + rand() % 200000;
				prof2((office + i)->Prof);
				Study((office + i)->Study);
			}
			for (int i = 0; i < 11; i++)
			{
				if (strcmp((office+i)->Prof,"Инженер")==0)
				{
					PrintInfoOffice((office + i));
				}
			}
		}
		break;
	case 8:
	{
		student *Stud;
		Stud = (student*)calloc(11, sizeof(student));
		for (int i = 0; i < 11; i++)
		{
			NewName((Stud + i)->Name);
			(Stud + i)->year = 1990 + rand() % 3;
			(Stud + i)->Group = 1 + rand() % 3;
			(Stud + i)->Fiz = 50 + rand() % 100;
			(Stud + i)->Mat = 50 + rand() % 100;
			(Stud + i)->Inform = 50 + rand() % 100;
		}
		int count = 0;
		for (int i = 0; i < 11; i++)
		{
			count += (Stud + i)->Fiz;
			PrintInfStudent(Stud + i);
		}
		printf("Средняя оценка по физике %d\n", count / 11);
	}
	break;
	case 9:
	{

		Magazin *TutiFruti;
		TutiFruti = (Magazin*)calloc(11, sizeof(Magazin));
		for (int i = 0; i < 11; i++)
		{
			NewName((TutiFruti + i)->Name);
			Made((TutiFruti + i)->Madein);
			(TutiFruti + i)->year = 1999 + rand() % 20;
			(TutiFruti + i)->count = 1 + rand() % 30;
			(TutiFruti + i)->price = 100 + rand() % 15000;
		}
		for (int i = 0; i < 11; i++)
		{
			if ((TutiFruti + i)->year>2)
			{
				PrintInfoMagazine(TutiFruti + i);
			}
		}

	}
	break;
	case 10:
	{
		Notebook *PC;
		PC = (Notebook*)calloc(11, sizeof(Notebook));
		for (int i = 0; i < 11; i++)
		{
			NewNote((PC + i)->Name);
			(PC + i)->Ghrz = (1 + rand() % 100) / (1 + rand() % 10);
			(PC + i)->DDr = 8 + rand() % 16;
			(PC + i)->Dvd = 0 + rand() % 1;
			(PC + i)->price = 60000 + rand() % 500000;
		}
		for (int i = 0; i < 11; i++)
		{if((PC + i)->Dvd==1)
			PrintInfoPC(PC + i);
		}

	}
	break;
		}
		printf("Хотите продолжить y-da");
		scanf("%c", &f);
	} while (f == 'y');
}