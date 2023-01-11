#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "Hospital.h"
#include <set>
#include <unordered_map>

// STL ����������

int main() {

	std::vector<int> vec;
	vec.push_back(5); // 5
	vec.push_back(3); // 5 3

	// ������������� � ������� ����� ������������� (initializer list)
	std::vector<std::string> vec2{ "Alex", "John" };

	vec2.erase(vec2.begin() + 1); // John deleted

	// push_back O(1) - ����������� ���������
	// emplace - ���������� � �������� O(n)		 n = size
	// [1][1][1] [2] [1][1][1] (����� �������� "2" � ��������, ����� ��������� ����� � "1" �� 1 ������
	// [2][1][1][1][1][1] - ������ ������
	// erase - O(n)

	// ����������� ����������
	// ��������: 0 1 2 3 4
	// ��������: "Alex" "John"

	/*for (std::vector<std::string>::const_iterator it = vec2.begin(); it != vec2.end(); it++) {
		std::cout << *it << '\n';
		vec2.erase(it); // �����������
	}

	std::vector<std::string>::const_iterator it = vec2.begin();	// �������� it ��� ������ �� ��������
	vec2.erase(vec2.begin()); // �������� �������������. ��������� ��� ��� �� ������ �������, �� ������� ��� "Alex"
	*/

	std::map <int, std::string> mymap; // map(�������) - ���������, ���������� ���� "���� - ��������"

	std::map<int, std::vector<std::string>> bigMap; // ���� ����� ���������� ��� ���� �������� ��������� �������� (alex, john � �.�)
	bigMap.insert({ 1, {"alex", "john"} }); // ���:

	std::vector<std::string> someVec{ "Harry", "Alice" };
	bigMap.insert({ 2, someVec });

	// bigMap 1 {"alex", "john"}
	//        2 {"Harry", "Alice"}
	// bigMao.insert ({1, {"fdfdfsdfsd"}}); - �� ���������

	mymap.insert({ 1, "tom" });	
	mymap.insert(std::make_pair(2, "abc"));	

	for (const auto& [key, value] : mymap) {	// ����� ���������� �����������, ���� �������� �������� �����
		std::cout << key << " " << value;
		std::cout << '\n';
	}
	std::cout << "===========================\n";

	Hospital pat;
	pat.addPatient("Robbie");
	pat.addPatient("Bob");
	pat.addPatient("Tom");
	pat.printAllPatients();
	std::cout << "=============\n";
	pat.deletePatient(2);
	pat.printAllPatients();
	std::cout << "=============\n";

	std::set<int> myset;	// ��� ����, �� ������ ������ �����

	std::unordered_map<int,std::string> unMap;	// ���� �� �����������!
	// key value �������� O(1), ������� O(1), ������ ������ ������ - O(n)
	// key -> hash() -> unique_hash for key
	// hash for key - value
	// hash for key - value
}