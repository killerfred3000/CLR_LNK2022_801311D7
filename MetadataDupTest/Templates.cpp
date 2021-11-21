#include "Templates.h"

#include "UnmanagedClass.h"

template <typename T>
BaseTemplate<T>::BaseTemplate(T& obj) :
    field(obj)
{ }

template ref class BaseTemplate<Unmanaged>;

template <typename T>
DerivedTemplate<T>::DerivedTemplate(T& t) :
    BaseTemplate<T>(t)
{ }

template ref class DerivedTemplate<Unmanaged>;