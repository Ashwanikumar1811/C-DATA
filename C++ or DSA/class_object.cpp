#include <iostream>
#include <string>
using namespace std;

// class Student {
// public:
//     int RollNo;
//     string name;
//     // bool scholarship; // fixed spelling

//     Student(){
//         cout<< "Constructor ran"<<endl;
//     }
//     void getname(){
//         cout<< "Enter name: " << name << endl;
//     }

// };

// int main() {
//     Student Sahil;
//     Sahil.RollNo = 101;
//     Sahil.name = "Sahil";
//     // Sahil.scholarship = true;

//     // cout << "Roll No: " << Sahil.RollNo << endl;
//     // cout << "Name: " << Sahil.name << endl;
//     // cout << "Scholarship: " << (Sahil.scholarship ? "YES" : "NO") << endl;

//     Student Dev;
//     Dev.RollNo = 102;
//     Dev.name = "Dev";

//     Sahil.getname();
//     Dev.getname();
//     Student John;
//     John.getname(); // name is uninitialized

//     return 0;
// }



// class Animal{
//     public:
//     int legs;
//     string breed;

//     int leg (){
//         return legs;
//     }
// };

// int main(){
//     Animal Dog;
//     Dog.legs = 4;
//     Dog.breed = "Pug";
    
//     Animal Cat;  
//     Cat.breed = "Persian";

//     Animal Hen;
//     Hen.breed = "Rhode Island Red";

//     cout<<"legs = "<< Dog.leg()<< endl;
//     cout << "Breed =" << Dog.breed << endl;
// }


// class Student {
// public:
//     int rollNo;
//     string name;
//     float marks;

//     // Default constructor
//     Student() {
//         rollNo = 0;
//         name = "Unknown";
//         marks = 0.0;
//     }

//     // Parameterized constructor with 2 parameters
//     Student(int r, string n) {
//         rollNo = r;
//         name = n;
//         marks = 0.0;
//     }

//     // Parameterized constructor with 3 parameters
//     Student(int r, string n, float m) {
//         rollNo = r;
//         name = n;
//         marks = m;
//     }
//     ~Student(){
//         cout<<"Destructor called for "<< name <<endl;
//     }


//     void display() {
//         cout << "Roll No: " << rollNo << endl;
//         cout << "Name: " << name << endl;
//         cout << "Marks: " << marks << endl << endl;
//     }
// };

// int main() {
//     Student s1;                        // calls default constructor
//     Student s2(101, "Sahil");          // calls constructor with 2 parameters
//     Student s3(102, "Ravi", 92.5);     // calls constructor with 3 parameters

//     cout << "Student 1:\n";
//     s1.display();

//     cout << "Student 2:\n";
//     s2.display();

//     cout << "Student 3:\n";
//     s3.display();

//     return 0;
// }


// class student{                         // Class vant be private and struct is public by default and can be private too
//     public:
//     string name;
//     int age;
//     int roll_no;

//     void getdata(){
//         cout<< "Enter name: "<< name << endl;
//         cout<< "Enter age: "<< age << endl;
//         cout<< "Enter roll no: "<< roll_no << endl;
// }
// };

// int main(){
//     student s1, s2, s3;
//     s1.name = "Sahil";
//     s1.age = 20;
//     s1.roll_no = 101;

//     s2.name = "Ravi";
//     s2.age = 21;
//     s2.roll_no = 102;

//     s3.name = "Dev";
//     s3.age = 22;
//     s3.roll_no = 103;

//     s1.getdata();   
//     s2.getdata();
//     s3.getdata();

//     return 0;
// }   



// union student{                         // union do not allocate separate memory for each member, it uses the same memory location for all members.
//     public:                            // Only one member can hold a value at any given time.
//     int age;
//     int roll_no;

//     void getage(){
//         cout<< "Enter age: "<< age << endl;
//     }
// };
//     int main(){
//         student s1, s2, s3;
//         s1.age = 20;
//         s1.roll_no = 101;

//         s2.age = 21;
//         s2.roll_no = 102;

//         s3.age = 22;
//         s3.roll_no = 103;

//         s1.getage();   
//         s2.getage();
//         s3.getage();

//         return 0;
//     }



enum r {red, green, blue, Yellow, Pink};

Colors r;