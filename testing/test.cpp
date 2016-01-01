#include <iostream>
#include "../src/staff.cpp"
int main()
{
    using namespace std;

    employee mary =
    {
        "Mary",
        "Campbell",
        "Vice President",
        1,
        "Analytics",
        9000000
    };

    cout << "You have hired " << mary.name_first << " " << mary.name_last << ", who works as a ";
    cout << mary.title << " for a salary of " << mary.salary << " USD.\n";
    return 0;

}
