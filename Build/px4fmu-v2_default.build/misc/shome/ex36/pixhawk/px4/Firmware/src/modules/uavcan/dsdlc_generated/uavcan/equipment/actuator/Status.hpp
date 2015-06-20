/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /misc/shome/ex36/pixhawk/px4/Firmware/src/lib/uavcan/dsdl/uavcan/equipment/actuator/600.Status.uavcan
 */

#pragma once

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Generic actuator feedback, if available.
# Unknown components should be NAN.
#

uint8 actuator_id

float16 position     # Position feedback; same units as command
float16 power        # Watt
float16 force        # Newton (sign depends on the direction of the force)

uint7 POWER_RATING_PCT_UNKNOWN = 127
uint7 power_rating_pct                # 0 - unloaded, 100 - full load/overload
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.actuator.Status
saturated uint8 actuator_id
saturated float16 position
saturated float16 power
saturated float16 force
saturated uint7 power_rating_pct
saturated uint7 POWER_RATING_PCT_UNKNOWN = 127
******************************************************************************/

#undef actuator_id
#undef position
#undef power
#undef force
#undef power_rating_pct
#undef POWER_RATING_PCT_UNKNOWN

#ifndef UAVCAN_PACK_STRUCTS
# error UAVCAN_PACK_STRUCTS
#endif

namespace uavcan
{
namespace equipment
{
namespace actuator
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
        typedef ::uavcan::IntegerSpec< 7, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > POWER_RATING_PCT_UNKNOWN;
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > actuator_id;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > position;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > power;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > force;
        typedef ::uavcan::IntegerSpec< 7, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > power_rating_pct;
    };

    enum
    {
        MinBitLen
            = FieldTypes::actuator_id::MinBitLen
            + FieldTypes::position::MinBitLen
            + FieldTypes::power::MinBitLen
            + FieldTypes::force::MinBitLen
            + FieldTypes::power_rating_pct::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::actuator_id::MaxBitLen
            + FieldTypes::position::MaxBitLen
            + FieldTypes::power::MaxBitLen
            + FieldTypes::force::MaxBitLen
            + FieldTypes::power_rating_pct::MaxBitLen
    };

    // Constants
    static const typename ::uavcan::StorageType< typename ConstantTypes::POWER_RATING_PCT_UNKNOWN >::Type POWER_RATING_PCT_UNKNOWN; // 127

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::actuator_id >::Type actuator_id;
    typename ::uavcan::StorageType< typename FieldTypes::position >::Type position;
    typename ::uavcan::StorageType< typename FieldTypes::power >::Type power;
    typename ::uavcan::StorageType< typename FieldTypes::force >::Type force;
    typename ::uavcan::StorageType< typename FieldTypes::power_rating_pct >::Type power_rating_pct;

    Status_()
        : actuator_id()
        , position()
        , power()
        , force()
        , power_rating_pct()
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
        ::uavcan::StaticAssert<63 == MaxBitLen>::check();
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
    enum { DefaultDataTypeID = 600 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.equipment.actuator.Status";
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
        actuator_id == rhs.actuator_id &&
        position == rhs.position &&
        power == rhs.power &&
        force == rhs.force &&
        power_rating_pct == rhs.power_rating_pct;
}

template <int _tmpl>
bool Status_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(actuator_id, rhs.actuator_id) &&
        ::uavcan::areClose(position, rhs.position) &&
        ::uavcan::areClose(power, rhs.power) &&
        ::uavcan::areClose(force, rhs.force) &&
        ::uavcan::areClose(power_rating_pct, rhs.power_rating_pct);
}

template <int _tmpl>
int Status_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::actuator_id::encode(self.actuator_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::position::encode(self.position, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::power::encode(self.power, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::force::encode(self.force, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::power_rating_pct::encode(self.power_rating_pct, codec,  tao_mode);
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
    res = FieldTypes::actuator_id::decode(self.actuator_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::position::decode(self.position, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::power::decode(self.power, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::force::decode(self.force, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::power_rating_pct::decode(self.power_rating_pct, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature Status_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x7E9D6ED9D870FED6ULL);

    FieldTypes::actuator_id::extendDataTypeSignature(signature);
    FieldTypes::position::extendDataTypeSignature(signature);
    FieldTypes::power::extendDataTypeSignature(signature);
    FieldTypes::force::extendDataTypeSignature(signature);
    FieldTypes::power_rating_pct::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename Status_<_tmpl>::ConstantTypes::POWER_RATING_PCT_UNKNOWN >::Type
    Status_<_tmpl>::POWER_RATING_PCT_UNKNOWN = 127U; // 127

/*
 * Final typedef
 */
typedef Status_<0> Status;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::equipment::actuator::Status > _uavcan_gdtr_registrator_Status;

}

} // Namespace uavcan
} // Namespace equipment
} // Namespace actuator

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::equipment::actuator::Status >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::equipment::actuator::Status::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::equipment::actuator::Status >::stream(Stream& s, ::uavcan::equipment::actuator::Status::ParameterType obj, const int level)
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
    s << "actuator_id: ";
    YamlStreamer< ::uavcan::equipment::actuator::Status::FieldTypes::actuator_id >::stream(s, obj.actuator_id, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "position: ";
    YamlStreamer< ::uavcan::equipment::actuator::Status::FieldTypes::position >::stream(s, obj.position, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "power: ";
    YamlStreamer< ::uavcan::equipment::actuator::Status::FieldTypes::power >::stream(s, obj.power, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "force: ";
    YamlStreamer< ::uavcan::equipment::actuator::Status::FieldTypes::force >::stream(s, obj.force, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "power_rating_pct: ";
    YamlStreamer< ::uavcan::equipment::actuator::Status::FieldTypes::power_rating_pct >::stream(s, obj.power_rating_pct, level + 1);
}

}

namespace uavcan
{
namespace equipment
{
namespace actuator
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::equipment::actuator::Status::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::equipment::actuator::Status >::stream(s, obj, 0);
    return s;
}

}
}
}