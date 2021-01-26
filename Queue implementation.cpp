#include <iostream>
#include <queue>
using namespace std;

void printqu(queue<int> gq)
{
	queue<int> g = gq;
	while (!g.empty()) {
		cout << '\t' << g.front();
		g.pop();
	}
	cout << '\n';
}

int main()
{
	queue<int> gquiz;
	for(int i=10;i<50;i+=10){
	 gquiz.push(i);}
	cout << "The queue gquiz is : ";
	printqu(gquiz);
	cout << "\ngquiz.size() : " << gquiz.size();
	cout << "\ngquiz.front() : " << gquiz.front();
	cout << "\ngquiz.back() : " << gquiz.back();
	cout << "\ngquiz.pop() : ";
	gquiz.pop();
	printqu(gquiz);
	cout << "Using iterators : ";
	for (auto i = gquiz.front(); i != gquiz.back(); i++) 
	{// We can also use front and back as iterators to traverse through the queue
		cout << i << " ";
	}
	return 0;
}


TIME COMPLEXITY: O(1)
