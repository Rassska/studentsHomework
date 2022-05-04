#include <iostream>
#include <set>
#include <string>

int main()
{
    std::string s;
    getline(std::cin, s);
    std::set<std::string> subs;
    for (int i = 0; i < s.size(); i++)
        for (int j = 1; i + j <= s.size(); j++)
        {
            std::string sub = s.substr(i, j);
            subs.insert(sub);
        }
    std::cout << subs.size() << std::endl;
}