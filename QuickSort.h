template <typename T>
#include <algorithm>

int Partition(T v[], int ini, int fin){
	T x = v[fin];
	int i = ini;
	for (int j = ini; j < fin; j++){
		if(v[j] <= x){
			swap(v[i], v[j]);
			i+=1;
		}
	}
	swap(v[i], v[fin]);
	return i;
}	
