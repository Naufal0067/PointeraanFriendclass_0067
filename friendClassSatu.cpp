#include <iostream>
using namespace std;

class siswa;
class orang
{
private:
    string nama;


public:
    void setNama(string pNama);
    friend class siswa;
};

class siswa
{
private:
    int id;

public:
    void setId(int pId);
    void displayAll(orang &a);
};

void siswa::displaAll(orang &a)
{
    cout << id << endl
         << a.nama;
}
void orang::setId(int pId)
{
    nama = pNama;
}
void siswa::serId(int pId)
{
    id = pId;
}
int main()
{

}