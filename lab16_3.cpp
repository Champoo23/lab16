#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(unsigned int N){	
    vector<int> c;

    for(unsigned int i = 0; i < N; i++) c.push_back(rand()%10);
    return c;
}

void showVector(vector<int> ShowVec){
	cout << "[";
	for(unsigned int i = 0; i < 5; i++){
		cout << ShowVec[i];
		if(i == 4) cout << "]";
		else cout << " ";
	}
}

int dotProduct(vector<int> Vec1, vector<int> Vec2){
	int sum = 0;
	for(unsigned int i = 0; i < 5; i++) sum += Vec1[i]*Vec2[i];	
	return sum;
}

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}