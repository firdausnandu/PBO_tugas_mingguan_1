#include<iostream>
using namespace std;
class Cpp{
	public:
		void input();
		void proses();
		void output();
		private:
			int pilih;
			string data1="Perulangan dengan For";
			string data2="Perulangan dengan While";
			string data3="Perulangan dengan Do-While";
			int array[10];
			int array1[10][10];
	
};
void Cpp::input(){
	cout<<"=============================="<<endl;
	cout<<"===========PROGRAM C++========"<<endl;
	cout<<"1. Perulangan dengan for "<<endl;
	cout<<"2. Perulangan dengan while "<<endl;
	cout<<"3. Perulangan dengan do while "<<endl;
	cout<<"4. Array 1 Dimensi "<<endl;
	cout<<"5. Array Multidimensi"<<endl;
	cout<<"Pilihanmu : ";cin>>pilih;
}
void Cpp::proses(){
	if(pilih==1){
		for(int i=1; i<=5; i++){
			cout<<data1<<endl;
		}	
	}else if(pilih==2){
		int i=1;
		while(i<=5){
			cout<<data1<<endl;
			i++;
		}
	}else if(pilih==3){
		int i=1;
		do{
			cout<<data2<<endl;
			i++;
		}while(i<5);{
			cout<<data3<<endl;
		}
		
	}else if(pilih==4){
		for(int i=1; i<=5; i++){
                cout<<"Masukan data ke - "<<i<<"  = ";
                cin>>array[i];
            }
            for(int i=1; i<=5; i++){
                cout<<endl;;
                cout<<"Akses Data Array"<<endl;
                cout<<"Data ke - "<<i<<"  = ";
                cout<<array[i];

            }
	}else if(pilih==5){
		for(int i=1; i<=3; i++){
                for(int j=1; j<=3; j++) {
                    cout<<"Masukan data ke - "<<i<<" = ";
                    cin>>array1[i][j];

                }
                cout<<endl;
            }
            for(int i=1; i<=3; i++){
                for(int j=1; j<=3; j++) {
                    cout<<array1[i][j]<<"\t";
                }
                cout<<endl;
            }
	}
}
void Cpp::output(){
	cout<<"Hasilnya : "<<endl;
	cout<<"\n"<<endl;
}
int main(){
	Cpp x;
	x.input();
	x.output();
	x.proses();
	
	return 0;
}
