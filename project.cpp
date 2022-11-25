// struct(����ü) ����
/*
#include <stdio.h>

typedef struct Points
{
	int a; // �ʱ�ȭ �����൵ ��

}Pt; // Pt�� �����Ǹ� �ϰڴ�, typedef ���� ���� ����


void main()
{
	
	Pt p = { 10 };
	Pt* pp = &p;
	printf("P.a = %d \n", p.a); // �Ϲ� ������ �����ϸ� �̷���
	printf("Pt->p = %d \n", pp->a); // ������ ������ �����ϸ� �̷��� 
	//	Points p = { 10 };
}


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4

#define X 10
#define Y 10

typedef struct PlayerPos
{
	int pxPos;
	int pyPos;
}Ppos;

typedef struct PlayerMap
{
	int map[Y][X] // X Y ������ ����,  Y�� �켱 
		= {
			{1,1,1,1,1,1,1,1,1,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,1,1,1,1,1,1,1,1,1}
		};
}Pm;

void MapSpace(PlayerPos, int(*)[X]);
void AutoMove(PlayerPos, int(*)[X], int);


void main()
{
	srand(time(NULL));

	Ppos p = { 1,1 }; // struct �������� �������
	Pm pm; // �ʱ�ȭ�� �̹� �Ǿ�����


	int controls = 0;// �����Լ� ���������� ���� ����, ������ ���� ���鶩 ����ü�� ����
	for (int y = 0; y < Y; y++)
	{
		for (int x = 0; x < X; x++)
		{
			if (p.pyPos == y && p.pxPos == x) {
				printf("P ");

			}
			else {
				switch (pm.map[y][x])
				{
				case 0:
					printf("  ");
					break;
				case 1:
					printf("��");
					break;



				}
			}
		}



		controls = (rand() % 4) + 1; // �����¿�ϱ� 4��
		MapSpace(p, pm.map);
		AutoMove(p, pm.map, controls);

	}
}

void Mapspace(PlayerPos ppos, int(*p)[X])
{
	for (int y = 0; y < Y; y++)
	{
		for (int x = 0; x < X; x++)
		{
			if (ppos.pyPos == y && ppos.pxPos == x) {
				printf("P ");

			}
			else {
				switch (p[y][x])
				{
				case 0:
					printf("  ");
					break;
				case 1:
					printf("��");
					break;
				}
			}
		}

	}
}

void AutoMove(PlayerPos ppos, int(*)[X], int ct1)
{
	switch (ct1)
	{
		case UP:
			if (p[ppos.pyPos][ppos.pxPos] == 1)
			{
				ppos.pyPos--;
			}
			ppos.pyPos++;
			break;
		case DOWN:
			if (p[ppos.pyPos][ppos.pxPos] == 1)
			{
				ppos.pyPos++;
			}
			ppos.pyPos--;
			break;
		case LEFT:
			if (p[ppos.pyPos][ppos.pxPos] == 1)
			{
				ppos.pxPos++;
			}
			ppos.pxPos--;
			break;

		case RIGHT:
			if (p[ppos.pyPos][ppos.pxPos] == 1)
			{
				ppos.pxPos--;
			}
			ppos.pxPos++;
			break;


	}


}
// ����ü�� �Ϲ� ���� ���·� ����ϰ� �ֱ⶧���� ���������� ������ ��. ���� �Լ��� �̿��ϸ� ��簪�� ����� , ���������� �ʿ�, �̴� �����ͷ�
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>



#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4



#define X 10
#define Y 10

typedef struct PlayerPos

{
	int pXPos;
	int pYPos;
}Ppos;



typedef struct PlayerMap

{

	int map[Y][X]

		= {
			{1,1,1,1,1,1,1,1,1,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,1,1,1,1,1,1,1,1,1}
	};

}Pm;



void MapSpace(PlayerPos, int(*)[X]);
void AutoMove(PlayerPos, int(*)[X], int);



void main()

{
	srand(time(NULL));

	Ppos p = { 1,1 };
	Pm pm;

	int controls = 0;

	controls = (rand() % 4) + 1;
	MapSpace(p, pm.map);
	AutoMove(p, pm.map, controls);
}



void MapSpace(PlayerPos ppos, int(*p)[X])

{

	for (int y = 0; y < Y; y++)

	{

		for (int x = 0; x < X; x++)

		{

			if (ppos.pYPos == y && ppos.pXPos == x) {

				printf("P ");

			}

			else {

				switch (p[y][x])

				{

				case 0:

					printf("  ");

					break;

				case 1:

					printf("��");

					break;

				}

			}

		}

		printf("\n");

	}

}



void AutoMove(PlayerPos ppos, int(*p)[X], int ctl)

{
	switch (ctl)
	{
	case UP:
		if (p[ppos.pYPos][ppos.pXPos] == 1)

		{

			ppos.pYPos--;

		}

		ppos.pYPos++;

		break;



	case DOWN:

		if (p[ppos.pYPos][ppos.pXPos] == 1)

		{

			ppos.pYPos++;

		}

		ppos.pYPos--;

		break;



	case LEFT:

		if (p[ppos.pYPos][ppos.pXPos] == 1)

		{

			ppos.pXPos++;

		}

		ppos.pXPos--;

		break;



	case RIGHT:

		if (p[ppos.pYPos][ppos.pXPos] == 1)

		{

			ppos.pXPos--;

		}

		ppos.pXPos++;

		break;

	}

}

*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>



#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4



#define X 10
#define Y 10

typedef struct PlayerPos

{
	int pXPos;
	int pYPos;
}Ppos;



typedef struct PlayerMap

{

	int map[Y][X]

		= {
			{1,1,1,1,1,1,1,1,1,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,0,0,0,0,0,0,0,0,1},
			{1,1,1,1,1,1,1,1,1,1}
	};

}Pm;



void MapSpace(PlayerPos, int(*)[X]);
void AutoMove(PlayerPos, int(*)[X], int);



void main()

{
	srand(time(NULL));

	Ppos p = { 1,1 };
	Pm pm;

	int controls = 0;

	controls = (rand() % 4) + 1;
	AutoMove(&p, pm.map, controls);
	MapSpace(&p, pm.map);
	
}



void MapSpace(PlayerPos *ppos, int(*p)[X])

{

	for (int y = 0; y < Y; y++)

	{

		for (int x = 0; x < X; x++)

		{

			if (ppos->pYPos == y && ppos->pXPos == x) {

				printf("P ");

			}

			else {

				switch (p[y][x])

				{

				case 0:

					printf("  ");

					break;

				case 1:

					printf("��");

					break;

				}

			}

		}

		printf("\n");

	}

}



void AutoMove(PlayerPos *ppos, int(*p)[X], int ctl)

{
	switch (ctl)
	{
	case UP:
		if (p[ppos->pYPos][ppos->pXPos] == 1)

		{

			ppos->pYPos--;

		}

		ppos->pYPos++;

		break;



	case DOWN:

		if (p[ppos->pYPos][ppos->pXPos] == 1)

		{

			ppos->pYPos++;

		}

		ppos->pYPos--;

		break;



	case LEFT:

		if (p[ppos->pYPos][ppos->pXPos] == 1)

		{

			ppos->pXPos++;

		}

		ppos->pXPos--;

		break;



	case RIGHT:

		if (p[ppos->pYPos][ppos->pXPos] == 1)

		{

			ppos->pXPos--;

		}

		ppos->pXPos++;

		break;

	}

}

*/

#include<stdio.h>

#include<stdlib.h>

#include<time.h>

#include<Windows.h>



#define UP 1

#define DOWN 2

#define LEFT 3

#define RIGHT 4



#define X 10

#define Y 10



typedef struct PlayerPos

{

	int pXPos;

	int pYPos;

}Ppos;



typedef struct PlayerMap

{

	int map[Y][X]

		= {

			{1,1,1,1,1,1,1,1,1,1},

			{1,0,0,0,0,0,0,0,0,1},

			{1,0,0,0,0,0,0,0,0,1},

			{1,0,0,0,0,0,0,0,0,1},

			{1,0,0,0,0,0,0,0,0,1},

			{1,0,0,0,0,0,0,0,0,1},

			{1,0,0,0,0,0,0,0,0,1},

			{1,0,0,0,0,0,0,0,0,1},

			{1,0,0,0,0,0,0,0,0,1},

			{1,1,1,1,1,1,1,1,1,1}

	};

}Pm;



void MapSpace(PlayerPos*, int(*)[X]);

void AutoMove(PlayerPos*, int(*)[X], int);



void main()

{


	srand(time(NULL));



	Ppos p = { 1,1 };

	Pm pm;



	int controls = 0;


	while (1)
	{
		controls = (rand() % 4) + 1;
		AutoMove(&p, pm.map, controls);
		MapSpace(&p, pm.map);
		Sleep(500);
		system("cls");
	}
	


}



void MapSpace(PlayerPos* ppos, int(*p)[X])

{


	for (int y = 0; y < Y; y++)

	{

		for (int x = 0; x < X; x++)

		{
			
			if (ppos->pYPos == y && ppos->pXPos == x) {

				printf("P ");

			}

			else {

				switch (p[y][x])

				{

				case 0:

					printf("  ");

					break;

				case 1:

					printf("��");

					break;

				}

			}

		}

		printf("\n");

	}

}



void AutoMove(PlayerPos* ppos, int(*p)[X], int ctl)

{
		printf("ctl = %d\n", ctl);
		switch (ctl)

		{

		case UP:
			ppos->pYPos--;
			if (p[ppos->pYPos][ppos->pXPos] == 1)


			{

				ppos->pYPos++;

			}

			

			break;



		case DOWN:
			ppos->pYPos++;
			if (p[ppos->pYPos][ppos->pXPos] == 1)

			{

				ppos->pYPos--;

			}

			

			break;



		case LEFT:
			ppos->pXPos++;
			if (p[ppos->pYPos][ppos->pXPos] == 1)

			{

				ppos->pXPos--;

			}

			

			break;



		case RIGHT:
			ppos->pXPos--;
			if (p[ppos->pYPos][ppos->pXPos] == 1)

			{

				ppos->pXPos++;

			}

			

			break;

		}
	

}