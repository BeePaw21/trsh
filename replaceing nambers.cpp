#include <iostream>
#include <vector>
using namespace std;

int main(){
    //инициализаця
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
    
    int tek, pr = mass[0];
    for (int i = 1; i < mass.size(); i++){
        tek = mass[i];
        mass[i] = pr;
        pr = tek;
    }
    mass[0] = pr;
    //вывод
    cout << endl;
    for (auto i : mass) {
        cout << i << " ";
    }
    
    return 0;
}
