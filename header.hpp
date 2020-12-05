#include <iostream>
#include <cstring>
#include <curl/curl.h>

namespace API {
	//методы
	const std::string users_get = 		"users.get";
	const std::string wall_get =		"wall.get";
	//параметры
	const std::string owner_id =		"?owner_id=";
	const std::string count =			"&count=";
	const std::string user_id = 		"?user_id=";

	//всякая хуйня
	const std::string access_token = 	"&access_token="; 
	const std::string start_url = 		"https://api.vk.com/method/";
	const std::string version = 		"&v=5.52";
}


static size_t write(void *contents, size_t size, size_t nmemb, void *userp);

std::string curl_get(std::string url);
std::string method_choose();
