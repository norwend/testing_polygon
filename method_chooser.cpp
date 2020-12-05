#include "header.hpp"

std::string url_get() {
	int method_num;
	
	std::cout << "vyberite metod:\n1. users.get (poluchit' infu o usere)\n2. wall.get (poluchit' infu o zapisiah na stene)\n";
	std::cin >> method_num;

	switch (method_num) {
		case 1:
		{
			std::cout << "vvedite id cheloveka: ";
			std::string id;	
			std::cin >> id; 
			return API::start_url + API::users_get + API::user_id + id + API::version + API::access_token;
			break;
		}
		case 2:
		{
			std::string id;
			std::string posts_number;
			std::cout << "vvedite id cheloveka ili gruppi: ";
			std::cin >> id;
			std::cout << "vvedite kolichestvo postov dla obrabotki: ";
			std::cin >> posts_number;
			return API::start_url + API::wall_get + API::owner_id + id + API::count + posts_number + API::version + API::access_token;
			break;
		}
		default:
			throw std::runtime_error("not a valid option");
	}
}
