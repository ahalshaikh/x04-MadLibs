#include <iostream>
#include <string>

int main()
{
std::string noun;
std::cout<<"what's a noun? ";
std::cin>>noun;
int cats;
std::cout<<"tell me a number? ";
std::cin>>cats;
int turtles;
std::cout<<"give me another number? ";
std::cin>>turtles;
std::string color;
std::cout<<"give me a color? ";
std::cin>>color;
std::string color1;
std::cout<<"give me another color? ";
std::cin>>color1;
char cat;
std::cout<<"give me a letter? ";
std::cin>>cat;
std::cout<<"Geaff lived on "<<noun<<" street. \n He had "<<cats<<" cats & "<<turtles<<" turtles. \n  His favorite cat was "<<color<<" and his favorite turtle was "<<color1<<". \n Because Geaff is weird and planned on having many cats so he simply named them by letter like "<<cat<<".";
  return 0; 
}
