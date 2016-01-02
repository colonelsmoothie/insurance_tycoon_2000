//see if I can clear the screen for new display (early versions)

#include <iostream>
#include <stdlib.h>
#include <ctime>
int main()
{
    //write something, then clear after n seconds
    using namespace std;
    cout << "hi there\n";
    clock_t n;
    n = 5 * CLOCKS_PER_SEC;
    clock_t start = clock();
    while(clock() - start < n)
        ;
    system("clear");
    return 0;
}
