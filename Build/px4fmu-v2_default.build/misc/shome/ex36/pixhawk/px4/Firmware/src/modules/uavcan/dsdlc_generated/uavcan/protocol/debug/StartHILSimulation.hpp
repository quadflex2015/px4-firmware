/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /misc/shome/ex36/pixhawk/px4/Firmware/src/lib/uavcan/dsdl/uavcan/protocol/debug/1022.StartHILSimulation.uavcan
 */

#pragma once

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Start HIL simulation for the specified components.
#

uint40 MAGIC_NUMBER = 0xACCE551B1E
uint40 magic_number

uint64 component_mask   # Components are application defined

---

bool ok
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.debug.StartHILSimulation
saturated uint40 magic_number
saturated uint64 component_mask
saturated uint40 MAGIC_NUMBER = 0xACCE551B1E
---
saturated bool ok
******************************************************************************/

#undef magic_number
#undef component_mask
#undef MAGIC_NUMBER
#undef ok

#ifndef UAVCAN_PACK_STRUCTS
# error UAVCAN_PACK_STRUCTS
#endif

namespace uavcan
{
namespace protocol
{
namespace debug
{

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_BEGIN
#endif

struct UAVCAN_EXPORT StartHILSimulation_
{
    template <int _tmpl>
    struct Request_
    {
        typedef const Request_<_tmpl>& ParameterType;
        typedef Request_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
            typedef ::uavcan::IntegerSpec< 40, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > MAGIC_NUMBER;
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 40, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > magic_number;
            typedef ::uavcan::IntegerSpec< 64, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > component_mask;
        };

        enum
        {
            MinBitLen
                = FieldTypes::magic_number::MinBitLen
                + FieldTypes::component_mask::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::magic_number::MaxBitLen
                + FieldTypes::component_mask::MaxBitLen
        };

        // Constants
        static const typename ::uavcan::StorageType< typename ConstantTypes::MAGIC_NUMBER >::Type MAGIC_NUMBER; // 0xACCE551B1E

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::magic_number >::Type magic_number;
        typename ::uavcan::StorageType< typename FieldTypes::component_mask >::Type component_mask;

        Request_()
            : magic_number()
            , component_mask()
        {
            enum { MaxByteLen = ::uavcan::BitLenToByteLen<MaxBitLen>::Result };
            ::uavcan::StaticAssert<int(MaxByteLen) <= int(::uavcan::MaxTransferPayloadLen)>::check();

            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<104 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);
    };

    template <int _tmpl>
    struct Response_
    {
        typedef const Response_<_tmpl>& ParameterType;
        typedef Response_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 1, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ok;
        };

        enum
        {
            MinBitLen
                = FieldTypes::ok::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::ok::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::ok >::Type ok;

        Response_()
            : ok()
        {
            enum { MaxByteLen = ::uavcan::BitLenToByteLen<MaxBitLen>::Result };
            ::uavcan::StaticAssert<int(MaxByteLen) <= int(::uavcan::MaxTransferPayloadLen)>::check();

            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<1 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);
    };

    typedef Request_<0> Request;
    typedef Response_<0> Response;

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindService };
    enum { DefaultDataTypeID = 1022 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.protocol.debug.StartHILSimulation";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    StartHILSimulation_(); // Don't create objects of this type. Use Request/Response instead.
};

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_END
#endif

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool StartHILSimulation_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        magic_number == rhs.magic_number &&
        component_mask == rhs.component_mask;
}

template <int _tmpl>
bool StartHILSimulation_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(magic_number, rhs.magic_number) &&
        ::uavcan::areClose(component_mask, rhs.component_mask);
}

template <int _tmpl>
int StartHILSimulation_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::magic_number::encode(self.magic_number, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::component_mask::encode(self.component_mask, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int StartHILSimulation_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::magic_number::decode(self.magic_number, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::component_mask::decode(self.component_mask, codec,  tao_mode);
    return res;
}

template <int _tmpl>
bool StartHILSimulation_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        ok == rhs.ok;
}

template <int _tmpl>
bool StartHILSimulation_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(ok, rhs.ok);
}

template <int _tmpl>
int StartHILSimulation_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::ok::encode(self.ok, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int StartHILSimulation_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::ok::decode(self.ok, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature StartHILSimulation_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x8492A2DE0A497FF9ULL);

    Request::FieldTypes::magic_number::extendDataTypeSignature(signature);
    Request::FieldTypes::component_mask::extendDataTypeSignature(signature);

    Response::FieldTypes::ok::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename StartHILSimulation_::Request_<_tmpl>::ConstantTypes::MAGIC_NUMBER >::Type
    StartHILSimulation_::Request_<_tmpl>::MAGIC_NUMBER = 742196058910U; // 0xACCE551B1E

/*
 * Final typedef
 */
typedef StartHILSimulation_ StartHILSimulation;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::protocol::debug::StartHILSimulation > _uavcan_gdtr_registrator_StartHILSimulation;

}

} // Namespace uavcan
} // Namespace protocol
} // Namespace debug

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::debug::StartHILSimulation::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::debug::StartHILSimulation::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::debug::StartHILSimulation::Request >::stream(Stream& s, ::uavcan::protocol::debug::StartHILSimulation::Request::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "magic_number: ";
    YamlStreamer< ::uavcan::protocol::debug::StartHILSimulation::Request::FieldTypes::magic_number >::stream(s, obj.magic_number, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "component_mask: ";
    YamlStreamer< ::uavcan::protocol::debug::StartHILSimulation::Request::FieldTypes::component_mask >::stream(s, obj.component_mask, level + 1);
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::debug::StartHILSimulation::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::debug::StartHILSimulation::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::debug::StartHILSimulation::Response >::stream(Stream& s, ::uavcan::protocol::debug::StartHILSimulation::Response::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "ok: ";
    YamlStreamer< ::uavcan::protocol::debug::StartHILSimulation::Response::FieldTypes::ok >::stream(s, obj.ok, level + 1);
}

}

namespace uavcan
{
namespace protocol
{
namespace debug
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::debug::StartHILSimulation::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::debug::StartHILSimulation::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::debug::StartHILSimulation::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::debug::StartHILSimulation::Response >::stream(s, obj, 0);
    return s;
}

}
}
}