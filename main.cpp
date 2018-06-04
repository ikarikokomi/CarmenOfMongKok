#include <iostream>
#include <cstdlib>
#include <ctime>
int main(){
    srand(time(NULL));
    int a = rand()%2;
    if (a)
        while(true);
    else
        std::cout << "yasila" << std::endl;
    return 0;
}
