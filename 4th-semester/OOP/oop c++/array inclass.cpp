#include<iostream>
using namespace std;
class IntegerSet {
	private:
		int array[50];
	public:
		IntegerSet() {
			for(int i = 0; i < 50; i++) {
				array[i] = 0;
			}
	}
		void newIntegerSet(int * pointer) {
			for(int i = 0; i < 50; i++) {
				array[i] = *(pointer + i);
			}
		}
		void insertElement(int k) {
			array[k] = 1;
		}
		IntegerSet unionOfIntegerSets(IntegerSet par) {
			IntegerSet temp;
			for(int i = 0; i < 50; i++) {
				if(array[i] == 1 || par.array[i]) {
					temp.insertElement(i);
			}
		}
			return temp;
		}
		IntegerSet intersectionOfIntegerSets(IntegerSet par) {
			IntegerSet temp;
			for(int i = 0; i < 50; i++) {
				if(array[i] == 1 && par.array[i] == 1)
					temp.insertElement(i);
			}
			return temp;
		}
		void deleteElement(int indx) {
			array[indx] = 0;
		}
		void setPrint() {
			for(int i = 0; i < 50; i++)
					cout<<array[i]<<" ";
			cout<<endl;
		}
		bool isEqualTo(IntegerSet par) {
			for(int i = 0; i < 50; i++) {
				if(array[i] != par.array[i])
					return false;
			}
			return true;
		}
};
int main() {
	int x[50];
	for(int i = 0; i< 50; i++) x[i] = 0;
	IntegerSet i1;
	i1.newIntegerSet(x);
	i1.insertElement(2);
	i1.setPrint();
	return 0;
}
