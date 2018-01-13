#include<iostream>
#include<fstream>
#include<string>
#include "Singleton.h"

using namespace std;

void Skaityti(char Cd[], char A[], int B[]);
void Rikiuoti(int B[], char A[]);
void Spausdinti(char Cr[], ofstream &write, int B[], char A[]);
void Uzpildyti(int B[]);

int main()
{
	const int max = 10;
	char Cd[]= "Duomenys.txt";
	char Cr[]="Rezultatai.txt";

	ofstream write(Cr);

	char A[] = {'0','1','2','3','4','5','6','7','8','9'};
	int B[max];

	Singleton::Instance()->Uzpildyti(B);

	Singleton::Instance()->Skaityti(Cd, A, B);

	Singleton::Instance()->Spausdinti(Cr, write, B, A);

	Singleton::Instance()->Rikiuoti(B, A);

	Singleton::Instance()->Spausdinti(Cr, write, B, A);
}