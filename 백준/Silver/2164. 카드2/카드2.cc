#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main() {

	int n;
	cin >> n;

	queue<int> q;

	for(int i = 1; i <= n; i++) {
		q.push(i);
	}

	while(q.size() !=1){
		int temp;
		q.pop();
		temp = q.front();
		q.pop();
		q.push(temp);

	}
	cout << q.front() << endl;
}
