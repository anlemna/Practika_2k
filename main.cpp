using namespace std;
#include <QCoreApplication>
#include <cstring>
#include <iostream>

class Popit
{
protected:
    virtual void strength() {};
    virtual void ingredients() {};
    virtual void heatUp()
    {
        cout<<"heat water"<<endl;
    }

    virtual void transfuse()
    {
        cout<<"...pour into a mug..."<<endl;
    }

    virtual void appetite()
    {
        cout<<"wish you bon appetit!!!"<<endl;
    }


public:

    void napitki()
    {
        heatUp();
        strength();
        transfuse();
        ingredients();
        appetite();
    }


};

class CoffeWO:public Popit
{
public:

    void strength() override
    {
        cout<<"what kind of coffee do you want?"<<endl;
        cout<<"1. Raf"<<endl;
        cout<<"2. Latte"<<endl;
        cout<<"3. Americano"<<endl;

        int n=0;
        cin>>n;
        switch(n)
        {
                case 1:cout<<"OK, cooking raf"<<endl;break;
                case 2:cout<<"OK, cooking latte"<<endl;break;
                case 3:cout<<"OK, cooking americano"<<endl;break;
                default:cout<<"we don't make that kind of coffee :-("<<endl;
        }
    }

    void ingredients() override
    {
        cout<<"what supplements do you want?"<<endl;
        cout<<"1. Sugar!! MORE SUGAR!!"<<endl;
        cout<<"2. Milk"<<endl;
        cout<<"3. Syrup"<<endl;

        int n=0;
        cin>>n;
        switch(n)
        {
                case 1:cout<<"WOH! Ok,ok,ok..."<<endl;break;
                case 2:cout<<"Let's make the most tender coffee!"<<endl;break;
                case 3:cout<<"Maple syrup is always at your service)"<<endl;break;
                default:cout<<"Why would you want to add mercury to your coffee? :-/"<<endl;
        }
    }
};

class TeaWO: public Popit
{
public:

    void strength() override
    {
        cout<<"What kind of tea do you want?"<<endl;
        cout<<"1. Black"<<endl;
        cout<<"2. Green"<<endl;
        cout<<"3. Rad"<<endl;

        int n=0;
        cin>>n;
        switch(n)
        {
                case 1:cout<<"OK, cooking black tea"<<endl;break;
                case 2:cout<<"OK, cooking green tea"<<endl;break;
                case 3:cout<<"OK, cooking rad tea"<<endl;break;
                default:cout<<"We don't make that kind of tea :-("<<endl;
        }
    }

    void ingredients() override
    {
        cout<<"what kind of tea additives do you want?"<<endl;
        cout<<"1. I WANT SUGAR!!!"<<endl;
        cout<<"2. Mint and thyme"<<endl;
        cout<<"3. I want pure tea"<<endl;

        int n=0;
        cin>>n;
        switch(n)
        {
                case 1:cout<<"OK, just put the gun away..."<<endl;break;
                case 2:cout<<"Woh, I love grass too"<<endl;break;
                case 3:cout<<"OK, but you are a terrible person..."<<endl;break;
                default:cout<<"Why would you want to add uranus to your tea? :-/"<<endl;
        }
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Popit* coffe = new CoffeWO();
    cout<<endl<<"start making coffee..."<<endl<<endl;
    coffe->napitki();
    cout<<endl<<endl;

    Popit* tea = new TeaWO();
    cout<<endl<<"start making tea..."<<endl<<endl;
    tea->napitki();

    delete tea;
    delete coffe;
    return a.exec();
}
