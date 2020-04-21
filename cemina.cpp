#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file1("mang.txt");
    int a[1000];
    int n;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap vao phan tu a[" << i << "] : ";
        cin >> a[i];
    }
    int maxValue = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > maxValue){
            maxValue = a[i];
        }
    }
    int indexMaxElem = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == maxValue){
            indexMaxElem = i;
        }
    }
    int sum = 0;
    for(int i = 0;i < n ;i++)
    {
    	if(i <= indexMaxElem )
    	continue;
    	sum += a[i];
	}
	cout<<"Tong cac phan tu sau phan tu lon nhat : "<<sum;
	for(int i = 0;i < n;i++)
	{
		if(a[i] < 0)
		{
			a[i] = sum;
		}
	}
    for(int i = 0;i < n;i++)
    {
    	file1<<a[i]<<" ";
    	cout<<endl;
	}
    file1.close();
    ifstream file;
    file.open("mang.txt");
    cout<<"File sau khi in : ";
    for(int i = 0;i < n;i++)
    {
    	cout<<a[i]<<" ";
	}
    file.close();
	return 0;
}
 
