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
	
    //вывод
    if (!mass.empty()) {
        for (auto i : mass) {
            cout << i << " ";
        }
    }
    else {
        cout << "Empty";
    }
  
    
    return 0;
}