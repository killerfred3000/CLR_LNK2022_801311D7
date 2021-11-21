#pragma once
struct Unmanaged;

template <typename T> ref class DerivedTemplate;

public ref class Test2VM
{
public:
    Test2VM();

    DerivedTemplate<Unmanaged>^ member;
};
