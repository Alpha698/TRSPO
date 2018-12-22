// lab2_primer_1____.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <stdio.h> 
#include <iostream>
#include <mpi.h>
int main(int argc, char **argv)
{
	int size, rank, a, b;
	MPI_Status st;
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	if (rank == 0)
	{
		a = 10;
		MPI_Send(&a, 1, MPI_INT, 3, 15, MPI_COMM_WORLD);
	}
	else
	{
		if (rank == 3)
		{
			MPI_Recv(&b, 1, MPI_INT, 0, 15, MPI_COMM_WORLD, &st);
			printf("Vetv= %d b= %d\n", rank, b);
		}
	}
	MPI_Finalize();

	printf("\n");
	system("pause");

	return(0);
}