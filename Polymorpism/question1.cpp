#include <iostream>

class Kurt {
public:
    virtual void a() {
        std::cout << "K A" << std::endl;
    }

    virtual void c() {
        std::cout << "K C" << std::endl;
    }
};

class Eddie : public Kurt {
public:
    virtual void b() {
        std::cout << "E B" << std::endl;
    }

    virtual void c() {
        std::cout << "E C" << std::endl;
    }
};

class Jerry : public Kurt {
public:
    virtual void a() {
        std::cout << "J A" << std::endl;
    }

    virtual void c() {
        std::cout << "J C" << std::endl;
        Kurt::c();
    }
};

class Chris : public Jerry {
public:
    virtual void b() {
        std::cout << "C B" << std::endl;
    }

    virtual void c() {
        std::cout << "C C" << std::endl;
        Jerry::c();
    }

    virtual void d() {
        std::cout << "C D" << std::endl;
    }
};

int main() {
    Kurt* var1 = new Jerry();
    Jerry* var2 = new Chris();
    Kurt* var3 = new Eddie();
    Kurt* var4 = new Chris();
    Kurt* var5 = new Kurt();

    var1->a(); // K A
    var1->b(); // ERROR
    var1->c(); // K C

    var2->a(); // J A
    var2->b(); // J A C B
    var2->c(); // J C K C

    var3->a(); // K A
    var3->b(); // E B

    var4->a(); // J A

    var5->a(); // K A

    ((Jerry*) var1)->a(); // J A
    ((Jerry*) var1)->b(); // ERROR

    ((Chris*) var2)->d(); // C D

    ((Eddie*) var3)->b(); // E B

    ((Jerry*) var4)->a(); // J A
    ((Jerry*) var4)->b(); // J A C B

    ((Jerry*) var5)->b(); // ERROR

    return 0;
}