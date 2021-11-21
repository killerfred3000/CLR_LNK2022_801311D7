#include "Test.h"

#include "Templates.h"
//#include "UnmanagedClass.h"

TestVM::TestVM()
{
    /*
        While introducing a base class template across my CLR project I found that if a derived template is included in a header, it must be used in the source otherwise it produces LNK2022 (801311D7).

        The same pattern using the base class produces no errors.

        If the derived template is used elsewhere the error still happens.

        VS Professional 2019: 16.11.4.  CLR Class Library.
    */
    //member->field.ID;// Comment out this line or this line and the include reproduces the error.
}