    #include<iostream>
    using namespace std;
    class Base
    {
        public:
        Base()
        {
            cout<<"Base Class Constructor"<<endl;
        }
        virtual ~Base()
        {
            cout<<"Base Class Desctructor"<<endl;
        }
    };
    class Derived : public Base
    {
        public:
        Derived()
        {
            cout<<"Derived Class Constructor"<<endl;
        }
        ~Derived()
        {
            cout<<"Derived Class Destructor"<<endl;
        }
    };
    int main()
    {
        Base *bptr = new Derived;
        delete bptr;

        return 0;
    }