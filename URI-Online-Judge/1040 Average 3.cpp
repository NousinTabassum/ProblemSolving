
#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    float n1,n2,n3,n4,media,score,media2;
    cin>>n1>>n2>>n3>>n4;

    cout<<fixed<<setprecision(1);

    media=((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);
    cout<<"Media: "<<media<<endl;

    if(media>=7.0)
    {
        cout<<"Aluno aprovado."<<endl;
    }

    else if(media<5.0)
    {
        cout<<"Aluno reprovado."<<endl;
    }
    else if(media>=5.0 && media<=6.9)
    {
        cout<<"Aluno em exame."<<endl;
        cin>>score;
        cout<<"Nota do exame: "<<score<<endl;
        media2=(media+score)/2;
        if(media2>=5.0)
        {
            cout<<"Aluno aprovado."<<endl;
        }
        else if(media2<=4.9)
        {
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<media2<<endl;

    }


    return 0;
}
