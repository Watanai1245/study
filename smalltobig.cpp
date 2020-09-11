#include<iostream>
using namespace std;
struct MyStruct
{
    string a;
    int i;
}x;

void change (int i, string a)
{
    struct MyStruct *word = &x;
    for (word->i = 0; word->a[word->i] != '\0'; word->i++)
    {
        if (word->a[word->i] >= 65 && word->a[word->i] <= 90)
        {
            word->a[word->i] = word->a[word->i] - 'A' + 'a';
            cout << word->a[word->i];
        }
        else if (word->a[word->i] >= 97 && word->a[word->i] <= 122)
        {
            word->a[word->i] = word->a[word->i] - 'a' + 'A';
            cout << word->a[word->i];
        }
    }
}

int main()
{
    struct MyStruct *word = &x;
    cin >> word->a;
    change(word->i, word->a);
    return 0;
}


