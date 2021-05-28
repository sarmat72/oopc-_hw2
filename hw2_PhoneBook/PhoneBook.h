#pragma once
#include <iostream>
#include <string>
using namespace std;

class PhoneBook
{
	char* FIO;
	char* HomeNumber;
	char* WorkNumber;
	char* MobNumber;
	char* DiffInfo;

public:

	void setFIO(char* a)
	{
		strcpy_s(FIO, strlen(FIO)+1, a);
	}
	const char* getFIO()
	{
		return FIO;
	}
	void setHomeNumber(const char* a)
	{
		strcpy_s(HomeNumber, strlen(HomeNumber), a);
	}
	const char* getHomeNumber()
	{
		return HomeNumber;
	}
	void setWorkNumber(const char* a)
	{
		strcpy_s(WorkNumber, strlen(WorkNumber), a);
	}
	const char* getWorkNumber()
	{
		return WorkNumber;
	}
	void setMobNumber(const char* a)
	{
		strcpy_s(MobNumber, strlen(MobNumber), a);
	}
	const char* getMobNumber()
	{
		return MobNumber;
	}
	void setDiffInfo(const char* a)
	{
		strcpy_s(DiffInfo, strlen(DiffInfo), a);
	}
	const char* getDiffInfo()
	{
		return DiffInfo;
	}

	PhoneBook(): PhoneBook(nullptr, nullptr, nullptr, nullptr, nullptr){}
	PhoneBook(const char* a, const char* b, const char* c, const char* d, const char* e)
		:FIO{a? new char[strlen(a) + 1]: nullptr}, 
		HomeNumber{ b ? new char[strlen(b) + 1]: nullptr },
		WorkNumber{ c ? new char[strlen(c) + 1] : nullptr },
		MobNumber{ d ? new char[strlen(d) + 1] : nullptr },
		DiffInfo{ e ? new char[strlen(e) + 1] : nullptr }
	{
		strcpy_s(FIO, strlen(FIO), a);
		strcpy_s(HomeNumber, strlen(HomeNumber), b);
		strcpy_s(WorkNumber, strlen(WorkNumber), c);
		strcpy_s(MobNumber, strlen(MobNumber), d);
		strcpy_s(DiffInfo, strlen(DiffInfo), e);
	}
	~PhoneBook()
	{
		delete[] FIO;
		delete[] HomeNumber;
		delete[] WorkNumber;
		delete[] MobNumber;
		delete[] DiffInfo;
	}
};