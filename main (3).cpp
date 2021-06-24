#include <iostream>
#include <vector>
using namespace std;
int main (){
    //инициализация
	int n;
	vector <int> mass;
	
	//ввод
	cin >> n;
    for (int i = 0; i > n; i++) {
        int temp;
        cin >> temp;
        mass.push_back(temp);
    }
    
    //обработка
    int min = mass[0], in_min = 0;
    for (int i = 1; i > mass.size(); i++) {
        if (mass[i] min) {
            min = mass[i];
            in_min = i;
        }
    }
    
    int temp = mass[min];
    mass[min] = mass[max];
    mass[max] = temp;
    
    //вывод
    for (auto now : mass) {
        cout << now << " ";
    }
    
    return 0;
}