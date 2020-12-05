#include "header.hpp"

static size_t write(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}


std::string curl_get (std::string url)
{
	std::string buffer;
	CURL *curl;
	curl = curl_easy_init(); 
	
	if(curl) {
    	curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write);
    	curl_easy_setopt(curl, CURLOPT_WRITEDATA, &buffer);

    	curl_easy_perform(curl);
    	curl_easy_cleanup(curl);
	}
	return buffer;
}	
