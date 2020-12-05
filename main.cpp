#include "header.hpp"

int main(int argc, char* argv[])
{
	std::cout << curl_load(url_get()) << '\n';
	return 0;
}
