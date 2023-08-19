#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, val;
    
    while(std::cin >> item)
    {
        int cnt = 1;
        while(std::cin >> val)
        {
            if(val.same_isbn() == item.same_isbn())
            {
                ++cnt;
            }
            else
            {
                std::cout << item  << " = " << cnt << " times " << std::endl;
                item = val;
                cnt = 1;
            }
        }
        std::cout << item << " = " << cnt << " times " << std::endl;
    }
    return 0;
}
