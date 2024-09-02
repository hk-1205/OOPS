#include<iostream>
#include<cstring>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std ;

int main(){
	array <int ,5> arr={1,2,3,4,5};
	int i;
	for(i=0;i<5;i++){
		cout<<arr[i];
	}


	cout<<arr.size();
	cout<<arr.front();
	
}


/*int i=0;
class A{
	public:
	A(){
		cout<<"Constructor"<<endl;
			
	}
	~A(){
	cout<<"Destructor"<<i<<endl;
	i--;
	}
		
};
int main(){
	A a;
	A b;
	A c;
	return 0;
}*/
/*class cla{
	int a;
	char num[33];
};
int major(int *arr, int size){
	int i,ctr=1;
	int j=arr[0];
	for(i=0;i<size;i++){
		if(arr[i]==j){
			ctr++;
		}
		else{
			ctr--;
		}
		if(ctr==0){
			j=arr[i];
			ctr=1;
		}
	}
	for(i=0;i<size;i++){
		if(arr[i]==j){
			ctr++;
		}
	}
	if(ctr>size/2){
		return j;
	}
	else{
		return -1;
	}
}
int main(){
	int size, arr[100],i;
	cout<<"enter the size of array";
	cin>>size;
    for(i=0;i<size;i++){
    	cin>>arr[i];
	}
	
	int result =major(arr,size);
	if(result==-1){
		cout<<"nomajority element found";
	}
	else{
		cout<<result;
	}
	
}*/
/*class fruits{
	public:
		int a;
		int *p;
		fruits(fruits obj){
			cout<<"called"<<endl;
			a=obj.a;
			p = new int(10);
		}

};

int main(){
	fruits obj;
	fruits obj1(obj);
	cout<<"obj = "<<obj.a<<endl;
	cout<<"obj ="<<obj.p<<endl;
	cout<<"obj ="<<obj1.a<<endl;
	cout<<"obj ="<<obj1.p<<endl;
	obj.a =15;
	*(obj1.p)=12;
	cout<<"after changing"<<endl;
	cout<<"obj = "<<obj.a<<endl;
	cout<<"obj ="<<obj.p<<endl;
	cout<<"obj ="<<obj1.a<<endl;
	cout<<"obj ="<<obj1.p<<endl;
	
	return 0;
}*/
/*int main(){
	int size, n,a[20],i,j;
	int ctr;
	cout<<"enter the size"<<endl;
	cin>>size;
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	for(i=0;i<size;i++){
		ctr=0;
		for(j=i+1;j<size-1;j++){
			if(a[i]==a[j]){
				ctr++;
			}
		}

	if(ctr==0){
		cout<<"false";
	}
	else{
		cout<<"true";
	}
}
}*/
/*lass MyClass {       // The class
  public:             // Access specifier
    int myNum;
	int price;        // Attribute (int variable)
    string myString;
	Myclass(int a){
		price=a;
	}
    
	}
	int i;
	Myclass(Myclass &i)
	price=i.price;
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";
  Myclass obj(20);
  Myclass obj2(obj);
  cout<<obj2.price;

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
} */
/*#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area() const {
        return M_PI * radius * radius;
    }
    void setRadius(double r) {
        radius = r;
    }

    double getRadius() const {
        return radius;
    }
};

int main() {
    Circle circle(5.0);

    std::cout << "Radius: " << circle.getRadius() << std::endl;
    std::cout << "Area: " << circle.area() << std::endl;

    circle.setRadius(10.0);

    
    std::cout << "Updated Radius: " << circle.getRadius() << std::endl;
    std::cout << "Updated Area: " << circle.area() << std::endl;

    return 0;
}
*/

/*int strlenght(char str[]){
	int l=0;
	 while (str[l] != '\0') {
        l++;
    }
 cout<<"length"<<l<<endl;

 
}
int ispali(char str[]){
	int low=0, high=strlen(str)-1, ctr=0;
	while(low<high){
		if(str[low]!=str[high]){
			ctr++;
		}
		low++;
		high--;
		
	}
	if(ctr==0){
		cout<<"p"<<endl;
	}
	else{
		cout<<"not p"<<endl;
	}
	}
	


int main(){
	char str[100];
	int i;
	int size;
	cout<<"enter the string"<<endl;
	cin>>str;
	int n=strlenght(str);
	int palidrome= ispali(str);
	

}
/*int fun(int &a){
	a++;
	return a;
	}
int func(int &b){
	b--;
	return b;
}
	

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"answer"<<fun(a)<<endl;
    cout<<func(b)<<endl;
    
}*/
/*int max(int arr[],int size){
	int i=0;
	int maxi=arr[0];
	for(i=0;i<size;i++){
	if(maxi<arr[i]){ //can use function
                       //max(maxi,arr[i])	
		maxi=arr[i];
	}
}
cout<<"the ans = "<<maxi<<endl;
}
int swap(int arr[],int size){
	int i=0;
	int temp;
	for(i=0;i<size;i+=2){
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
		
	}
	for(i=0;i<size;i++){
		cout<<arr[i];
	}
}
int main(){
	int arr[100];
	int s;
	int i;
	
	cout<<"enter the size";
	cin>>s;
	for( int i=0;i<s;i++){
		cin>>arr[i];
		
	}
	for(i=0;i<s;i++){
		cout<<"the elements are\n"<<arr[i]<<endl;
	}
//	int result=max(arr,s);
	int swaps=swap(arr,s);
	cout<<swaps;
	
}*/
