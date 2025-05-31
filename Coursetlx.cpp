
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
	char name[100];
	cin >> name;
	
	char text = 'O';
	int count = 0;
	
	for(int i = 0; name[i] != '\0'; i++){
	
		if(name[i] == text){
			count++;
		}
	}
	if (count != 1){
		cout << "Tidak" << endl;
	}else{
		cout << "Ya" << endl;
	}
	return 0;	
}



