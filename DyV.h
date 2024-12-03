#include <vector>
template <typename T>


int BusquedaBinaria(T X, T V[], int ini, int fin){
	if(ini > fin){
		return -1;
	}
	int medio = (ini + fin)/2;
	if(V[medio] == X){
		return medio;
	}
	else if(V[medio] > X){
		return BusquedaBinaria(X, V, ini, medio-1);
	}
	else{
		return BusquedaBinaria(X, V, medio+1, fin);
	}
}

template <typename T>

int BusquedaBinaria_INV(T x, T V[], int ini, int fin){
	if(ini > fin){
		return -1;
	}
	int medio = (ini + fin)/2;
	if(V[medio] == x){
		return medio;
	}
	else if(V[medio] < x){
		return BusquedaBinaria_INV(x, V, ini, medio -1);
	}
	else{
		return BusquedaBinaria_INV(x, V, medio+1, fin);
	}
}

template <typename T>
int Partition(T V[], int ini, int fin) {
    T pivot = V[fin];
    int i = ini;
    for (int j = ini; j < fin; j++) {
        if (V[j] <= pivot) {
            std::swap(V[i], V[j]);
            i++;
        }
    }
    std::swap(V[i], V[fin]);
    return i;
}

template <typename T>
void QuickSort(T V[], int ini, int fin) {
    if (ini < fin) {
        int pivot = Partition(V, ini, fin);
        QuickSort(V, ini, pivot - 1);
        QuickSort(V, pivot + 1, fin);
    }
}

