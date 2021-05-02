// This file was generated from "Test_I3_factory.idl"
// Nirvana IDL compiler version 1.0
#ifndef IDL_TEST_I3_FACTORY_H_
#define IDL_TEST_I3_FACTORY_H_
#include "Test_I3.h"

namespace Test {

class I3_factory;
extern const ::Nirvana::ImportInterfaceT < ::CORBA::TypeCode> _tc_I3_factory;

}

namespace CORBA {
namespace Nirvana {

template <>
struct Type < ::Test::I3_factory> : TypeObject < ::Test::I3_factory>
{
	static I_ptr <TypeCode> type_code ()
	{
		return ::Test::_tc_I3_factory;
	}
};

}
}

namespace Test {

#ifdef LEGACY_CORBA_CPP
typedef ::CORBA::Nirvana::Type <I3_factory>::C_ptr I3_factory_ptr;
typedef ::CORBA::Nirvana::Type <I3_factory>::C_var I3_factory_var;
typedef I3_factory_var& I3_factory_out;
#endif

}

namespace CORBA {
namespace Nirvana {

template <>
struct Definitions < ::Test::I3_factory>
{
};

NIRVANA_BRIDGE_BEGIN (::Test::I3_factory, "IDL:Test/I3_factory:1.0")
NIRVANA_BASE_ENTRY (Object, CORBA_Object)
NIRVANA_BRIDGE_EPV
Interface* (*create) (Bridge < ::Test::I3_factory>* _b, Type <Long>::ABI_in, Interface* _env);
NIRVANA_BRIDGE_END ()

template <class T>
class Client <T, ::Test::I3_factory> :
	public T,
	public Definitions < ::Test::I3_factory>
{
public:
	Type < ::Test::I3>::Var create (Type <Long>::C_in addendum);
};

template <class T>
Type < ::Test::I3>::Var Client <T, ::Test::I3_factory>::create (Type <Long>::C_in addendum)
{
	Environment _env;
	Bridge < ::Test::I3_factory>& _b (T::_get_bridge (_env));
	Type < ::Test::I3>::C_ret _ret = (_b._epv ().epv.create) (&_b, &addendum, &_env);
	_env.check ();
	return _ret;
}

}
}

namespace Test {

class I3_factory : public ::CORBA::Nirvana::ClientInterface <I3_factory, ::CORBA::Object>
{
public:
};

}

#endif
