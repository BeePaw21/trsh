#include <iostream>
#include <vector>
using namespace std;
int main (){
    //инициализация
	int n;
	vector <int> mass;
	
	//ввод
	cin >> n;
	for (int i = 0; i < n; i++){
	    int temp;
	    cin >> temp;
	    mass.push_back(temp);
	}
	
    //обработка
   int min = mass[0], max = mass[0], index_min = 0, index_max = 0;
    for(int i = 1; i < mass.size(); i++) {
        if (mass[i] < min) {
            min = mass[i];
            index_min = i;
        }
    }
    
	int temp = mass[index_min];
	mass[index_min] = mass[max];
	mass[max] = temp;
	
    //вывод
    for (auto now : mass) {
        cout << now << " ";
    }
    
    return 0;
}