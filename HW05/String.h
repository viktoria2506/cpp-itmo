#ifndef HW05_MYSTRING_H
#define HW05_MYSTRING_H

class String{

public:
    size_t length;

    String(const char* s = "");
    String(const String& _s);
    String(size_t n, char c);
    ~String();

    String& append(const String &s);
    String& operator= (const String &s);
    String& operator+= (const String &s);
    String operator+(const String& s) const;

    friend std::ostream& operator<<(std::ostream&, const String&);
    friend std::istream& operator>>(std::istream&, String&);

private:
    char* mStr;
};
#endif //HW05_MYSTRING_H

