#include "DblArray.h"
namespace seneca {

    DblArray& DblArray::resize(size_t newsize)
    {
        if (newsize < 1) newsize = 1;
        double* tmp = new double[newsize];
        size_t copyUpTo = (newsize < m_size) ? newsize : m_size;
        for (size_t i = 0; i < copyUpTo; i++) tmp[i] = m_data[i];
        delete[] m_data;
        m_data = tmp;
        m_size = newsize;

        return *this;
    }

    DblArray::DblArray(size_t size) {
        if (size < 1) size = 1;
        m_data = new double[size];
        m_size = size;
    }
    DblArray::~DblArray() {
        delete[] m_data;
    }
    size_t DblArray::size() const {
        return m_size;
    }
    //double& DblArray::element(size_t index) {
    double& DblArray::operator[](size_t index) {
        // if (index >= m_size) resize(index+1);
        if (index >= m_size) resize(index); // trying to write to index out of bounds, should be resize(index + 1)???
        return m_data[index];
    }
    const double& DblArray::operator[](size_t index)const {
        return m_data[index % m_size];
    }
}