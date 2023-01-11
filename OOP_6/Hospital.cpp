#include "Hospital.h"

Hospital::Hospital(): _idCounter(0) {}

const std::string& Hospital::getPatient(int key) {
	const auto it = _patients.find(key);
	return it->second;
}

void Hospital::addPatient(const std::string& name) {
	_idCounter++;
	_patients.insert({ _idCounter, name });
}

void Hospital::deletePatient(int key) {
	_patients.erase(key);
}

void Hospital::printAllPatients() {
	for (const auto& [key, value] : _patients) {	// for (element : data_structure)
		std::cout << key << " " << value << '\n';
	}
}