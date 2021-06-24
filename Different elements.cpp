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
   int res = 1;
   //int min = mass[0], max = mass[0], index_min = 0, index_max = 0;
    for (int i = 1; i < mass.size(); i++) {
        if (mass[i - 1] != mass[i]) {
            res++;
        }
    }
	
    //вывод
    cout << res << endl;
    
    return 0;
}