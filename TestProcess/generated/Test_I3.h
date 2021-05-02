// This file was generated from "Test_I3.idl"
// Nirvana IDL compiler version 1.0
#ifndef IDL_TEST_I3_H_
#define IDL_TEST_I3_H_
#include "Test_I1.h"
#include "Test_I2.h"

namespace Test {

class I3;
extern const ::Nirvana::ImportInterfaceT < ::CORBA::TypeCode> _tc_I3;

}

namespace CORBA {
namespace Nirvana {

template <>
struct Type < ::Test::I3> : TypeObject < ::Test::I3>
{
	static I_ptr <TypeCode> type_code ()
	{
		return ::Test::_tc_I3;
	}
};

}
}

namespace Test {

#ifdef LEGACY_CORBA_CPP
typedef ::CORBA::Nirvana::Type <I3>::C_ptr I3_ptr;
typedef ::CORBA::Nirvana::Type <I3>::C_var I3_var;
typedef I3_var& I3_out;
#endif

}

namespace CORBA {
namespace Nirvana {

template <>
struct Definitions < ::Test::I3>
{
};

NIRVANA_BRIDGE_BEGIN (::Test::I3, "IDL:Test/I3:1.0")
NIRVANA_BASE_ENTRY (Object, CORBA_Object)
NIRVANA_BASE_ENTRY (::Test::I1, _Test_I1)
NIRVANA_BASE_ENTRY (::Test::I2, _Test_I2)
NIRVANA_BRIDGE_EPV
Type <Long>::ABI_ret (*op3) (Bridge < ::Test::I3>* _b, Type <Long>::ABI_in, Interface* _env);
NIRVANA_BRIDGE_END ()

template <class T>
class Client <T, ::Test::I3> :
	public T,
	public Definitions < ::Test::I3>
{
public:
	Type <Long>::Var op3 (Type <Long>::C_in p1);
};

template <class T>
Type <Long>::Var Client <T, ::Test::I3>::op3 (Type <Long>::C_in p1)
{
	Environment _env;
	Bridge < ::Test::I3>& _b (T::_get_bridge (_env));
	Type <Long>::C_ret _ret = (_b._epv ().epv.op3) (&_b, &p1, &_env);
	_env.check ();
	return _ret;
}

}
}

namespace Test {

class I3 : public ::CORBA::Nirvana::ClientInterface <I3, I1, I2, ::CORBA::Object>
{
public:
};

}

#endif
