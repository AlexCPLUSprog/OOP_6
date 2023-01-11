#pragma once
#include <iostream>
#include <map>
#include <string>

class Hospital
{
public:
	Hospital();

	const std::string& getPatient(int key);
	void addPatient(const std::string& name);
	void deletePatient(int key);
	void printAllPatients();

private:
	std::map<int, std::string> _patients;
	int _idCounter;
};

