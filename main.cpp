﻿#include <stdio.h>
#include <iostream>
#include <thread>


using namespace std;

//関数の定義

void Thread1() {
	cout << "Thread1" << endl;
}

void Thread2() {
	cout << "Thread2" << endl;
}

void Thread3() {
	cout << "Thread3" << endl;
}

int main() {

	thread thread1(Thread1);
	thread1.join();

	thread thread2(Thread2);
	thread2.join();

	thread thread3(Thread3);
	thread3.join();

	return 0;
}