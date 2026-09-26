//
// Created by archana-kumari on 9/26/26.
//
#include <iostream>

class Printable {
public:
    Printable() {
        std::cout << "Printable constructor called" << std::endl;
    }

    virtual void print() = 0; // Pure virtual function
    virtual void scan() = 0; // Pure virtual function
    virtual ~Printable() {
        std::cout << "Printable destructor called" << std::endl;
    } // Virtual destructor
};

class Document : public Printable {
public:
    Document() {
        std::cout << "Document constructor called" << std::endl;
    }

    void print() override {
        std::cout << "Printing document..." << std::endl;
    }

    void scan() override {
        std::cout << "Scanning document..." << std::endl;
    }

    ~Document() {
        std::cout << "Document destructor called" << std::endl;
    }
};

class Photo : public Printable {
public:
    Photo() {
        std::cout << "Photo constructor called" << std::endl;
    }

    void print() override {
        std::cout << "Printing photo..." << std::endl;
    }

    void scan() override {
        std::cout << "Scanning photo..." << std::endl;
    }

    ~Photo() {
        std::cout << "Photo destructor called" << std::endl;
    }
};

int main() {
    Printable *doc = new Document();
    doc->print();
    doc->scan();
    delete doc;

    std::cout << std::endl;

    Printable *photo = new Photo();
    photo->print();
    photo->scan();
    delete photo;

    return 0;
}