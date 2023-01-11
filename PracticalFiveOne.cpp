#include<stdio.h>
#include<utility>
using namespace std;

class String
{
    private:
        int length;
        char* buffer;
    public:

    String()
    {
        this->length = 0;
        this->buffer = NULL;
    }

    String (char * p, int length)
    {
        this->length = length;
        this->buffer = p;
    }

    String(const String & s)
    {
        this->length = s.length;
        this->buffer = new char[this->length];
        for(int i = 0; i<s.length; i++)
        {
            this->buffer[i] = s.buffer[i];
        }
    }

    String(String && s)
    {
        this->length = s.length;
        this->buffer = s.buffer;
        s.buffer = NULL;
    }

    

    ~String()
    {
        if(this->buffer != NULL)
        {
            delete(this->buffer);
        }
    }

    char getCharAt(int index)
    {
        return this->buffer[index];
    }

    char setCharAt(int index, char c)
    {
        this->buffer[index] = c;
    }

    int getLength()
    {
        return this->length;
    }

    
};
int main()
{
    char *str;
    printf("Enter a string: \n");
    fgets(str, 100, stdin);
    String s1;
    String s2(str, 100);
    String s3 = s1;
    //String s4(move(s1));
    String s5 = move(s3);

    printf("char at 0 of s1 = %c\n\nlength of s3 = %d",s1.getCharAt(0), s3.getLength());
}