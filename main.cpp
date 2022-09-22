#include <iostream>

using namespace std;

struct json
{
    std::string key;
    std::string value;
    json(){}
    json(const string& k, const string& val) : key(k), value(val){}
    json& operator=(const json& rhs)
    {
        key = rhs.key;
        value = rhs.value;
        return *this;
    }
};

std::ostream& operator<<(std::ostream& os, const json& j)
{
    std::cout << "{ " << j.key << ": " << j.value << " }" << std::endl;
    return os;
}


extern void print(const string&);
int main()
{
    print("file.txt");
    cout << "\nPrint Json Object:" << endl;
    json j("key", "value");
    cout << j << endl;
    return 0;
}