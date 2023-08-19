#include <iostream>
#include "Sales_item.h"

int main()
{
    /*
    Sales_item book;
    
    std::cin >> book;
    std::cout << book << std::endl;
    */
    /*
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
    */
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    // Version 1
    //if(item1.same_isbn(item2))
    // Version 2
    if(item1.same_isbn() == item2.same_isbn())
    {
        std::cout << item1 + item2 << std::endl;
        return 0;
    }
    else
    {
        std::cerr << "Data must refer to same ISBN" << std::endl;
        return -1;
    }
}
