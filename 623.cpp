#include <iostream>
#include <fstream>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char* argv) { 

int tab1[1000];
int tab2[1000];
ifstream in1("liczby1.txt"); 
ifstream in2("liczby2.txt"); 
for (int i = 0; i < 1000; i++) in1 >> oct >> tab1[i]; 
for (int i = 0; i < 1000; i++) in2 >> tab2[i]; in1.close(); 
in2.close(); 
int aCounter = 0, bCounter = 0; 
for (int i = 0; i < 1000; i++) { 
if (tab1[i] == tab2[i]) aCounter++; 
if (tab1[i] > tab2[i]) bCounter++; 
} 
cout << aCounter << endl << bCounter;
return 0;
}
