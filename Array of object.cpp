/*1.
Write a program to print the name, salary and date of joining of 10 employees in a company. Use array of objects.*/

#include <iostream>
#include <cstring>
using namespace std;

class Empolys
{
private:
    double salary;


public:
    string name;
    string join;
    void Input();
    void output();

};
void Empolys::Input()
{
    cout << "Enter Name :";
    cin >> name;
    cout<< "Enter Salary :";
    cin >> salary;
    cout<< "Enter Date of joining : ";
    cin >> join;
}
void Empolys::output()
{
    cout << "Enter Name :"<< name<<endl;
    cout<< "Enter Salary :"<<salary<<endl;
    cout<< "Enter Date of joining : "<< join<<endl;
}
int main()
{
    Empolys ID[100];
    int n,i,j;
    cout <<"Enter the number of employs : "<<endl;
    cin>> n;
    for (i = 0; i<n; i++){
            cout << "Enter The "<< i+1<< " Empolys Info : "<<endl;
        ID[i].Input();
    }

     for (i =0; i<=n;i++){

        ID[i].output();
     }

}



/*2.Write a program to print the roll number and average marks of 8 students in three subjects (each out of 100). The marks are entered by the user and the roll numbers are automatically assigned.*/
#include<iostream>
using namespace std;
class student
{
public:
    int bangla;
int eng;
int math;
    void getinfo();
    void showinfo();
};
void student::getinfo()
{
    cout << "Bangla : ";
    cin >> bangla;
    cout << "English : ";
    cin >> eng;
    cout << "MAth : ";
    cin >> math;
}
void student::showinfo()
{
    double avg;
    avg = (bangla+eng+math)/3;
    cout<< "AVG ; "<<avg;
}
int main()
{
    student a[8];
    int i;
    for(i=1;i<=8;i++){
        a[i].getinfo();
    }
    for( i=1;i<=8;i++){
        cout << "student roll no: " << i<<endl;
        a[i].showinfo();
        cout << endl;
    }
    return 0;
}

/*3.Write a program to calculate the average height of all the students of a class. The number of students and their heights are entered by the user.*/

#include <iostream>
using namespace std;
class Student
{
private:
    int x;
public:
    friend void output(Student obj);
    void input()
    {
        cout<<"Input Number: ";
        cin>>x;
    }
};
void output(Student obj)
{
    cout<<obj.x<<endl;
}
int main()
{
    Student obj[5];
    for(int i=0;i<5;i++)
    {
        obj[i].input();
    }
    for(int i=0;i<5;i++)
    {
        output(obj[i]);
    }
}

4. Write A C++ Program Using Array Of Objects To Display Area Of Multiple Rectangles.
#include <iostream>
using namespace std;
class Student
{
private:
    int L;
    int W;
public:
    void input();
    void Output();
};

void Student::input()
{
    cout << "Enter L :";
    cin >> L;
    cout << "Enter W : ";
    cin >>W;
}
void Student :: Output()
{
    double area;
    area = L*W;
    cout << "Area = "<<area<<endl;

}
int main()
{
    Student obj[50];
    int N;
    cin>> N;

    for(int i=0;i<N;i++)
    {
        obj[i].input();
    }
    for(int i=0;i<N;i++)
    {
        cout << "The Area of Multipl rec  "<<i+1<<endl;
        obj[i].Output();
    }

}
