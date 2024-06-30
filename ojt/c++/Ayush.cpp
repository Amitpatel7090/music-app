#include<iostream>
using namespace std;
int main ()
{
	char letter;
	cout<<"Enter the letter";
	cin>>letter;
	if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u')
	{
		cout<<"letter is vowel";
	}
	else
	{
		cout<<"letter is consonant";
	}
	return 0;
}
