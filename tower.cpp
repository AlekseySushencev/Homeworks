/*#include <iostream>

int main() {
    int count;
    std::cout << "Колличество этажей: " << std::endl;
    std::cin >> count;
    int floor;
    int count_rooms_on_floor = 1;
    int group_floor = 2;
    int i = 1;
    while (i != count+1) {
        
        i++
    }


    return 0;
}*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Номер комнаты" << endl;
    cin >> n;

    int floor = 1;
    int rooms = 1;
    int count = 0;

    while (n > rooms)
    {
        n -= rooms;
        floor++;
        count++;

        if (count == rooms)
        {
            rooms++;
            count = 0;
        }
    }

    cout << "Этаж: " << floor << endl;
    cout << "По счету: " << n << endl;
    return 0;
}