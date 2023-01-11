#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "Hospital.h"
#include <set>
#include <unordered_map>

// STL контейнеры

int main() {

	std::vector<int> vec;
	vec.push_back(5); // 5
	vec.push_back(3); // 5 3

	// инициализация с помощью листа инициализации (initializer list)
	std::vector<std::string> vec2{ "Alex", "John" };

	vec2.erase(vec2.begin() + 1); // John deleted

	// push_back O(1) - константная сложность
	// emplace - добавление в середину O(n)		 n = size
	// [1][1][1] [2] [1][1][1] (чтобы вставить "2" в середину, нужно подвинуть блоки с "1" на 1 вправо
	// [2][1][1][1][1][1] - худший случай
	// erase - O(n)

	// инвалидация итераторов
	// элементы: 0 1 2 3 4
	// элементы: "Alex" "John"

	/*for (std::vector<std::string>::const_iterator it = vec2.begin(); it != vec2.end(); it++) {
		std::cout << *it << '\n';
		vec2.erase(it); // инвалидация
	}

	std::vector<std::string>::const_iterator it = vec2.begin();	// итератор it был создан до удаления
	vec2.erase(vec2.begin()); // итератор инвалидирован. Указывает все еще на первый элемент, на котором был "Alex"
	*/

	std::map <int, std::string> mymap; // map(словарь) - контейнер, содержащий пары "ключ - значение"

	std::map<int, std::vector<std::string>> bigMap; // если вдруг необходимо под ключ засунуть несколько значений (alex, john и т.д)
	bigMap.insert({ 1, {"alex", "john"} }); // или:

	std::vector<std::string> someVec{ "Harry", "Alice" };
	bigMap.insert({ 2, someVec });

	// bigMap 1 {"alex", "john"}
	//        2 {"Harry", "Alice"}
	// bigMao.insert ({1, {"fdfdfsdfsd"}}); - не вставится

	mymap.insert({ 1, "tom" });	
	mymap.insert(std::make_pair(2, "abc"));	

	for (const auto& [key, value] : mymap) {	// чтобы заработала конструкция, надо поменять стандарт языка
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

	std::set<int> myset;	// как мапа, но хранит только ключи

	std::unordered_map<int,std::string> unMap;	// мапа не сортируется!
	// key value удаление O(1), вставка O(1), худший редкий случай - O(n)
	// key -> hash() -> unique_hash for key
	// hash for key - value
	// hash for key - value
}