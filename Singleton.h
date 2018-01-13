#include <string>
#include <fstream>

class Singleton {
public:
	static Singleton* Instance();
	void writeToLogFile();
	void Skaityti(char Cd[], char A[], int B[]);
	void Rikiuoti(int B[], char A[]);
	void Spausdinti(char Cr[], ofstream &write, int B[], char A[]);
	void Uzpildyti(int B[]);
private:
	Singleton() {};  // Private so that it can  not be called
	Singleton(Singleton const&) {};             // copy constructor is private
	Singleton& operator=(Singleton const&) {};  // assignment operator is private
	static Singleton* m_pInstance;
};