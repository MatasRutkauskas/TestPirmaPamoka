
#include "Singleton.h"
#include "iostream"
#include "fstream"

using namespace std;

// Global static pointer used to ensure a single instance of the class.
Singleton* Singleton::m_pInstance = NULL;

/** This function is called to create an instance of the class.
Calling the constructor publicly is not allowed. The constructor
is private and is only called by this Instance function.
*/

Singleton* Singleton::Instance()
{
	if (!Singleton::m_pInstance)   // Only allow one instance of class to be generated.
		Singleton::m_pInstance = new Singleton;

	return Singleton::m_pInstance;
}

void Singleton::writeToLogFile()
{
	cout << "Hello Singleton world" << endl;
}

void Singleton::Skaityti(char Cd[], char A[], int B[])
{
	ifstream read(Cd);

	string eil;

	while(getline(read, eil))
	{
		if(eil.length() > 0)
		{
			for(int i = 0; i < eil.length(); i++)
			{
				for(int j = 0; j < 10; j++)
				{
					if(eil[i] == A[j])
					{
						B[j]++;
					}
				}
			}
		}
	}
}
void Singleton::Rikiuoti(int B[], char A[])
{
	int temp = 0;
	char laikmena;

	for(int i = 0; i < 9; i++)
	{
		for(int j = i+1; j < 10; j++)
		{
			if(B[j]>B[i])
			{
				temp = B[i];
				B[i] = B[j];
				B[j] = temp;

				laikmena = A[i];
				A[i] = A[j];
				A[j] = laikmena;
			}
		}
	}
}

void Singleton::Spausdinti(char Cr[], ofstream &write, int B[], char A[])
{

	for(int i = 0; i < 10; i++)
	{
		write<<A[i]<<" : "<<B[i]<<endl;
		
	}
	
	write<<"\n"<<endl;
}

void Singleton::Uzpildyti(int B[])
{
	for(int i = 0; i < 10; i++)
	{
		B[i] = 0;
	}

}