// lab2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

class Labyrinth{
	int**lq;
	int xs, ys, xf, yf;
	Labyrinth(int dim1, int dim2, int**lab, int xstart, int ystart, int xfin, int yfin) //конструктор 
	{
		//инициализация
		lq=new int*[dim2];
		for (int i=0; i<dim2; i++)
		{
			lq[i]=new int[dim1];
		}
		//заполняем массив
		for (int i=0; i<dim1; i++)
		{
			for (int j=0; j<dim2; j++)
			{
				lq[i][j]=lab[i][j];
			}
		}
		//переменные
		xs=xstart;
		ys=ystart;
		xf=xfin;
		yf=yfin;

	};
};

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

