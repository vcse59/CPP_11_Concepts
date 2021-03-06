#ifndef _SAMPLE_CLASS_H_
#define _SAMPLE_CLASS_H_

#include <initializer_list>
#include <string>

class CSampleClass
{
    public:
        // Constructor
        CSampleClass(std::initializer_list<uint32_t> array, uint8_t pRandLen = 10);
         
        // Destructor
        ~CSampleClass();

        // Copy constructor
        CSampleClass(const CSampleClass& other);

        // Copy assignment operator
        CSampleClass& operator=(const CSampleClass& other);

        // Move constructor
        CSampleClass(CSampleClass&& other);

        // Move assignment operator
        CSampleClass& operator=(CSampleClass&& other);

        // Print Content
        void print() const;

        uint32_t *mArray;
        uint32_t mSize;
        std::string mName;
        const uint8_t mRandLen;
};

#endif