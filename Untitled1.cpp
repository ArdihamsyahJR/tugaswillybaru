#include <iostream>
#include <math.h>
using namespace std;

 int main(){
 	int x,y,selisih ;
 	cout<<" Masukan Bilangan x : "; cin>>x;
 	cout<<" Masukan Bilangan Y : "; cin>>y;
 	
if(x>y){
	selisih=x-y;
	
	cout<<"selisih nilai x dan y yaitu"<<selisih;
}
else if(y>x){
	selisih=y-x;

	cout<<"Selisih Nilai Y dan X yaitu "<<selisih;
}
	return 0;
}
