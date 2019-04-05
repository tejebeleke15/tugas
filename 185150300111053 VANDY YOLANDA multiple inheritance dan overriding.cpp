//tugas multiple inheritance dan overriding
//5 April 2019
//185150300111053 VANDY YOLANDA

#include<iostream>
using namespace std;

class nama{//class parent
	public:
		string name;
	
	void berinama(string name){
		this->name =name;
		cout<<"Nama: "<<name<<"\t\t\t\t\t(Method berinama pada class nama)"<<endl;
	}
	void tampil(){
		cout<<"Method tampil pada class nama telah dipanggil"<<endl;
	}
};

class alamat{//class parent
	public:
		string address;
	
	void berialamat(string address){
		this->address=address;
		cout<<"Alamat: "<<address<<"\t\t\t\t(Method berialamat pada class alamat)"<<endl;
	}
	void tampil2(){
		cout<<"Method tampil2 pada class alamat telah dipanggil"<<endl<<endl;
	}
};

class datasiswa:public nama,public alamat{//class child
	public:
		string namasiswa, alamatsiswa;
	
	void berinama(string namasiswa){
		this->namasiswa =namasiswa;
		cout<<"Nama Siswa Adalah: "<<namasiswa<<"\t\t\t(Method berinama pada class datasiswa)"<<endl;
	} 
	
	void berialamat(string alamatsiswa){
		this->alamatsiswa=alamatsiswa;
		cout<<"Alamat siswa adalah: "<<alamatsiswa<<"\t\t\t(Method berialamat pada class datasiswa)"<<endl;
	}
};

int main(){
	string name, address, studentName, studentAddress;
	cout<<" Masukan Nama: ";
	cin>>name;
	cout<<endl;
	cout<<" Masukan Alamat: ";
	cin>>address;
	cout<<endl;
	cout<<" Masukan Nama Siswa: ";
	cin>>studentName;
	cout<<endl;
	cout<<" Masukan Alamat Siswa: ";
	cin>>studentAddress;
	cout<<endl;
	
	nama a;
	alamat b;
	datasiswa c;
	cout<<"PROSES PADA CLASS >>> nama <<<"<<endl<<endl;
	a.berinama(name);//memanggil method berinama pada class nama
	a.tampil();
	cout<<endl;
	cout<<"PROSES PADA CLASS >>> alamat <<<"<<endl<<endl;
	b.berialamat(address);//memanggil method berialamat pada class alamat
	b.tampil2();
	cout<<endl;
	cout<<"PROSES PADA CLASS >>> datasiswa <<<"<<endl<<endl;
	c.berinama(studentName);//memanggil method berinama pada class datasiswa
	c.berialamat(studentAddress);//memanggil method berialamt pada class datasiswa
	//PEMANGGILAN METHOD PADA CLASS SENDIRI WALAUPUN MEMPUNYAI NAMA YANG SAMA DENGAN METHOD PADA PARENT DISEBUT DENGAN OVERRIDING
	c.tampil();//memanggil method tampil dari class nama menggunakan objek class datasiswa yaitu c
	c.tampil2();//memanggil method tampil dari class alamat menggunakan objeka class datasiswa yaitu c
	//PEMANGGILAN METHOD tampil DAN METHOD tampil2 YANG BERASAL DARI DUA PARENT CLASS YANG BERBEDA DISEBUT SEBAGAI MULTIPLE INHERITANCE
}


