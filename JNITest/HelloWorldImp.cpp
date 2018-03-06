
#include "HelloWorld.h"
#include <iostream>
using namespace std;

JNIEXPORT void JNICALL Java_HelloWorld_dispalyHelloWorld(JNIEnv *env, jobject obj)
{
	cout << "aaaaaaaaaaaa" << endl;
	return;
}