#include <iostream>
#include <map>

using namespace std;

int main()
{
    //map<int, int> union_table;//one 若定义在while外边，即使用多次，需要clear
    int count;
    int index, value;
    while (cin >> count)
    {
        map<int, int> union_table;//two
        while (cin >> index >> value)
        {
            if (union_table.find(index) != union_table.end())
                union_table[index] += value;
            else
                union_table.insert(make_pair(index, value));
            count--;
            if (count == 0) break;
        }
        for (auto it = union_table.begin(); it != union_table.end(); it++)
        {
            cout << it->first << " " << it->second << endl;
        }
        //union_table.clear();//one
    }
    
    
    //system("pause");
    return 0;
}
