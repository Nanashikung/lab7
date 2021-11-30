#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string x;
    cout << "Input text: ";
	cin >> x;
	string a = func1(x);
    cout << "Reversed text: " << a << endl;

	string check1 = func2(x);
	string check2 = func2(a);
	if(check1 == check2)
	{
    	cout << "Palindrome: Yes";
	}
	else
	{
		cout << "Palindrome: No"; 
	}
    return 0;
}
