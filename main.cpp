#include <iostream>

using namespace std;

int main()
{
    cout << "Fadhilah Aditya Akbar, A11.2022.14130, A11.4104" << endl;
    int a;

    string Jurusan;


    cout<<"Masukkan Jurusan Anda"<<endl<<endl;
    cout<<"1. Teknik Informatika "<<endl;
    cout<<"2. Sistem Informasi"<<endl;
    cout<<"3. Desain Komunikasi Visual"<<endl<<endl;

    cout<<"Pilih : ";
    cin>>a;
    cout<<endl;

    if(a==1){
    Jurusan="Teknik Informatika";
    }
    else if(a==2){
    Jurusan="Sistem Informasi";
    }
    else if(a==3){
    Jurusan="Desain Komunikasi Visual";
    }
    else{
    cout<<"Anda hanya bisa memilih salah satu dari 3 opsi diatas"<<endl;
    return 0;
    }
    cout<<"Jurusan anda "<< Jurusan <<endl<<endl;

    // semester

    cout<<"Masukkan Semester Anda"<<endl<<endl;
    cout<<"Semester : ";
    cin>>a;
    cout<<endl;

    if(a== 1||a==2){
    cout<<"Jurusan anda "<< Jurusan ;

    cout<<" dan anda berada dalam kategori Freshman Year"<<endl;
    }

    else if(a== 3||a==4){
    cout<<"Jurusan anda "<< Jurusan ;

    cout<<" dan anda berada dalam kategori Sophomore Year"<<endl;
    }
    else if(a== 5||a==6){
    cout<<"Jurusan anda "<< Jurusan ;

    cout<<" dan anda berada dalam kategori Junior Year"<<endl;
    }
    else if(a== 7||a==8){
    cout<<"Jurusan anda "<< Jurusan ;

    cout<<" dan anda berada dalam kategori Senior Year"<<endl;
    }
    else if(a>8 && a<=14){
    cout<<"Jurusan anda "<< Jurusan ;

    cout<<" dan anda berada dalam kategori Eternal Year"<<endl;
    }
    else if(a>14){
    cout<<"Seharusnya Anda Sudah Terkena Dropout"<<endl;
    }

    return 0;
}
