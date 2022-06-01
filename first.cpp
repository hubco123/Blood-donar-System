#include <iostream>
using namespace std;
struct data
{
    string name;
    string department;
    string blood;
    int numofdon;
    int age;
    string roll_num;
   
};
void dataRecordordAddition(data dataRecord[], int &total)
{
    cin.ignore();
    cout << endl;
    cout << "Enter the name of the donor:" << endl;
    getline(cin, dataRecord[total].name);
    cout << "Enter the roll number of the donor:" << endl;
    getline(cin, dataRecord[total].roll_num);
    cout << "Enter the department of the donor:" << endl;
    getline(cin, dataRecord[total].department);
    cout << "Enter the blood of the donor:" << endl;
    getline(cin, dataRecord[total].blood);
    cout << "Enter the num of donation of the donor:" << endl;
    cin >> dataRecord[total].numofdon;
    cout << "Enter the age of the donor:" << endl;
    cin >> dataRecord[total].age;
    total++;
    cout << endl;
}
void dataRecordord_Deletion(data dataRecord[], int &total)
{
    cin.ignore();
    cout << endl;
    string name;
    cout << "Enter the name of the donor to delete its data:" << endl;
    getline(cin, name);
    cout << endl;
    for (int i = 0; i <= total; i++)
    {
        if (dataRecord[i].name == name)
        {
            for (int j = i; j <= total; j++)
            {
                dataRecord[j].name = dataRecord[j + 1].name;
                dataRecord[j].roll_num = dataRecord[j + 1].roll_num;
                dataRecord[j].department = dataRecord[j + 1].department;
                dataRecord[j].blood = dataRecord[j + 1].blood;
                dataRecord[j].numofdon = dataRecord[j + 1].numofdon;
                dataRecord[j].age = dataRecord[j + 1].age;
            }
            break;
        }
    }
    total--;
    cout << endl;
}
void bloodGroupSearching(data dataRecord[], int total)
{
    cin.ignore();
    cout << endl;
    string blood;
    cout << "Enter the blood group of the donor to search its data:" << endl;
    getline(cin, blood);
    cout << endl;
    for (int i = 0; i <= total; i++)
    {
        if (dataRecord[i].blood == blood)
        {
            cout << "The name of the donor = " << dataRecord[i].name << endl;
            cout << "The roll number of the donor = " << dataRecord[i].roll_num << endl;
            cout << "The department of the donor = " << dataRecord[i].department << endl;
            cout << "The blood group of the donor = " << dataRecord[i].blood << endl;
            cout << "The number of donation of the donor = " << dataRecord[i].numofdon << endl;
            cout << "The age of the donor = " << dataRecord[i].age << endl;
        }
    }
    cout << endl;
}
void update(data dataRecord[], int total)
{
    cin.ignore();
    cout << endl;
    string name;
    cout << "Enter the name of the donor to update its data:" << endl;
    getline(cin, name);
    cout << endl;
    for (int i = 0; i <= total; i++)
    {
        if (dataRecord[i].name == name)
        {
            cout << "The number of donation of the blood donor is updated from " << dataRecord[i].numofdon << " to " << dataRecord[i].numofdon + 1 << endl;
            dataRecord[i].numofdon++;
            cout << "The dataRecordord updated successfully:" << endl;
            break;
        }
    }
    cout << endl;
}
void dataRecordordSearching(data dataRecord[], int total)
{
    cin.ignore();
    cout << endl;
    string name;
    cout << "Enter the name of the donor to search its data:" << endl;
    getline(cin, name);
    cout << endl;
    for (int i = 0; i <= total; i++)
    {
        if (dataRecord[i].name == name)
        {
            cout << "The name of the donor = " << dataRecord[i].name << endl;
            cout << "The roll number of the donor = " << dataRecord[i].roll_num << endl;
            cout << "The department of the donor = " << dataRecord[i].department << endl;
            cout << "The blood group of the donor = " << dataRecord[i].blood << endl;
            cout << "The number of donation of the donor = " << dataRecord[i].numofdon << endl;
            cout << "The age of the donor = " << dataRecord[i].age << endl;
            break;
        }
    }
    cout << endl;
}

int main()
{
    int total = 1000;
    int i = 0;
    data donorData[total];
    bool flag = false;
    do
    {
        char ch;
        cout << endl;
        cout << "Enter A to add the dataRecordord:" << endl;
        cout << "Enter D delete the dataRecordord:" << endl;
        cout << "Enter B search the dataRecordord by blood group:" << endl;
        cout << "Enter S search the dataRecordord by the name:" << endl;
        cout << "Enter U update the dataRecordord:" << endl;
        cout << "Enter Q to quit :" << endl;
        cin >> ch;
        ch = tolower(ch);
        if (ch == 'a')
        {
            dataRecordordAddition(donorData, i);
        }
        if (ch == 's')
        {
            dataRecordordSearching(donorData, i);
        }
        if (ch == 'b')
        {
            bloodGroupSearching(donorData, i);
        }
        if (ch == 'u')
        {
            update(donorData, i);
        }
        if (ch == 'd')
        {
            dataRecordord_Deletion(donorData, i);
        }
        if (ch == 'q')
        {
            cout << "You are quited:" << endl;
            flag = true;
        }
}
while (flag == false)
    ;

return 0;
}
