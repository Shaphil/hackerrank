#include <iostream>

using namespace std;

class Person
{
    public:
        int age;
        string name;

        virtual void getdata() {}
        virtual void putdata() {}
};

class Professor : public Person
{
    private:
        int publications, cur_id;
        static int id;

    public:
        Professor();

        virtual void getdata();
        virtual void putdata();
};

int Professor::id = 0;

Professor::Professor()
{
    id++;
    cur_id = id;
}

void Professor::getdata()
{
    cin >> name >> age >> publications;
}

void Professor::putdata()
{
    cout << name << " " << age << " " << publications << " " << cur_id << endl;;
}

class Student : public Person
{
    private:
        int marks[6], sum, cur_id;
        static int id;

    public:
        Student();

        virtual void getdata();
        virtual void putdata();
};

int Student::id = 0;

Student::Student()
{
    sum = 0;
    id++;
    cur_id = id;
}

void Student::getdata()
{
    cin >> name >> age;
    for(int i = 0; i < 6; i++) {
        cin >> marks[i];
        sum += marks[i];
    }
}

void Student::putdata()
{
    cout << name << " " << age << " " << sum << " " << cur_id << endl;
}


int main()
{
    freopen("in.txt", "r", stdin);

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
