// Lab2_prim1.cpp: определяет точку входа для консольного приложения.
// Primer 1
#include "stdafx.h"
#include <stdio.h> 
#include <iostream>
#include <math.h> 
#include <cstdlib>
#include <mpi.h>


int main(int argc, char **argv)
{
	int size, rank; MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &size); MPI_Comm_rank(MPI_COMM_WORLD, &rank); printf("SIZE = %d RANK = %d\n", size, rank); MPI_Finalize();
	printf("\n");
	system("pause");
	return(0);
}

