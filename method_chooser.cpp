#include "header.hpp"

std::string method_choose() {
	int method_num;
	
	std::cout << "vyberite metod:\n1. users.get (poluchit' infu o usere)\n2. wall.get (poluchit' infu o zapisiah na stene)\n";
	std::cin >> method_num;

	switch (method_num) {
		case 1:
		{
			std::cout << "vvedite id cheloveka: ";
			std::string id;	
			std::cin >> id; 
			return API::users_get + API::user_id + id;
			break;
		}
		case 2:
		{
			std::cout << "vvedite id cheloveka ili gruppi: ";
			std::string id;	
			std::cin >> id;
			std::string posts_number;
			std::cout << "vvedite kolichestvo postov dla obrabotki: ";
			std::cin >> posts_number;
			return API::wall_get + API::owner_id + id + API::count + posts_number;
			break;
		}
		default:
			throw std::runtime_error("not a valid option");
	}
}
