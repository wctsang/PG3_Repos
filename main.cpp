#include"iostream"
#include "Animal.h"
#include "Lion.h"
#include "Tiger.h"


int main() {
	//作成
	Animal* Animal[2];


	Animal[0] = new Lion();

	Animal[1] = new Tiger();

	//Print関数呼び出し
	Animal[0]->Print();
	Animal[1]->Print();

	//削除
	delete Animal[0];
	delete Animal[1];

	return 0;
}