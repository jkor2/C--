#ifndef PERSON_H_
#define PERSON_H_

class Person
{
private:
    int siblings;
    std::string mood;
    std::string name;

public:
    void greeting();
    void privateData();
};

#endif