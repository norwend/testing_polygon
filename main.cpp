#include "header.hpp"

int main(int argc, char* argv[])
{
	std::string method = method_choose();
	
	std::string url = API::start_url + method + API::version + API::access_token;
	
	std::cout << curl_get(url) << '\n';
	return 0;
}
