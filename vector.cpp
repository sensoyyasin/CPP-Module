#include <iostream>
#include <vector>
#include <list>

template <typename T>
void print(std::vector<T> &v)
{
	typename std::vector<T>::iterator i = v.begin();
	while (i != v.end())
		std::cout << "List[i]: "<< *i++ << std::endl;
}

int main()
{
    std::vector<int> v;
	std::vector<int> v2(10);
	std::vector<int> v1(5,10);

	std::list<int>v10;

    std::vector<int> v6;
    v6.insert(v6.begin(), 21); //eleman ekleme push_back gibi.
	v6.push_back(63);
	v6.push_back(10);
	v6.push_back(20);
	v6.insert(v6.end(), 42);
	print(v6);
	//v6.insert(v6.begin(),7);

	//v6.push_back(88);
	//v6.pop_back(); //son eleman cikarma
	//v6.capacity(); // The size of the currently allocated storage capacity in the vector, measured in terms of the number elements it can hold.

	std::cout << "Front: " << v6.front() << std::endl;
	std::cout << "Back : "<< v6.back() << std::endl;

	std::cout << "Vector Size: "<< v6.size() << std::endl;
	std::cout << "Vector Capacity: " << v6.capacity() << std::endl;

	std::vector<int> v42;
	for (int i = 0; i < 5; i++)
		v42.push_back(i * 2);
	print(v42);
	

	//v6.erase(v6.begin(), v6.end()); //listeyi komple siliyor.
	//v6.erase(v6.begin() + 1, v6.end() - 1); // 1 elemanı atla ve sondan bir öncekine kadar sil
	//v6.clear(); // hepsini siler tüm vektörü
}
