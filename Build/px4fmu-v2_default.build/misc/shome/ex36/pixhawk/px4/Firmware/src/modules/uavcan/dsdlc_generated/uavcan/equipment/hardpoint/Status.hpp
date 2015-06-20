/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /misc/shome/ex36/pixhawk/px4/Firmware/src/lib/uavcan/dsdl/uavcan/equipment/hardpoint/701.Status.uavcan
 */

#pragma once

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Generic cargo holder/hardpoint status.
#

float16 cargo_weight           # Newton
float16 cargo_weight_variance

# Meaning is the same as for command field in the Command message
uint16 status
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.hardpoint.Status
saturated float16 cargo_weight
saturated float16 cargo_weight_variance
saturated uint16 status
******************************************************************************/

#undef cargo_weight
#undef cargo_weight_variance
#undef status

#ifndef UAVCAN_PACK_STRUCTS
# error UAVCAN_PACK_STRUCTS
#endif

namespace uavcan
{
namespace equipment
{
namespace hardpoint
{

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_BEGIN
#endif

template <int _tmpl>
struct UAVCAN_EXPORT Status_
{
    typedef const Status_<_tmpl>& ParameterType;
    typedef Status_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
    };

    struct FieldTypes
    {
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > cargo_weight;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > cargo_weight_variance;
        typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > status;
    };

    enum
    {
        MinBitLen
            = FieldTypes::cargo_weight::MinBitLen
            + FieldTypes::cargo_weight_variance::MinBitLen
            + FieldTypes::status::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::cargo_weight::MaxBitLen
            + FieldTypes::cargo_weight_variance::MaxBitLen
            + FieldTypes::status::MaxBitLen
    };

    // Constants

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::cargo_weight >::Type cargo_weight;
    typename ::uavcan::StorageType< typename FieldTypes::cargo_weight_variance >::Type cargo_weight_variance;
    typename ::uavcan::StorageType< typename FieldTypes::status >::Type status;

    Status_()
        : cargo_weight()
        , cargo_weight_variance()
        , status()
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
        ::uavcan::StaticAssert<48 == MaxBitLen>::check();
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

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    enum { DefaultDataTypeID = 701 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.equipment.hardpoint.Status";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_END
#endif

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool Status_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        cargo_weight == rhs.cargo_weight &&
        cargo_weight_variance == rhs.cargo_weight_variance &&
        status == rhs.status;
}

template <int _tmpl>
bool Status_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(cargo_weight, rhs.cargo_weight) &&
        ::uavcan::areClose(cargo_weight_variance, rhs.cargo_weight_variance) &&
        ::uavcan::areClose(status, rhs.status);
}

template <int _tmpl>
int Status_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::cargo_weight::encode(self.cargo_weight, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::cargo_weight_variance::encode(self.cargo_weight_variance, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::status::encode(self.status, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Status_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::cargo_weight::decode(self.cargo_weight, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::cargo_weight_variance::decode(self.cargo_weight_variance, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::status::decode(self.status, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature Status_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xB9DD38916B5DF596ULL);

    FieldTypes::cargo_weight::extendDataTypeSignature(signature);
    FieldTypes::cargo_weight_variance::extendDataTypeSignature(signature);
    FieldTypes::status::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef Status_<0> Status;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::equipment::hardpoint::Status > _uavcan_gdtr_registrator_Status;

}

} // Namespace uavcan
} // Namespace equipment
} // Namespace hardpoint

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::equipment::hardpoint::Status >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::equipment::hardpoint::Status::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::equipment::hardpoint::Status >::stream(Stream& s, ::uavcan::equipment::hardpoint::Status::ParameterType obj, const int level)
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
    s << "cargo_weight: ";
    YamlStreamer< ::uavcan::equipment::hardpoint::Status::FieldTypes::cargo_weight >::stream(s, obj.cargo_weight, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "cargo_weight_variance: ";
    YamlStreamer< ::uavcan::equipment::hardpoint::Status::FieldTypes::cargo_weight_variance >::stream(s, obj.cargo_weight_variance, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "status: ";
    YamlStreamer< ::uavcan::equipment::hardpoint::Status::FieldTypes::status >::stream(s, obj.status, level + 1);
}

}

namespace uavcan
{
namespace equipment
{
namespace hardpoint
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::equipment::hardpoint::Status::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::equipment::hardpoint::Status >::stream(s, obj, 0);
    return s;
}

}
}
}