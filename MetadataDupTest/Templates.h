#pragma once              

template <typename T>
public ref class BaseTemplate
{
public:
    BaseTemplate(T&);

    T& field;
};

template <typename T>
public ref class DerivedTemplate :
    public BaseTemplate<T>
{
public:
    DerivedTemplate(T&);
};