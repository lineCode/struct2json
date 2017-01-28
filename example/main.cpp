#include <iostream>
#include "student.h"


using namespace std;
using namespace School;


int main(int argc, const char *argv[])
{
    student s;
    s.name = "wangcheng";
    s.age = 16;

    string json;
    School_student_struct2json(s, json, true);

    cout << json << endl;

    student s1;
    School_student_json2struct(json.c_str(), s1, true);
    cout << "name=" << s1.name << endl;
    cout << "age=" << s1.age << endl;

    return 0;
}

