#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// PlayFab.PlayStreamModels.StatisticLeaderboardSource
struct StatisticLeaderboardSource_t3496117074;
// System.Char[]
struct CharU5BU5D_t3855443485;
// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.LogStatement>
struct List_1_t2613636152;
// PlayFab.PlayStreamModels.ScriptExecutionError
struct ScriptExecutionError_t3566080775;
// System.String[]
struct StringU5BU5D_t1453726374;
// System.Int32[]
struct Int32U5BU5D_t2907286259;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1409761793;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2427333735;
// PlayFab.PlayStreamModels.NameIdentifier
struct NameIdentifier_t2678357796;
// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.CouponGrantedInventoryItem>
struct List_1_t2057320019;
// System.Collections.Generic.List`1<System.String>
struct List_1_t859813222;
// PlayFab.PlayStreamModels.LeaderboardSource
struct LeaderboardSource_t3852261111;
// PlayFab.PlayStreamModels.EventLocation
struct EventLocation_t1715353590;
// PlayFab.PlayStreamModels.ExecuteCloudScriptResult
struct ExecuteCloudScriptResult_t4017463769;
// PlayFab.PlayStreamModels.NameId
struct NameId_t2777016614;
// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.Region>
struct List_1_t4105128198;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2977282306;
// PlayFab.PlayStreamModels.APISettings
struct APISettings_t3971419043;
// PlayFab.PlayStreamModels.PlayerProfile
struct PlayerProfile_t256993481;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef PLAYERSTATISTIC_T1142491309_H
#define PLAYERSTATISTIC_T1142491309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerStatistic
struct  PlayerStatistic_t1142491309  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerStatistic::Id
	String_t* ___Id_0;
	// System.Int32 PlayFab.PlayStreamModels.PlayerStatistic::StatisticVersion
	int32_t ___StatisticVersion_1;
	// System.Int32 PlayFab.PlayStreamModels.PlayerStatistic::StatisticValue
	int32_t ___StatisticValue_2;
	// System.String PlayFab.PlayStreamModels.PlayerStatistic::Name
	String_t* ___Name_3;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(PlayerStatistic_t1142491309, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier((&___Id_0), value);
	}

	inline static int32_t get_offset_of_StatisticVersion_1() { return static_cast<int32_t>(offsetof(PlayerStatistic_t1142491309, ___StatisticVersion_1)); }
	inline int32_t get_StatisticVersion_1() const { return ___StatisticVersion_1; }
	inline int32_t* get_address_of_StatisticVersion_1() { return &___StatisticVersion_1; }
	inline void set_StatisticVersion_1(int32_t value)
	{
		___StatisticVersion_1 = value;
	}

	inline static int32_t get_offset_of_StatisticValue_2() { return static_cast<int32_t>(offsetof(PlayerStatistic_t1142491309, ___StatisticValue_2)); }
	inline int32_t get_StatisticValue_2() const { return ___StatisticValue_2; }
	inline int32_t* get_address_of_StatisticValue_2() { return &___StatisticValue_2; }
	inline void set_StatisticValue_2(int32_t value)
	{
		___StatisticValue_2 = value;
	}

	inline static int32_t get_offset_of_Name_3() { return static_cast<int32_t>(offsetof(PlayerStatistic_t1142491309, ___Name_3)); }
	inline String_t* get_Name_3() const { return ___Name_3; }
	inline String_t** get_address_of_Name_3() { return &___Name_3; }
	inline void set_Name_3(String_t* value)
	{
		___Name_3 = value;
		Il2CppCodeGenWriteBarrier((&___Name_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSTATISTIC_T1142491309_H
#ifndef SCRIPTEXECUTIONERROR_T3566080775_H
#define SCRIPTEXECUTIONERROR_T3566080775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.ScriptExecutionError
struct  ScriptExecutionError_t3566080775  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayStreamModels.ScriptExecutionError::Error
	String_t* ___Error_0;
	// System.String PlayFab.PlayStreamModels.ScriptExecutionError::Message
	String_t* ___Message_1;
	// System.String PlayFab.PlayStreamModels.ScriptExecutionError::StackTrace
	String_t* ___StackTrace_2;

public:
	inline static int32_t get_offset_of_Error_0() { return static_cast<int32_t>(offsetof(ScriptExecutionError_t3566080775, ___Error_0)); }
	inline String_t* get_Error_0() const { return ___Error_0; }
	inline String_t** get_address_of_Error_0() { return &___Error_0; }
	inline void set_Error_0(String_t* value)
	{
		___Error_0 = value;
		Il2CppCodeGenWriteBarrier((&___Error_0), value);
	}

	inline static int32_t get_offset_of_Message_1() { return static_cast<int32_t>(offsetof(ScriptExecutionError_t3566080775, ___Message_1)); }
	inline String_t* get_Message_1() const { return ___Message_1; }
	inline String_t** get_address_of_Message_1() { return &___Message_1; }
	inline void set_Message_1(String_t* value)
	{
		___Message_1 = value;
		Il2CppCodeGenWriteBarrier((&___Message_1), value);
	}

	inline static int32_t get_offset_of_StackTrace_2() { return static_cast<int32_t>(offsetof(ScriptExecutionError_t3566080775, ___StackTrace_2)); }
	inline String_t* get_StackTrace_2() const { return ___StackTrace_2; }
	inline String_t** get_address_of_StackTrace_2() { return &___StackTrace_2; }
	inline void set_StackTrace_2(String_t* value)
	{
		___StackTrace_2 = value;
		Il2CppCodeGenWriteBarrier((&___StackTrace_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTEXECUTIONERROR_T3566080775_H
#ifndef LOGSTATEMENT_T1443899217_H
#define LOGSTATEMENT_T1443899217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.LogStatement
struct  LogStatement_t1443899217  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayStreamModels.LogStatement::Level
	String_t* ___Level_0;
	// System.String PlayFab.PlayStreamModels.LogStatement::Message
	String_t* ___Message_1;
	// System.Object PlayFab.PlayStreamModels.LogStatement::Data
	RuntimeObject * ___Data_2;

public:
	inline static int32_t get_offset_of_Level_0() { return static_cast<int32_t>(offsetof(LogStatement_t1443899217, ___Level_0)); }
	inline String_t* get_Level_0() const { return ___Level_0; }
	inline String_t** get_address_of_Level_0() { return &___Level_0; }
	inline void set_Level_0(String_t* value)
	{
		___Level_0 = value;
		Il2CppCodeGenWriteBarrier((&___Level_0), value);
	}

	inline static int32_t get_offset_of_Message_1() { return static_cast<int32_t>(offsetof(LogStatement_t1443899217, ___Message_1)); }
	inline String_t* get_Message_1() const { return ___Message_1; }
	inline String_t** get_address_of_Message_1() { return &___Message_1; }
	inline void set_Message_1(String_t* value)
	{
		___Message_1 = value;
		Il2CppCodeGenWriteBarrier((&___Message_1), value);
	}

	inline static int32_t get_offset_of_Data_2() { return static_cast<int32_t>(offsetof(LogStatement_t1443899217, ___Data_2)); }
	inline RuntimeObject * get_Data_2() const { return ___Data_2; }
	inline RuntimeObject ** get_address_of_Data_2() { return &___Data_2; }
	inline void set_Data_2(RuntimeObject * value)
	{
		___Data_2 = value;
		Il2CppCodeGenWriteBarrier((&___Data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGSTATEMENT_T1443899217_H
#ifndef COUPONGRANTEDINVENTORYITEM_T887583084_H
#define COUPONGRANTEDINVENTORYITEM_T887583084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.CouponGrantedInventoryItem
struct  CouponGrantedInventoryItem_t887583084  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayStreamModels.CouponGrantedInventoryItem::InstanceId
	String_t* ___InstanceId_0;
	// System.String PlayFab.PlayStreamModels.CouponGrantedInventoryItem::ItemId
	String_t* ___ItemId_1;
	// System.String PlayFab.PlayStreamModels.CouponGrantedInventoryItem::CatalogVersion
	String_t* ___CatalogVersion_2;

public:
	inline static int32_t get_offset_of_InstanceId_0() { return static_cast<int32_t>(offsetof(CouponGrantedInventoryItem_t887583084, ___InstanceId_0)); }
	inline String_t* get_InstanceId_0() const { return ___InstanceId_0; }
	inline String_t** get_address_of_InstanceId_0() { return &___InstanceId_0; }
	inline void set_InstanceId_0(String_t* value)
	{
		___InstanceId_0 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceId_0), value);
	}

	inline static int32_t get_offset_of_ItemId_1() { return static_cast<int32_t>(offsetof(CouponGrantedInventoryItem_t887583084, ___ItemId_1)); }
	inline String_t* get_ItemId_1() const { return ___ItemId_1; }
	inline String_t** get_address_of_ItemId_1() { return &___ItemId_1; }
	inline void set_ItemId_1(String_t* value)
	{
		___ItemId_1 = value;
		Il2CppCodeGenWriteBarrier((&___ItemId_1), value);
	}

	inline static int32_t get_offset_of_CatalogVersion_2() { return static_cast<int32_t>(offsetof(CouponGrantedInventoryItem_t887583084, ___CatalogVersion_2)); }
	inline String_t* get_CatalogVersion_2() const { return ___CatalogVersion_2; }
	inline String_t** get_address_of_CatalogVersion_2() { return &___CatalogVersion_2; }
	inline void set_CatalogVersion_2(String_t* value)
	{
		___CatalogVersion_2 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COUPONGRANTEDINVENTORYITEM_T887583084_H
#ifndef VALUETYPE_T4023604559_H
#define VALUETYPE_T4023604559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4023604559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4023604559_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4023604559_marshaled_com
{
};
#endif // VALUETYPE_T4023604559_H
#ifndef LEADERBOARDSOURCE_T3852261111_H
#define LEADERBOARDSOURCE_T3852261111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.LeaderboardSource
struct  LeaderboardSource_t3852261111  : public RuntimeObject
{
public:
	// PlayFab.PlayStreamModels.StatisticLeaderboardSource PlayFab.PlayStreamModels.LeaderboardSource::Statistic
	StatisticLeaderboardSource_t3496117074 * ___Statistic_0;

public:
	inline static int32_t get_offset_of_Statistic_0() { return static_cast<int32_t>(offsetof(LeaderboardSource_t3852261111, ___Statistic_0)); }
	inline StatisticLeaderboardSource_t3496117074 * get_Statistic_0() const { return ___Statistic_0; }
	inline StatisticLeaderboardSource_t3496117074 ** get_address_of_Statistic_0() { return &___Statistic_0; }
	inline void set_Statistic_0(StatisticLeaderboardSource_t3496117074 * value)
	{
		___Statistic_0 = value;
		Il2CppCodeGenWriteBarrier((&___Statistic_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEADERBOARDSOURCE_T3852261111_H
#ifndef STATISTICLEADERBOARDSOURCE_T3496117074_H
#define STATISTICLEADERBOARDSOURCE_T3496117074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.StatisticLeaderboardSource
struct  StatisticLeaderboardSource_t3496117074  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayStreamModels.StatisticLeaderboardSource::StatisticName
	String_t* ___StatisticName_0;
	// System.UInt32 PlayFab.PlayStreamModels.StatisticLeaderboardSource::StatisticId
	uint32_t ___StatisticId_1;

public:
	inline static int32_t get_offset_of_StatisticName_0() { return static_cast<int32_t>(offsetof(StatisticLeaderboardSource_t3496117074, ___StatisticName_0)); }
	inline String_t* get_StatisticName_0() const { return ___StatisticName_0; }
	inline String_t** get_address_of_StatisticName_0() { return &___StatisticName_0; }
	inline void set_StatisticName_0(String_t* value)
	{
		___StatisticName_0 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_0), value);
	}

	inline static int32_t get_offset_of_StatisticId_1() { return static_cast<int32_t>(offsetof(StatisticLeaderboardSource_t3496117074, ___StatisticId_1)); }
	inline uint32_t get_StatisticId_1() const { return ___StatisticId_1; }
	inline uint32_t* get_address_of_StatisticId_1() { return &___StatisticId_1; }
	inline void set_StatisticId_1(uint32_t value)
	{
		___StatisticId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATISTICLEADERBOARDSOURCE_T3496117074_H
#ifndef ENUM_T1400231720_H
#define ENUM_T1400231720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1400231720  : public ValueType_t4023604559
{
public:

public:
};

struct Enum_t1400231720_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3855443485* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1400231720_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3855443485* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3855443485** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3855443485* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1400231720_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1400231720_marshaled_com
{
};
#endif // ENUM_T1400231720_H
#ifndef NULLABLE_1_T53833054_H
#define NULLABLE_1_T53833054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Double>
struct  Nullable_1_t53833054 
{
public:
	// T System.Nullable`1::value
	double ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t53833054, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t53833054, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T53833054_H
#ifndef NULLABLE_1_T1059554464_H
#define NULLABLE_1_T1059554464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1059554464 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1059554464, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1059554464, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1059554464_H
#ifndef NULLABLE_1_T3386535404_H
#define NULLABLE_1_T3386535404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t3386535404 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3386535404, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3386535404, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3386535404_H
#ifndef NULLABLE_1_T464247827_H
#define NULLABLE_1_T464247827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.UInt32>
struct  Nullable_1_t464247827 
{
public:
	// T System.Nullable`1::value
	uint32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t464247827, ___value_0)); }
	inline uint32_t get_value_0() const { return ___value_0; }
	inline uint32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t464247827, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T464247827_H
#ifndef TIMESPAN_T1164646297_H
#define TIMESPAN_T1164646297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t1164646297 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t1164646297, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t1164646297_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t1164646297  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t1164646297  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t1164646297  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t1164646297_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t1164646297  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t1164646297 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t1164646297  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t1164646297_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t1164646297  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t1164646297 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t1164646297  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t1164646297_StaticFields, ___Zero_7)); }
	inline TimeSpan_t1164646297  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t1164646297 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t1164646297  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T1164646297_H
#ifndef PAYMENTTYPE_T4238902870_H
#define PAYMENTTYPE_T4238902870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PaymentType
struct  PaymentType_t4238902870 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.PaymentType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaymentType_t4238902870, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAYMENTTYPE_T4238902870_H
#ifndef LOGINIDENTITYPROVIDER_T3372356463_H
#define LOGINIDENTITYPROVIDER_T3372356463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.LoginIdentityProvider
struct  LoginIdentityProvider_t3372356463 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.LoginIdentityProvider::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoginIdentityProvider_t3372356463, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINIDENTITYPROVIDER_T3372356463_H
#ifndef GAMESERVERHOSTSTOPREASON_T3370540387_H
#define GAMESERVERHOSTSTOPREASON_T3370540387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.GameServerHostStopReason
struct  GameServerHostStopReason_t3370540387 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.GameServerHostStopReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GameServerHostStopReason_t3370540387, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESERVERHOSTSTOPREASON_T3370540387_H
#ifndef PASSWORDRESETINITIATIONSOURCE_T3452347524_H
#define PASSWORDRESETINITIATIONSOURCE_T3452347524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PasswordResetInitiationSource
struct  PasswordResetInitiationSource_t3452347524 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.PasswordResetInitiationSource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PasswordResetInitiationSource_t3452347524, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PASSWORDRESETINITIATIONSOURCE_T3452347524_H
#ifndef COUNTRYCODE_T2300135987_H
#define COUNTRYCODE_T2300135987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.CountryCode
struct  CountryCode_t2300135987 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.CountryCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CountryCode_t2300135987, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COUNTRYCODE_T2300135987_H
#ifndef CURRENCY_T3718768450_H
#define CURRENCY_T3718768450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.Currency
struct  Currency_t3718768450 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.Currency::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Currency_t3718768450, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENCY_T3718768450_H
#ifndef CONTINENTCODE_T1594025311_H
#define CONTINENTCODE_T1594025311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.ContinentCode
struct  ContinentCode_t1594025311 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.ContinentCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContinentCode_t1594025311, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTINENTCODE_T1594025311_H
#ifndef AUTHENTICATIONPROVIDER_T2449058080_H
#define AUTHENTICATIONPROVIDER_T2449058080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.AuthenticationProvider
struct  AuthenticationProvider_t2449058080 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.AuthenticationProvider::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationProvider_t2449058080, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONPROVIDER_T2449058080_H
#ifndef EMAILTEMPLATETYPE_T1894938024_H
#define EMAILTEMPLATETYPE_T1894938024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.EmailTemplateType
struct  EmailTemplateType_t1894938024 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.EmailTemplateType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EmailTemplateType_t1894938024, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMAILTEMPLATETYPE_T1894938024_H
#ifndef EXECUTECLOUDSCRIPTRESULT_T4017463769_H
#define EXECUTECLOUDSCRIPTRESULT_T4017463769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.ExecuteCloudScriptResult
struct  ExecuteCloudScriptResult_t4017463769  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayStreamModels.ExecuteCloudScriptResult::FunctionName
	String_t* ___FunctionName_0;
	// System.Int32 PlayFab.PlayStreamModels.ExecuteCloudScriptResult::Revision
	int32_t ___Revision_1;
	// System.Object PlayFab.PlayStreamModels.ExecuteCloudScriptResult::FunctionResult
	RuntimeObject * ___FunctionResult_2;
	// System.Nullable`1<System.Boolean> PlayFab.PlayStreamModels.ExecuteCloudScriptResult::FunctionResultTooLarge
	Nullable_1_t1059554464  ___FunctionResultTooLarge_3;
	// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.LogStatement> PlayFab.PlayStreamModels.ExecuteCloudScriptResult::Logs
	List_1_t2613636152 * ___Logs_4;
	// System.Nullable`1<System.Boolean> PlayFab.PlayStreamModels.ExecuteCloudScriptResult::LogsTooLarge
	Nullable_1_t1059554464  ___LogsTooLarge_5;
	// System.Double PlayFab.PlayStreamModels.ExecuteCloudScriptResult::ExecutionTimeSeconds
	double ___ExecutionTimeSeconds_6;
	// System.Double PlayFab.PlayStreamModels.ExecuteCloudScriptResult::ProcessorTimeSeconds
	double ___ProcessorTimeSeconds_7;
	// System.UInt32 PlayFab.PlayStreamModels.ExecuteCloudScriptResult::MemoryConsumedBytes
	uint32_t ___MemoryConsumedBytes_8;
	// System.Int32 PlayFab.PlayStreamModels.ExecuteCloudScriptResult::APIRequestsIssued
	int32_t ___APIRequestsIssued_9;
	// System.Int32 PlayFab.PlayStreamModels.ExecuteCloudScriptResult::HttpRequestsIssued
	int32_t ___HttpRequestsIssued_10;
	// PlayFab.PlayStreamModels.ScriptExecutionError PlayFab.PlayStreamModels.ExecuteCloudScriptResult::Error
	ScriptExecutionError_t3566080775 * ___Error_11;

public:
	inline static int32_t get_offset_of_FunctionName_0() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t4017463769, ___FunctionName_0)); }
	inline String_t* get_FunctionName_0() const { return ___FunctionName_0; }
	inline String_t** get_address_of_FunctionName_0() { return &___FunctionName_0; }
	inline void set_FunctionName_0(String_t* value)
	{
		___FunctionName_0 = value;
		Il2CppCodeGenWriteBarrier((&___FunctionName_0), value);
	}

	inline static int32_t get_offset_of_Revision_1() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t4017463769, ___Revision_1)); }
	inline int32_t get_Revision_1() const { return ___Revision_1; }
	inline int32_t* get_address_of_Revision_1() { return &___Revision_1; }
	inline void set_Revision_1(int32_t value)
	{
		___Revision_1 = value;
	}

	inline static int32_t get_offset_of_FunctionResult_2() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t4017463769, ___FunctionResult_2)); }
	inline RuntimeObject * get_FunctionResult_2() const { return ___FunctionResult_2; }
	inline RuntimeObject ** get_address_of_FunctionResult_2() { return &___FunctionResult_2; }
	inline void set_FunctionResult_2(RuntimeObject * value)
	{
		___FunctionResult_2 = value;
		Il2CppCodeGenWriteBarrier((&___FunctionResult_2), value);
	}

	inline static int32_t get_offset_of_FunctionResultTooLarge_3() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t4017463769, ___FunctionResultTooLarge_3)); }
	inline Nullable_1_t1059554464  get_FunctionResultTooLarge_3() const { return ___FunctionResultTooLarge_3; }
	inline Nullable_1_t1059554464 * get_address_of_FunctionResultTooLarge_3() { return &___FunctionResultTooLarge_3; }
	inline void set_FunctionResultTooLarge_3(Nullable_1_t1059554464  value)
	{
		___FunctionResultTooLarge_3 = value;
	}

	inline static int32_t get_offset_of_Logs_4() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t4017463769, ___Logs_4)); }
	inline List_1_t2613636152 * get_Logs_4() const { return ___Logs_4; }
	inline List_1_t2613636152 ** get_address_of_Logs_4() { return &___Logs_4; }
	inline void set_Logs_4(List_1_t2613636152 * value)
	{
		___Logs_4 = value;
		Il2CppCodeGenWriteBarrier((&___Logs_4), value);
	}

	inline static int32_t get_offset_of_LogsTooLarge_5() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t4017463769, ___LogsTooLarge_5)); }
	inline Nullable_1_t1059554464  get_LogsTooLarge_5() const { return ___LogsTooLarge_5; }
	inline Nullable_1_t1059554464 * get_address_of_LogsTooLarge_5() { return &___LogsTooLarge_5; }
	inline void set_LogsTooLarge_5(Nullable_1_t1059554464  value)
	{
		___LogsTooLarge_5 = value;
	}

	inline static int32_t get_offset_of_ExecutionTimeSeconds_6() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t4017463769, ___ExecutionTimeSeconds_6)); }
	inline double get_ExecutionTimeSeconds_6() const { return ___ExecutionTimeSeconds_6; }
	inline double* get_address_of_ExecutionTimeSeconds_6() { return &___ExecutionTimeSeconds_6; }
	inline void set_ExecutionTimeSeconds_6(double value)
	{
		___ExecutionTimeSeconds_6 = value;
	}

	inline static int32_t get_offset_of_ProcessorTimeSeconds_7() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t4017463769, ___ProcessorTimeSeconds_7)); }
	inline double get_ProcessorTimeSeconds_7() const { return ___ProcessorTimeSeconds_7; }
	inline double* get_address_of_ProcessorTimeSeconds_7() { return &___ProcessorTimeSeconds_7; }
	inline void set_ProcessorTimeSeconds_7(double value)
	{
		___ProcessorTimeSeconds_7 = value;
	}

	inline static int32_t get_offset_of_MemoryConsumedBytes_8() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t4017463769, ___MemoryConsumedBytes_8)); }
	inline uint32_t get_MemoryConsumedBytes_8() const { return ___MemoryConsumedBytes_8; }
	inline uint32_t* get_address_of_MemoryConsumedBytes_8() { return &___MemoryConsumedBytes_8; }
	inline void set_MemoryConsumedBytes_8(uint32_t value)
	{
		___MemoryConsumedBytes_8 = value;
	}

	inline static int32_t get_offset_of_APIRequestsIssued_9() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t4017463769, ___APIRequestsIssued_9)); }
	inline int32_t get_APIRequestsIssued_9() const { return ___APIRequestsIssued_9; }
	inline int32_t* get_address_of_APIRequestsIssued_9() { return &___APIRequestsIssued_9; }
	inline void set_APIRequestsIssued_9(int32_t value)
	{
		___APIRequestsIssued_9 = value;
	}

	inline static int32_t get_offset_of_HttpRequestsIssued_10() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t4017463769, ___HttpRequestsIssued_10)); }
	inline int32_t get_HttpRequestsIssued_10() const { return ___HttpRequestsIssued_10; }
	inline int32_t* get_address_of_HttpRequestsIssued_10() { return &___HttpRequestsIssued_10; }
	inline void set_HttpRequestsIssued_10(int32_t value)
	{
		___HttpRequestsIssued_10 = value;
	}

	inline static int32_t get_offset_of_Error_11() { return static_cast<int32_t>(offsetof(ExecuteCloudScriptResult_t4017463769, ___Error_11)); }
	inline ScriptExecutionError_t3566080775 * get_Error_11() const { return ___Error_11; }
	inline ScriptExecutionError_t3566080775 ** get_address_of_Error_11() { return &___Error_11; }
	inline void set_Error_11(ScriptExecutionError_t3566080775 * value)
	{
		___Error_11 = value;
		Il2CppCodeGenWriteBarrier((&___Error_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTECLOUDSCRIPTRESULT_T4017463769_H
#ifndef PUSHNOTIFICATIONPLATFORM_T2408964866_H
#define PUSHNOTIFICATIONPLATFORM_T2408964866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PushNotificationPlatform
struct  PushNotificationPlatform_t2408964866 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.PushNotificationPlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PushNotificationPlatform_t2408964866, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUSHNOTIFICATIONPLATFORM_T2408964866_H
#ifndef PLAYERPROFILEPROPERTY_T2215145601_H
#define PLAYERPROFILEPROPERTY_T2215145601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerProfileProperty
struct  PlayerProfileProperty_t2215145601 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.PlayerProfileProperty::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlayerProfileProperty_t2215145601, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPROFILEPROPERTY_T2215145601_H
#ifndef EMAILVERIFICATIONSTATUS_T3096798252_H
#define EMAILVERIFICATIONSTATUS_T3096798252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.EmailVerificationStatus
struct  EmailVerificationStatus_t3096798252 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.EmailVerificationStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EmailVerificationStatus_t3096798252, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMAILVERIFICATIONSTATUS_T3096798252_H
#ifndef LEADERBOARDVERSIONCHANGEBEHAVIOR_T2746474691_H
#define LEADERBOARDVERSIONCHANGEBEHAVIOR_T2746474691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.LeaderboardVersionChangeBehavior
struct  LeaderboardVersionChangeBehavior_t2746474691 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.LeaderboardVersionChangeBehavior::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LeaderboardVersionChangeBehavior_t2746474691, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEADERBOARDVERSIONCHANGEBEHAVIOR_T2746474691_H
#ifndef STATISTICRESETINTERVALOPTION_T4041913334_H
#define STATISTICRESETINTERVALOPTION_T4041913334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.StatisticResetIntervalOption
struct  StatisticResetIntervalOption_t4041913334 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.StatisticResetIntervalOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StatisticResetIntervalOption_t4041913334, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATISTICRESETINTERVALOPTION_T4041913334_H
#ifndef NEWSSTATUS_T1693451179_H
#define NEWSSTATUS_T1693451179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.NewsStatus
struct  NewsStatus_t1693451179 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.NewsStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NewsStatus_t1693451179, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWSSTATUS_T1693451179_H
#ifndef METRICUNIT_T1334681998_H
#define METRICUNIT_T1334681998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.MetricUnit
struct  MetricUnit_t1334681998 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.MetricUnit::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MetricUnit_t1334681998, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METRICUNIT_T1334681998_H
#ifndef TASKINSTANCESTATUS_T3998601550_H
#define TASKINSTANCESTATUS_T3998601550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TaskInstanceStatus
struct  TaskInstanceStatus_t3998601550 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.TaskInstanceStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TaskInstanceStatus_t3998601550, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKINSTANCESTATUS_T3998601550_H
#ifndef ALERTSTATES_T1046021142_H
#define ALERTSTATES_T1046021142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.AlertStates
struct  AlertStates_t1046021142 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.AlertStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AlertStates_t1046021142, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALERTSTATES_T1046021142_H
#ifndef ALERTLEVEL_T1277682315_H
#define ALERTLEVEL_T1277682315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.AlertLevel
struct  AlertLevel_t1277682315 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.AlertLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AlertLevel_t1277682315, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALERTLEVEL_T1277682315_H
#ifndef STATISTICAGGREGATIONMETHOD_T691678656_H
#define STATISTICAGGREGATIONMETHOD_T691678656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.StatisticAggregationMethod
struct  StatisticAggregationMethod_t691678656 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.StatisticAggregationMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StatisticAggregationMethod_t691678656, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATISTICAGGREGATIONMETHOD_T691678656_H
#ifndef DATETIMEKIND_T2123197700_H
#define DATETIMEKIND_T2123197700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t2123197700 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t2123197700, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T2123197700_H
#ifndef PHOTONSERVICESENUM_T477314747_H
#define PHOTONSERVICESENUM_T477314747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PhotonServicesEnum
struct  PhotonServicesEnum_t477314747 
{
public:
	// System.Int32 PlayFab.PlayStreamModels.PhotonServicesEnum::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PhotonServicesEnum_t477314747, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTONSERVICESENUM_T477314747_H
#ifndef NULLABLE_1_T1393319993_H
#define NULLABLE_1_T1393319993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.LeaderboardVersionChangeBehavior>
struct  Nullable_1_t1393319993 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1393319993, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1393319993, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1393319993_H
#ifndef NULLABLE_1_T2645446852_H
#define NULLABLE_1_T2645446852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.TaskInstanceStatus>
struct  Nullable_1_t2645446852 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2645446852, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2645446852, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2645446852_H
#ifndef NULLABLE_1_T4276494596_H
#define NULLABLE_1_T4276494596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.MetricUnit>
struct  Nullable_1_t4276494596 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t4276494596, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t4276494596, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T4276494596_H
#ifndef NULLABLE_1_T340296481_H
#define NULLABLE_1_T340296481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.NewsStatus>
struct  Nullable_1_t340296481 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t340296481, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t340296481, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T340296481_H
#ifndef NULLABLE_1_T1743643554_H
#define NULLABLE_1_T1743643554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.EmailVerificationStatus>
struct  Nullable_1_t1743643554 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1743643554, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1743643554, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1743643554_H
#ifndef NULLABLE_1_T240870613_H
#define NULLABLE_1_T240870613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.ContinentCode>
struct  Nullable_1_t240870613 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t240870613, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t240870613, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T240870613_H
#ifndef NULLABLE_1_T946981289_H
#define NULLABLE_1_T946981289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.CountryCode>
struct  Nullable_1_t946981289 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t946981289, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t946981289, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T946981289_H
#ifndef NULLABLE_1_T2885748172_H
#define NULLABLE_1_T2885748172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.PaymentType>
struct  Nullable_1_t2885748172 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2885748172, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2885748172, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2885748172_H
#ifndef NULLABLE_1_T2688758636_H
#define NULLABLE_1_T2688758636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.StatisticResetIntervalOption>
struct  Nullable_1_t2688758636 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2688758636, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2688758636, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2688758636_H
#ifndef NULLABLE_1_T4219494913_H
#define NULLABLE_1_T4219494913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.AlertLevel>
struct  Nullable_1_t4219494913 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t4219494913, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t4219494913, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T4219494913_H
#ifndef NULLABLE_1_T3987833740_H
#define NULLABLE_1_T3987833740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.AlertStates>
struct  Nullable_1_t3987833740 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3987833740, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3987833740, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3987833740_H
#ifndef PLAYERLOCATION_T3274956597_H
#define PLAYERLOCATION_T3274956597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerLocation
struct  PlayerLocation_t3274956597  : public RuntimeObject
{
public:
	// PlayFab.PlayStreamModels.ContinentCode PlayFab.PlayStreamModels.PlayerLocation::ContinentCode
	int32_t ___ContinentCode_0;
	// PlayFab.PlayStreamModels.CountryCode PlayFab.PlayStreamModels.PlayerLocation::CountryCode
	int32_t ___CountryCode_1;
	// System.String PlayFab.PlayStreamModels.PlayerLocation::City
	String_t* ___City_2;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.PlayerLocation::Latitude
	Nullable_1_t53833054  ___Latitude_3;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.PlayerLocation::Longitude
	Nullable_1_t53833054  ___Longitude_4;

public:
	inline static int32_t get_offset_of_ContinentCode_0() { return static_cast<int32_t>(offsetof(PlayerLocation_t3274956597, ___ContinentCode_0)); }
	inline int32_t get_ContinentCode_0() const { return ___ContinentCode_0; }
	inline int32_t* get_address_of_ContinentCode_0() { return &___ContinentCode_0; }
	inline void set_ContinentCode_0(int32_t value)
	{
		___ContinentCode_0 = value;
	}

	inline static int32_t get_offset_of_CountryCode_1() { return static_cast<int32_t>(offsetof(PlayerLocation_t3274956597, ___CountryCode_1)); }
	inline int32_t get_CountryCode_1() const { return ___CountryCode_1; }
	inline int32_t* get_address_of_CountryCode_1() { return &___CountryCode_1; }
	inline void set_CountryCode_1(int32_t value)
	{
		___CountryCode_1 = value;
	}

	inline static int32_t get_offset_of_City_2() { return static_cast<int32_t>(offsetof(PlayerLocation_t3274956597, ___City_2)); }
	inline String_t* get_City_2() const { return ___City_2; }
	inline String_t** get_address_of_City_2() { return &___City_2; }
	inline void set_City_2(String_t* value)
	{
		___City_2 = value;
		Il2CppCodeGenWriteBarrier((&___City_2), value);
	}

	inline static int32_t get_offset_of_Latitude_3() { return static_cast<int32_t>(offsetof(PlayerLocation_t3274956597, ___Latitude_3)); }
	inline Nullable_1_t53833054  get_Latitude_3() const { return ___Latitude_3; }
	inline Nullable_1_t53833054 * get_address_of_Latitude_3() { return &___Latitude_3; }
	inline void set_Latitude_3(Nullable_1_t53833054  value)
	{
		___Latitude_3 = value;
	}

	inline static int32_t get_offset_of_Longitude_4() { return static_cast<int32_t>(offsetof(PlayerLocation_t3274956597, ___Longitude_4)); }
	inline Nullable_1_t53833054  get_Longitude_4() const { return ___Longitude_4; }
	inline Nullable_1_t53833054 * get_address_of_Longitude_4() { return &___Longitude_4; }
	inline void set_Longitude_4(Nullable_1_t53833054  value)
	{
		___Longitude_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERLOCATION_T3274956597_H
#ifndef NULLABLE_1_T2365613752_H
#define NULLABLE_1_T2365613752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.Currency>
struct  Nullable_1_t2365613752 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2365613752, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2365613752, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2365613752_H
#ifndef NULLABLE_1_T2099192826_H
#define NULLABLE_1_T2099192826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.PasswordResetInitiationSource>
struct  Nullable_1_t2099192826 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2099192826, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2099192826, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2099192826_H
#ifndef DATETIME_T1281661550_H
#define DATETIME_T1281661550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t1281661550 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t1164646297  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t1281661550, ___ticks_10)); }
	inline TimeSpan_t1164646297  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t1164646297 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t1164646297  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t1281661550, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t1281661550_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t1281661550  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t1281661550  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1453726374* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1453726374* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1453726374* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1453726374* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1453726374* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1453726374* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1453726374* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t2907286259* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t2907286259* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___MaxValue_12)); }
	inline DateTime_t1281661550  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t1281661550 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t1281661550  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___MinValue_13)); }
	inline DateTime_t1281661550  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t1281661550 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t1281661550  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t1453726374* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t1453726374** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t1453726374* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t1453726374* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t1453726374** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t1453726374* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t1453726374* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t1453726374** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t1453726374* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t1453726374* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t1453726374** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t1453726374* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t1453726374* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t1453726374** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t1453726374* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t1453726374* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t1453726374** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t1453726374* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t1453726374* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t1453726374** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t1453726374* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t2907286259* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t2907286259** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t2907286259* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t2907286259* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t2907286259** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t2907286259* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t1281661550_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T1281661550_H
#ifndef NULLABLE_1_T1055810168_H
#define NULLABLE_1_T1055810168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.PushNotificationPlatform>
struct  Nullable_1_t1055810168 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1055810168, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1055810168, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1055810168_H
#ifndef NULLABLE_1_T2017385689_H
#define NULLABLE_1_T2017385689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.GameServerHostStopReason>
struct  Nullable_1_t2017385689 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2017385689, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2017385689, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2017385689_H
#ifndef NULLABLE_1_T3419127345_H
#define NULLABLE_1_T3419127345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.PhotonServicesEnum>
struct  Nullable_1_t3419127345 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3419127345, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3419127345, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3419127345_H
#ifndef NULLABLE_1_T2019201765_H
#define NULLABLE_1_T2019201765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.LoginIdentityProvider>
struct  Nullable_1_t2019201765 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2019201765, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2019201765, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2019201765_H
#ifndef NULLABLE_1_T861990903_H
#define NULLABLE_1_T861990903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.PlayerProfileProperty>
struct  Nullable_1_t861990903 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t861990903, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t861990903, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T861990903_H
#ifndef NULLABLE_1_T3633491254_H
#define NULLABLE_1_T3633491254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.StatisticAggregationMethod>
struct  Nullable_1_t3633491254 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3633491254, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3633491254, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3633491254_H
#ifndef NULLABLE_1_T541783326_H
#define NULLABLE_1_T541783326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<PlayFab.PlayStreamModels.EmailTemplateType>
struct  Nullable_1_t541783326 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t541783326, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t541783326, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T541783326_H
#ifndef PLAYSTREAMEVENTBASE_T710997429_H
#define PLAYSTREAMEVENTBASE_T710997429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayStreamEventBase
struct  PlayStreamEventBase_t710997429  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayStreamModels.PlayStreamEventBase::Source
	String_t* ___Source_0;
	// System.String PlayFab.PlayStreamModels.PlayStreamEventBase::EventId
	String_t* ___EventId_1;
	// System.String PlayFab.PlayStreamModels.PlayStreamEventBase::EntityId
	String_t* ___EntityId_2;
	// System.String PlayFab.PlayStreamModels.PlayStreamEventBase::EntityType
	String_t* ___EntityType_3;
	// System.String PlayFab.PlayStreamModels.PlayStreamEventBase::EventNamespace
	String_t* ___EventNamespace_4;
	// System.String PlayFab.PlayStreamModels.PlayStreamEventBase::EventName
	String_t* ___EventName_5;
	// System.DateTime PlayFab.PlayStreamModels.PlayStreamEventBase::Timestamp
	DateTime_t1281661550  ___Timestamp_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.PlayStreamModels.PlayStreamEventBase::CustomTags
	Dictionary_2_t1409761793 * ___CustomTags_7;
	// System.Collections.Generic.List`1<System.Object> PlayFab.PlayStreamModels.PlayStreamEventBase::History
	List_1_t2427333735 * ___History_8;
	// System.Object PlayFab.PlayStreamModels.PlayStreamEventBase::Reserved
	RuntimeObject * ___Reserved_9;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t710997429, ___Source_0)); }
	inline String_t* get_Source_0() const { return ___Source_0; }
	inline String_t** get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(String_t* value)
	{
		___Source_0 = value;
		Il2CppCodeGenWriteBarrier((&___Source_0), value);
	}

	inline static int32_t get_offset_of_EventId_1() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t710997429, ___EventId_1)); }
	inline String_t* get_EventId_1() const { return ___EventId_1; }
	inline String_t** get_address_of_EventId_1() { return &___EventId_1; }
	inline void set_EventId_1(String_t* value)
	{
		___EventId_1 = value;
		Il2CppCodeGenWriteBarrier((&___EventId_1), value);
	}

	inline static int32_t get_offset_of_EntityId_2() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t710997429, ___EntityId_2)); }
	inline String_t* get_EntityId_2() const { return ___EntityId_2; }
	inline String_t** get_address_of_EntityId_2() { return &___EntityId_2; }
	inline void set_EntityId_2(String_t* value)
	{
		___EntityId_2 = value;
		Il2CppCodeGenWriteBarrier((&___EntityId_2), value);
	}

	inline static int32_t get_offset_of_EntityType_3() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t710997429, ___EntityType_3)); }
	inline String_t* get_EntityType_3() const { return ___EntityType_3; }
	inline String_t** get_address_of_EntityType_3() { return &___EntityType_3; }
	inline void set_EntityType_3(String_t* value)
	{
		___EntityType_3 = value;
		Il2CppCodeGenWriteBarrier((&___EntityType_3), value);
	}

	inline static int32_t get_offset_of_EventNamespace_4() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t710997429, ___EventNamespace_4)); }
	inline String_t* get_EventNamespace_4() const { return ___EventNamespace_4; }
	inline String_t** get_address_of_EventNamespace_4() { return &___EventNamespace_4; }
	inline void set_EventNamespace_4(String_t* value)
	{
		___EventNamespace_4 = value;
		Il2CppCodeGenWriteBarrier((&___EventNamespace_4), value);
	}

	inline static int32_t get_offset_of_EventName_5() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t710997429, ___EventName_5)); }
	inline String_t* get_EventName_5() const { return ___EventName_5; }
	inline String_t** get_address_of_EventName_5() { return &___EventName_5; }
	inline void set_EventName_5(String_t* value)
	{
		___EventName_5 = value;
		Il2CppCodeGenWriteBarrier((&___EventName_5), value);
	}

	inline static int32_t get_offset_of_Timestamp_6() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t710997429, ___Timestamp_6)); }
	inline DateTime_t1281661550  get_Timestamp_6() const { return ___Timestamp_6; }
	inline DateTime_t1281661550 * get_address_of_Timestamp_6() { return &___Timestamp_6; }
	inline void set_Timestamp_6(DateTime_t1281661550  value)
	{
		___Timestamp_6 = value;
	}

	inline static int32_t get_offset_of_CustomTags_7() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t710997429, ___CustomTags_7)); }
	inline Dictionary_2_t1409761793 * get_CustomTags_7() const { return ___CustomTags_7; }
	inline Dictionary_2_t1409761793 ** get_address_of_CustomTags_7() { return &___CustomTags_7; }
	inline void set_CustomTags_7(Dictionary_2_t1409761793 * value)
	{
		___CustomTags_7 = value;
		Il2CppCodeGenWriteBarrier((&___CustomTags_7), value);
	}

	inline static int32_t get_offset_of_History_8() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t710997429, ___History_8)); }
	inline List_1_t2427333735 * get_History_8() const { return ___History_8; }
	inline List_1_t2427333735 ** get_address_of_History_8() { return &___History_8; }
	inline void set_History_8(List_1_t2427333735 * value)
	{
		___History_8 = value;
		Il2CppCodeGenWriteBarrier((&___History_8), value);
	}

	inline static int32_t get_offset_of_Reserved_9() { return static_cast<int32_t>(offsetof(PlayStreamEventBase_t710997429, ___Reserved_9)); }
	inline RuntimeObject * get_Reserved_9() const { return ___Reserved_9; }
	inline RuntimeObject ** get_address_of_Reserved_9() { return &___Reserved_9; }
	inline void set_Reserved_9(RuntimeObject * value)
	{
		___Reserved_9 = value;
		Il2CppCodeGenWriteBarrier((&___Reserved_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTREAMEVENTBASE_T710997429_H
#ifndef EVENTLOCATION_T1715353590_H
#define EVENTLOCATION_T1715353590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.EventLocation
struct  EventLocation_t1715353590  : public RuntimeObject
{
public:
	// System.Nullable`1<PlayFab.PlayStreamModels.ContinentCode> PlayFab.PlayStreamModels.EventLocation::ContinentCode
	Nullable_1_t240870613  ___ContinentCode_0;
	// System.Nullable`1<PlayFab.PlayStreamModels.CountryCode> PlayFab.PlayStreamModels.EventLocation::CountryCode
	Nullable_1_t946981289  ___CountryCode_1;
	// System.String PlayFab.PlayStreamModels.EventLocation::City
	String_t* ___City_2;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.EventLocation::Latitude
	Nullable_1_t53833054  ___Latitude_3;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.EventLocation::Longitude
	Nullable_1_t53833054  ___Longitude_4;

public:
	inline static int32_t get_offset_of_ContinentCode_0() { return static_cast<int32_t>(offsetof(EventLocation_t1715353590, ___ContinentCode_0)); }
	inline Nullable_1_t240870613  get_ContinentCode_0() const { return ___ContinentCode_0; }
	inline Nullable_1_t240870613 * get_address_of_ContinentCode_0() { return &___ContinentCode_0; }
	inline void set_ContinentCode_0(Nullable_1_t240870613  value)
	{
		___ContinentCode_0 = value;
	}

	inline static int32_t get_offset_of_CountryCode_1() { return static_cast<int32_t>(offsetof(EventLocation_t1715353590, ___CountryCode_1)); }
	inline Nullable_1_t946981289  get_CountryCode_1() const { return ___CountryCode_1; }
	inline Nullable_1_t946981289 * get_address_of_CountryCode_1() { return &___CountryCode_1; }
	inline void set_CountryCode_1(Nullable_1_t946981289  value)
	{
		___CountryCode_1 = value;
	}

	inline static int32_t get_offset_of_City_2() { return static_cast<int32_t>(offsetof(EventLocation_t1715353590, ___City_2)); }
	inline String_t* get_City_2() const { return ___City_2; }
	inline String_t** get_address_of_City_2() { return &___City_2; }
	inline void set_City_2(String_t* value)
	{
		___City_2 = value;
		Il2CppCodeGenWriteBarrier((&___City_2), value);
	}

	inline static int32_t get_offset_of_Latitude_3() { return static_cast<int32_t>(offsetof(EventLocation_t1715353590, ___Latitude_3)); }
	inline Nullable_1_t53833054  get_Latitude_3() const { return ___Latitude_3; }
	inline Nullable_1_t53833054 * get_address_of_Latitude_3() { return &___Latitude_3; }
	inline void set_Latitude_3(Nullable_1_t53833054  value)
	{
		___Latitude_3 = value;
	}

	inline static int32_t get_offset_of_Longitude_4() { return static_cast<int32_t>(offsetof(EventLocation_t1715353590, ___Longitude_4)); }
	inline Nullable_1_t53833054  get_Longitude_4() const { return ___Longitude_4; }
	inline Nullable_1_t53833054 * get_address_of_Longitude_4() { return &___Longitude_4; }
	inline void set_Longitude_4(Nullable_1_t53833054  value)
	{
		___Longitude_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTLOCATION_T1715353590_H
#ifndef PLAYERLINKEDACCOUNT_T2183692335_H
#define PLAYERLINKEDACCOUNT_T2183692335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerLinkedAccount
struct  PlayerLinkedAccount_t2183692335  : public RuntimeObject
{
public:
	// System.Nullable`1<PlayFab.PlayStreamModels.LoginIdentityProvider> PlayFab.PlayStreamModels.PlayerLinkedAccount::Platform
	Nullable_1_t2019201765  ___Platform_0;
	// System.String PlayFab.PlayStreamModels.PlayerLinkedAccount::PlatformUserId
	String_t* ___PlatformUserId_1;
	// System.String PlayFab.PlayStreamModels.PlayerLinkedAccount::Username
	String_t* ___Username_2;
	// System.String PlayFab.PlayStreamModels.PlayerLinkedAccount::Email
	String_t* ___Email_3;

public:
	inline static int32_t get_offset_of_Platform_0() { return static_cast<int32_t>(offsetof(PlayerLinkedAccount_t2183692335, ___Platform_0)); }
	inline Nullable_1_t2019201765  get_Platform_0() const { return ___Platform_0; }
	inline Nullable_1_t2019201765 * get_address_of_Platform_0() { return &___Platform_0; }
	inline void set_Platform_0(Nullable_1_t2019201765  value)
	{
		___Platform_0 = value;
	}

	inline static int32_t get_offset_of_PlatformUserId_1() { return static_cast<int32_t>(offsetof(PlayerLinkedAccount_t2183692335, ___PlatformUserId_1)); }
	inline String_t* get_PlatformUserId_1() const { return ___PlatformUserId_1; }
	inline String_t** get_address_of_PlatformUserId_1() { return &___PlatformUserId_1; }
	inline void set_PlatformUserId_1(String_t* value)
	{
		___PlatformUserId_1 = value;
		Il2CppCodeGenWriteBarrier((&___PlatformUserId_1), value);
	}

	inline static int32_t get_offset_of_Username_2() { return static_cast<int32_t>(offsetof(PlayerLinkedAccount_t2183692335, ___Username_2)); }
	inline String_t* get_Username_2() const { return ___Username_2; }
	inline String_t** get_address_of_Username_2() { return &___Username_2; }
	inline void set_Username_2(String_t* value)
	{
		___Username_2 = value;
		Il2CppCodeGenWriteBarrier((&___Username_2), value);
	}

	inline static int32_t get_offset_of_Email_3() { return static_cast<int32_t>(offsetof(PlayerLinkedAccount_t2183692335, ___Email_3)); }
	inline String_t* get_Email_3() const { return ___Email_3; }
	inline String_t** get_address_of_Email_3() { return &___Email_3; }
	inline void set_Email_3(String_t* value)
	{
		___Email_3 = value;
		Il2CppCodeGenWriteBarrier((&___Email_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERLINKEDACCOUNT_T2183692335_H
#ifndef PUSHNOTIFICATIONREGISTRATION_T491890546_H
#define PUSHNOTIFICATIONREGISTRATION_T491890546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PushNotificationRegistration
struct  PushNotificationRegistration_t491890546  : public RuntimeObject
{
public:
	// System.Nullable`1<PlayFab.PlayStreamModels.PushNotificationPlatform> PlayFab.PlayStreamModels.PushNotificationRegistration::Platform
	Nullable_1_t1055810168  ___Platform_0;
	// System.String PlayFab.PlayStreamModels.PushNotificationRegistration::NotificationEndpointARN
	String_t* ___NotificationEndpointARN_1;

public:
	inline static int32_t get_offset_of_Platform_0() { return static_cast<int32_t>(offsetof(PushNotificationRegistration_t491890546, ___Platform_0)); }
	inline Nullable_1_t1055810168  get_Platform_0() const { return ___Platform_0; }
	inline Nullable_1_t1055810168 * get_address_of_Platform_0() { return &___Platform_0; }
	inline void set_Platform_0(Nullable_1_t1055810168  value)
	{
		___Platform_0 = value;
	}

	inline static int32_t get_offset_of_NotificationEndpointARN_1() { return static_cast<int32_t>(offsetof(PushNotificationRegistration_t491890546, ___NotificationEndpointARN_1)); }
	inline String_t* get_NotificationEndpointARN_1() const { return ___NotificationEndpointARN_1; }
	inline String_t** get_address_of_NotificationEndpointARN_1() { return &___NotificationEndpointARN_1; }
	inline void set_NotificationEndpointARN_1(String_t* value)
	{
		___NotificationEndpointARN_1 = value;
		Il2CppCodeGenWriteBarrier((&___NotificationEndpointARN_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUSHNOTIFICATIONREGISTRATION_T491890546_H
#ifndef ADCAMPAIGNATTRIBUTION_T2127905524_H
#define ADCAMPAIGNATTRIBUTION_T2127905524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.AdCampaignAttribution
struct  AdCampaignAttribution_t2127905524  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayStreamModels.AdCampaignAttribution::Platform
	String_t* ___Platform_0;
	// System.String PlayFab.PlayStreamModels.AdCampaignAttribution::CampaignId
	String_t* ___CampaignId_1;
	// System.DateTime PlayFab.PlayStreamModels.AdCampaignAttribution::AttributedAt
	DateTime_t1281661550  ___AttributedAt_2;

public:
	inline static int32_t get_offset_of_Platform_0() { return static_cast<int32_t>(offsetof(AdCampaignAttribution_t2127905524, ___Platform_0)); }
	inline String_t* get_Platform_0() const { return ___Platform_0; }
	inline String_t** get_address_of_Platform_0() { return &___Platform_0; }
	inline void set_Platform_0(String_t* value)
	{
		___Platform_0 = value;
		Il2CppCodeGenWriteBarrier((&___Platform_0), value);
	}

	inline static int32_t get_offset_of_CampaignId_1() { return static_cast<int32_t>(offsetof(AdCampaignAttribution_t2127905524, ___CampaignId_1)); }
	inline String_t* get_CampaignId_1() const { return ___CampaignId_1; }
	inline String_t** get_address_of_CampaignId_1() { return &___CampaignId_1; }
	inline void set_CampaignId_1(String_t* value)
	{
		___CampaignId_1 = value;
		Il2CppCodeGenWriteBarrier((&___CampaignId_1), value);
	}

	inline static int32_t get_offset_of_AttributedAt_2() { return static_cast<int32_t>(offsetof(AdCampaignAttribution_t2127905524, ___AttributedAt_2)); }
	inline DateTime_t1281661550  get_AttributedAt_2() const { return ___AttributedAt_2; }
	inline DateTime_t1281661550 * get_address_of_AttributedAt_2() { return &___AttributedAt_2; }
	inline void set_AttributedAt_2(DateTime_t1281661550  value)
	{
		___AttributedAt_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADCAMPAIGNATTRIBUTION_T2127905524_H
#ifndef CONTACTEMAILINFO_T2151835682_H
#define CONTACTEMAILINFO_T2151835682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.ContactEmailInfo
struct  ContactEmailInfo_t2151835682  : public RuntimeObject
{
public:
	// System.String PlayFab.PlayStreamModels.ContactEmailInfo::Name
	String_t* ___Name_0;
	// System.String PlayFab.PlayStreamModels.ContactEmailInfo::EmailAddress
	String_t* ___EmailAddress_1;
	// System.Nullable`1<PlayFab.PlayStreamModels.EmailVerificationStatus> PlayFab.PlayStreamModels.ContactEmailInfo::VerificationStatus
	Nullable_1_t1743643554  ___VerificationStatus_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ContactEmailInfo_t2151835682, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_EmailAddress_1() { return static_cast<int32_t>(offsetof(ContactEmailInfo_t2151835682, ___EmailAddress_1)); }
	inline String_t* get_EmailAddress_1() const { return ___EmailAddress_1; }
	inline String_t** get_address_of_EmailAddress_1() { return &___EmailAddress_1; }
	inline void set_EmailAddress_1(String_t* value)
	{
		___EmailAddress_1 = value;
		Il2CppCodeGenWriteBarrier((&___EmailAddress_1), value);
	}

	inline static int32_t get_offset_of_VerificationStatus_2() { return static_cast<int32_t>(offsetof(ContactEmailInfo_t2151835682, ___VerificationStatus_2)); }
	inline Nullable_1_t1743643554  get_VerificationStatus_2() const { return ___VerificationStatus_2; }
	inline Nullable_1_t1743643554 * get_address_of_VerificationStatus_2() { return &___VerificationStatus_2; }
	inline void set_VerificationStatus_2(Nullable_1_t1743643554  value)
	{
		___VerificationStatus_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTEMAILINFO_T2151835682_H
#ifndef NULLABLE_1_T4223474148_H
#define NULLABLE_1_T4223474148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.DateTime>
struct  Nullable_1_t4223474148 
{
public:
	// T System.Nullable`1::value
	DateTime_t1281661550  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t4223474148, ___value_0)); }
	inline DateTime_t1281661550  get_value_0() const { return ___value_0; }
	inline DateTime_t1281661550 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t1281661550  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t4223474148, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T4223474148_H
#ifndef TITLESTARTEDTASKEVENTDATA_T2703619986_H
#define TITLESTARTEDTASKEVENTDATA_T2703619986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleStartedTaskEventData
struct  TitleStartedTaskEventData_t2703619986  : public PlayStreamEventBase_t710997429
{
public:
	// PlayFab.PlayStreamModels.NameIdentifier PlayFab.PlayStreamModels.TitleStartedTaskEventData::ScheduledTask
	NameIdentifier_t2678357796 * ___ScheduledTask_10;
	// System.String PlayFab.PlayStreamModels.TitleStartedTaskEventData::TaskType
	String_t* ___TaskType_11;
	// System.Object PlayFab.PlayStreamModels.TitleStartedTaskEventData::Parameter
	RuntimeObject * ___Parameter_12;
	// System.String PlayFab.PlayStreamModels.TitleStartedTaskEventData::TaskInstanceId
	String_t* ___TaskInstanceId_13;
	// System.String PlayFab.PlayStreamModels.TitleStartedTaskEventData::ScheduledByUserId
	String_t* ___ScheduledByUserId_14;
	// System.String PlayFab.PlayStreamModels.TitleStartedTaskEventData::UserId
	String_t* ___UserId_15;
	// System.String PlayFab.PlayStreamModels.TitleStartedTaskEventData::DeveloperId
	String_t* ___DeveloperId_16;

public:
	inline static int32_t get_offset_of_ScheduledTask_10() { return static_cast<int32_t>(offsetof(TitleStartedTaskEventData_t2703619986, ___ScheduledTask_10)); }
	inline NameIdentifier_t2678357796 * get_ScheduledTask_10() const { return ___ScheduledTask_10; }
	inline NameIdentifier_t2678357796 ** get_address_of_ScheduledTask_10() { return &___ScheduledTask_10; }
	inline void set_ScheduledTask_10(NameIdentifier_t2678357796 * value)
	{
		___ScheduledTask_10 = value;
		Il2CppCodeGenWriteBarrier((&___ScheduledTask_10), value);
	}

	inline static int32_t get_offset_of_TaskType_11() { return static_cast<int32_t>(offsetof(TitleStartedTaskEventData_t2703619986, ___TaskType_11)); }
	inline String_t* get_TaskType_11() const { return ___TaskType_11; }
	inline String_t** get_address_of_TaskType_11() { return &___TaskType_11; }
	inline void set_TaskType_11(String_t* value)
	{
		___TaskType_11 = value;
		Il2CppCodeGenWriteBarrier((&___TaskType_11), value);
	}

	inline static int32_t get_offset_of_Parameter_12() { return static_cast<int32_t>(offsetof(TitleStartedTaskEventData_t2703619986, ___Parameter_12)); }
	inline RuntimeObject * get_Parameter_12() const { return ___Parameter_12; }
	inline RuntimeObject ** get_address_of_Parameter_12() { return &___Parameter_12; }
	inline void set_Parameter_12(RuntimeObject * value)
	{
		___Parameter_12 = value;
		Il2CppCodeGenWriteBarrier((&___Parameter_12), value);
	}

	inline static int32_t get_offset_of_TaskInstanceId_13() { return static_cast<int32_t>(offsetof(TitleStartedTaskEventData_t2703619986, ___TaskInstanceId_13)); }
	inline String_t* get_TaskInstanceId_13() const { return ___TaskInstanceId_13; }
	inline String_t** get_address_of_TaskInstanceId_13() { return &___TaskInstanceId_13; }
	inline void set_TaskInstanceId_13(String_t* value)
	{
		___TaskInstanceId_13 = value;
		Il2CppCodeGenWriteBarrier((&___TaskInstanceId_13), value);
	}

	inline static int32_t get_offset_of_ScheduledByUserId_14() { return static_cast<int32_t>(offsetof(TitleStartedTaskEventData_t2703619986, ___ScheduledByUserId_14)); }
	inline String_t* get_ScheduledByUserId_14() const { return ___ScheduledByUserId_14; }
	inline String_t** get_address_of_ScheduledByUserId_14() { return &___ScheduledByUserId_14; }
	inline void set_ScheduledByUserId_14(String_t* value)
	{
		___ScheduledByUserId_14 = value;
		Il2CppCodeGenWriteBarrier((&___ScheduledByUserId_14), value);
	}

	inline static int32_t get_offset_of_UserId_15() { return static_cast<int32_t>(offsetof(TitleStartedTaskEventData_t2703619986, ___UserId_15)); }
	inline String_t* get_UserId_15() const { return ___UserId_15; }
	inline String_t** get_address_of_UserId_15() { return &___UserId_15; }
	inline void set_UserId_15(String_t* value)
	{
		___UserId_15 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_15), value);
	}

	inline static int32_t get_offset_of_DeveloperId_16() { return static_cast<int32_t>(offsetof(TitleStartedTaskEventData_t2703619986, ___DeveloperId_16)); }
	inline String_t* get_DeveloperId_16() const { return ___DeveloperId_16; }
	inline String_t** get_address_of_DeveloperId_16() { return &___DeveloperId_16; }
	inline void set_DeveloperId_16(String_t* value)
	{
		___DeveloperId_16 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLESTARTEDTASKEVENTDATA_T2703619986_H
#ifndef TITLEUPDATEDTASKEVENTDATA_T1967987342_H
#define TITLEUPDATEDTASKEVENTDATA_T1967987342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleUpdatedTaskEventData
struct  TitleUpdatedTaskEventData_t1967987342  : public PlayStreamEventBase_t710997429
{
public:
	// PlayFab.PlayStreamModels.NameIdentifier PlayFab.PlayStreamModels.TitleUpdatedTaskEventData::ScheduledTask
	NameIdentifier_t2678357796 * ___ScheduledTask_10;
	// System.Boolean PlayFab.PlayStreamModels.TitleUpdatedTaskEventData::HasRenamed
	bool ___HasRenamed_11;
	// System.String PlayFab.PlayStreamModels.TitleUpdatedTaskEventData::UserId
	String_t* ___UserId_12;
	// System.String PlayFab.PlayStreamModels.TitleUpdatedTaskEventData::DeveloperId
	String_t* ___DeveloperId_13;

public:
	inline static int32_t get_offset_of_ScheduledTask_10() { return static_cast<int32_t>(offsetof(TitleUpdatedTaskEventData_t1967987342, ___ScheduledTask_10)); }
	inline NameIdentifier_t2678357796 * get_ScheduledTask_10() const { return ___ScheduledTask_10; }
	inline NameIdentifier_t2678357796 ** get_address_of_ScheduledTask_10() { return &___ScheduledTask_10; }
	inline void set_ScheduledTask_10(NameIdentifier_t2678357796 * value)
	{
		___ScheduledTask_10 = value;
		Il2CppCodeGenWriteBarrier((&___ScheduledTask_10), value);
	}

	inline static int32_t get_offset_of_HasRenamed_11() { return static_cast<int32_t>(offsetof(TitleUpdatedTaskEventData_t1967987342, ___HasRenamed_11)); }
	inline bool get_HasRenamed_11() const { return ___HasRenamed_11; }
	inline bool* get_address_of_HasRenamed_11() { return &___HasRenamed_11; }
	inline void set_HasRenamed_11(bool value)
	{
		___HasRenamed_11 = value;
	}

	inline static int32_t get_offset_of_UserId_12() { return static_cast<int32_t>(offsetof(TitleUpdatedTaskEventData_t1967987342, ___UserId_12)); }
	inline String_t* get_UserId_12() const { return ___UserId_12; }
	inline String_t** get_address_of_UserId_12() { return &___UserId_12; }
	inline void set_UserId_12(String_t* value)
	{
		___UserId_12 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_12), value);
	}

	inline static int32_t get_offset_of_DeveloperId_13() { return static_cast<int32_t>(offsetof(TitleUpdatedTaskEventData_t1967987342, ___DeveloperId_13)); }
	inline String_t* get_DeveloperId_13() const { return ___DeveloperId_13; }
	inline String_t** get_address_of_DeveloperId_13() { return &___DeveloperId_13; }
	inline void set_DeveloperId_13(String_t* value)
	{
		___DeveloperId_13 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEUPDATEDTASKEVENTDATA_T1967987342_H
#ifndef TITLESTOREUPDATEDEVENTDATA_T2144567554_H
#define TITLESTOREUPDATEDEVENTDATA_T2144567554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleStoreUpdatedEventData
struct  TitleStoreUpdatedEventData_t2144567554  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.TitleStoreUpdatedEventData::CatalogVersion
	String_t* ___CatalogVersion_10;
	// System.String PlayFab.PlayStreamModels.TitleStoreUpdatedEventData::StoreId
	String_t* ___StoreId_11;
	// System.Boolean PlayFab.PlayStreamModels.TitleStoreUpdatedEventData::Deleted
	bool ___Deleted_12;
	// System.String PlayFab.PlayStreamModels.TitleStoreUpdatedEventData::UserId
	String_t* ___UserId_13;
	// System.String PlayFab.PlayStreamModels.TitleStoreUpdatedEventData::DeveloperId
	String_t* ___DeveloperId_14;

public:
	inline static int32_t get_offset_of_CatalogVersion_10() { return static_cast<int32_t>(offsetof(TitleStoreUpdatedEventData_t2144567554, ___CatalogVersion_10)); }
	inline String_t* get_CatalogVersion_10() const { return ___CatalogVersion_10; }
	inline String_t** get_address_of_CatalogVersion_10() { return &___CatalogVersion_10; }
	inline void set_CatalogVersion_10(String_t* value)
	{
		___CatalogVersion_10 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_10), value);
	}

	inline static int32_t get_offset_of_StoreId_11() { return static_cast<int32_t>(offsetof(TitleStoreUpdatedEventData_t2144567554, ___StoreId_11)); }
	inline String_t* get_StoreId_11() const { return ___StoreId_11; }
	inline String_t** get_address_of_StoreId_11() { return &___StoreId_11; }
	inline void set_StoreId_11(String_t* value)
	{
		___StoreId_11 = value;
		Il2CppCodeGenWriteBarrier((&___StoreId_11), value);
	}

	inline static int32_t get_offset_of_Deleted_12() { return static_cast<int32_t>(offsetof(TitleStoreUpdatedEventData_t2144567554, ___Deleted_12)); }
	inline bool get_Deleted_12() const { return ___Deleted_12; }
	inline bool* get_address_of_Deleted_12() { return &___Deleted_12; }
	inline void set_Deleted_12(bool value)
	{
		___Deleted_12 = value;
	}

	inline static int32_t get_offset_of_UserId_13() { return static_cast<int32_t>(offsetof(TitleStoreUpdatedEventData_t2144567554, ___UserId_13)); }
	inline String_t* get_UserId_13() const { return ___UserId_13; }
	inline String_t** get_address_of_UserId_13() { return &___UserId_13; }
	inline void set_UserId_13(String_t* value)
	{
		___UserId_13 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_13), value);
	}

	inline static int32_t get_offset_of_DeveloperId_14() { return static_cast<int32_t>(offsetof(TitleStoreUpdatedEventData_t2144567554, ___DeveloperId_14)); }
	inline String_t* get_DeveloperId_14() const { return ___DeveloperId_14; }
	inline String_t** get_address_of_DeveloperId_14() { return &___DeveloperId_14; }
	inline void set_DeveloperId_14(String_t* value)
	{
		___DeveloperId_14 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLESTOREUPDATEDEVENTDATA_T2144567554_H
#ifndef TITLESTATISTICVERSIONCHANGEDEVENTDATA_T1243240397_H
#define TITLESTATISTICVERSIONCHANGEDEVENTDATA_T1243240397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleStatisticVersionChangedEventData
struct  TitleStatisticVersionChangedEventData_t1243240397  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.TitleStatisticVersionChangedEventData::StatisticName
	String_t* ___StatisticName_10;
	// System.UInt32 PlayFab.PlayStreamModels.TitleStatisticVersionChangedEventData::StatisticVersion
	uint32_t ___StatisticVersion_11;
	// System.Nullable`1<PlayFab.PlayStreamModels.StatisticResetIntervalOption> PlayFab.PlayStreamModels.TitleStatisticVersionChangedEventData::ScheduledResetInterval
	Nullable_1_t2688758636  ___ScheduledResetInterval_12;
	// System.Nullable`1<System.DateTime> PlayFab.PlayStreamModels.TitleStatisticVersionChangedEventData::ScheduledResetTime
	Nullable_1_t4223474148  ___ScheduledResetTime_13;

public:
	inline static int32_t get_offset_of_StatisticName_10() { return static_cast<int32_t>(offsetof(TitleStatisticVersionChangedEventData_t1243240397, ___StatisticName_10)); }
	inline String_t* get_StatisticName_10() const { return ___StatisticName_10; }
	inline String_t** get_address_of_StatisticName_10() { return &___StatisticName_10; }
	inline void set_StatisticName_10(String_t* value)
	{
		___StatisticName_10 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_10), value);
	}

	inline static int32_t get_offset_of_StatisticVersion_11() { return static_cast<int32_t>(offsetof(TitleStatisticVersionChangedEventData_t1243240397, ___StatisticVersion_11)); }
	inline uint32_t get_StatisticVersion_11() const { return ___StatisticVersion_11; }
	inline uint32_t* get_address_of_StatisticVersion_11() { return &___StatisticVersion_11; }
	inline void set_StatisticVersion_11(uint32_t value)
	{
		___StatisticVersion_11 = value;
	}

	inline static int32_t get_offset_of_ScheduledResetInterval_12() { return static_cast<int32_t>(offsetof(TitleStatisticVersionChangedEventData_t1243240397, ___ScheduledResetInterval_12)); }
	inline Nullable_1_t2688758636  get_ScheduledResetInterval_12() const { return ___ScheduledResetInterval_12; }
	inline Nullable_1_t2688758636 * get_address_of_ScheduledResetInterval_12() { return &___ScheduledResetInterval_12; }
	inline void set_ScheduledResetInterval_12(Nullable_1_t2688758636  value)
	{
		___ScheduledResetInterval_12 = value;
	}

	inline static int32_t get_offset_of_ScheduledResetTime_13() { return static_cast<int32_t>(offsetof(TitleStatisticVersionChangedEventData_t1243240397, ___ScheduledResetTime_13)); }
	inline Nullable_1_t4223474148  get_ScheduledResetTime_13() const { return ___ScheduledResetTime_13; }
	inline Nullable_1_t4223474148 * get_address_of_ScheduledResetTime_13() { return &___ScheduledResetTime_13; }
	inline void set_ScheduledResetTime_13(Nullable_1_t4223474148  value)
	{
		___ScheduledResetTime_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLESTATISTICVERSIONCHANGEDEVENTDATA_T1243240397_H
#ifndef TITLESECRETKEYEVENTDATA_T740429577_H
#define TITLESECRETKEYEVENTDATA_T740429577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleSecretKeyEventData
struct  TitleSecretKeyEventData_t740429577  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.TitleSecretKeyEventData::SecretKeyId
	String_t* ___SecretKeyId_10;
	// System.String PlayFab.PlayStreamModels.TitleSecretKeyEventData::SecretKeyName
	String_t* ___SecretKeyName_11;
	// System.Nullable`1<System.Boolean> PlayFab.PlayStreamModels.TitleSecretKeyEventData::Disabled
	Nullable_1_t1059554464  ___Disabled_12;
	// System.Nullable`1<System.DateTime> PlayFab.PlayStreamModels.TitleSecretKeyEventData::ExpiryDate
	Nullable_1_t4223474148  ___ExpiryDate_13;
	// System.Nullable`1<System.Boolean> PlayFab.PlayStreamModels.TitleSecretKeyEventData::Deleted
	Nullable_1_t1059554464  ___Deleted_14;
	// System.String PlayFab.PlayStreamModels.TitleSecretKeyEventData::UserId
	String_t* ___UserId_15;
	// System.String PlayFab.PlayStreamModels.TitleSecretKeyEventData::DeveloperId
	String_t* ___DeveloperId_16;

public:
	inline static int32_t get_offset_of_SecretKeyId_10() { return static_cast<int32_t>(offsetof(TitleSecretKeyEventData_t740429577, ___SecretKeyId_10)); }
	inline String_t* get_SecretKeyId_10() const { return ___SecretKeyId_10; }
	inline String_t** get_address_of_SecretKeyId_10() { return &___SecretKeyId_10; }
	inline void set_SecretKeyId_10(String_t* value)
	{
		___SecretKeyId_10 = value;
		Il2CppCodeGenWriteBarrier((&___SecretKeyId_10), value);
	}

	inline static int32_t get_offset_of_SecretKeyName_11() { return static_cast<int32_t>(offsetof(TitleSecretKeyEventData_t740429577, ___SecretKeyName_11)); }
	inline String_t* get_SecretKeyName_11() const { return ___SecretKeyName_11; }
	inline String_t** get_address_of_SecretKeyName_11() { return &___SecretKeyName_11; }
	inline void set_SecretKeyName_11(String_t* value)
	{
		___SecretKeyName_11 = value;
		Il2CppCodeGenWriteBarrier((&___SecretKeyName_11), value);
	}

	inline static int32_t get_offset_of_Disabled_12() { return static_cast<int32_t>(offsetof(TitleSecretKeyEventData_t740429577, ___Disabled_12)); }
	inline Nullable_1_t1059554464  get_Disabled_12() const { return ___Disabled_12; }
	inline Nullable_1_t1059554464 * get_address_of_Disabled_12() { return &___Disabled_12; }
	inline void set_Disabled_12(Nullable_1_t1059554464  value)
	{
		___Disabled_12 = value;
	}

	inline static int32_t get_offset_of_ExpiryDate_13() { return static_cast<int32_t>(offsetof(TitleSecretKeyEventData_t740429577, ___ExpiryDate_13)); }
	inline Nullable_1_t4223474148  get_ExpiryDate_13() const { return ___ExpiryDate_13; }
	inline Nullable_1_t4223474148 * get_address_of_ExpiryDate_13() { return &___ExpiryDate_13; }
	inline void set_ExpiryDate_13(Nullable_1_t4223474148  value)
	{
		___ExpiryDate_13 = value;
	}

	inline static int32_t get_offset_of_Deleted_14() { return static_cast<int32_t>(offsetof(TitleSecretKeyEventData_t740429577, ___Deleted_14)); }
	inline Nullable_1_t1059554464  get_Deleted_14() const { return ___Deleted_14; }
	inline Nullable_1_t1059554464 * get_address_of_Deleted_14() { return &___Deleted_14; }
	inline void set_Deleted_14(Nullable_1_t1059554464  value)
	{
		___Deleted_14 = value;
	}

	inline static int32_t get_offset_of_UserId_15() { return static_cast<int32_t>(offsetof(TitleSecretKeyEventData_t740429577, ___UserId_15)); }
	inline String_t* get_UserId_15() const { return ___UserId_15; }
	inline String_t** get_address_of_UserId_15() { return &___UserId_15; }
	inline void set_UserId_15(String_t* value)
	{
		___UserId_15 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_15), value);
	}

	inline static int32_t get_offset_of_DeveloperId_16() { return static_cast<int32_t>(offsetof(TitleSecretKeyEventData_t740429577, ___DeveloperId_16)); }
	inline String_t* get_DeveloperId_16() const { return ___DeveloperId_16; }
	inline String_t** get_address_of_DeveloperId_16() { return &___DeveloperId_16; }
	inline void set_DeveloperId_16(String_t* value)
	{
		___DeveloperId_16 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLESECRETKEYEVENTDATA_T740429577_H
#ifndef TITLEREQUESTEDLIMITCHANGEEVENTDATA_T2314905142_H
#define TITLEREQUESTEDLIMITCHANGEEVENTDATA_T2314905142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData
struct  TitleRequestedLimitChangeEventData_t2314905142  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::LimitId
	String_t* ___LimitId_10;
	// System.String PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::LimitDisplayName
	String_t* ___LimitDisplayName_11;
	// System.Nullable`1<PlayFab.PlayStreamModels.MetricUnit> PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::Unit
	Nullable_1_t4276494596  ___Unit_12;
	// System.String PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::TransactionId
	String_t* ___TransactionId_13;
	// System.String PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::PreviousLevelName
	String_t* ___PreviousLevelName_14;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::PreviousPriceUSD
	Nullable_1_t53833054  ___PreviousPriceUSD_15;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::PreviousValue
	Nullable_1_t53833054  ___PreviousValue_16;
	// System.String PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::LevelName
	String_t* ___LevelName_17;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::PriceUSD
	Nullable_1_t53833054  ___PriceUSD_18;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::Value
	Nullable_1_t53833054  ___Value_19;
	// System.String PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::UserId
	String_t* ___UserId_20;
	// System.String PlayFab.PlayStreamModels.TitleRequestedLimitChangeEventData::DeveloperId
	String_t* ___DeveloperId_21;

public:
	inline static int32_t get_offset_of_LimitId_10() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t2314905142, ___LimitId_10)); }
	inline String_t* get_LimitId_10() const { return ___LimitId_10; }
	inline String_t** get_address_of_LimitId_10() { return &___LimitId_10; }
	inline void set_LimitId_10(String_t* value)
	{
		___LimitId_10 = value;
		Il2CppCodeGenWriteBarrier((&___LimitId_10), value);
	}

	inline static int32_t get_offset_of_LimitDisplayName_11() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t2314905142, ___LimitDisplayName_11)); }
	inline String_t* get_LimitDisplayName_11() const { return ___LimitDisplayName_11; }
	inline String_t** get_address_of_LimitDisplayName_11() { return &___LimitDisplayName_11; }
	inline void set_LimitDisplayName_11(String_t* value)
	{
		___LimitDisplayName_11 = value;
		Il2CppCodeGenWriteBarrier((&___LimitDisplayName_11), value);
	}

	inline static int32_t get_offset_of_Unit_12() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t2314905142, ___Unit_12)); }
	inline Nullable_1_t4276494596  get_Unit_12() const { return ___Unit_12; }
	inline Nullable_1_t4276494596 * get_address_of_Unit_12() { return &___Unit_12; }
	inline void set_Unit_12(Nullable_1_t4276494596  value)
	{
		___Unit_12 = value;
	}

	inline static int32_t get_offset_of_TransactionId_13() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t2314905142, ___TransactionId_13)); }
	inline String_t* get_TransactionId_13() const { return ___TransactionId_13; }
	inline String_t** get_address_of_TransactionId_13() { return &___TransactionId_13; }
	inline void set_TransactionId_13(String_t* value)
	{
		___TransactionId_13 = value;
		Il2CppCodeGenWriteBarrier((&___TransactionId_13), value);
	}

	inline static int32_t get_offset_of_PreviousLevelName_14() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t2314905142, ___PreviousLevelName_14)); }
	inline String_t* get_PreviousLevelName_14() const { return ___PreviousLevelName_14; }
	inline String_t** get_address_of_PreviousLevelName_14() { return &___PreviousLevelName_14; }
	inline void set_PreviousLevelName_14(String_t* value)
	{
		___PreviousLevelName_14 = value;
		Il2CppCodeGenWriteBarrier((&___PreviousLevelName_14), value);
	}

	inline static int32_t get_offset_of_PreviousPriceUSD_15() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t2314905142, ___PreviousPriceUSD_15)); }
	inline Nullable_1_t53833054  get_PreviousPriceUSD_15() const { return ___PreviousPriceUSD_15; }
	inline Nullable_1_t53833054 * get_address_of_PreviousPriceUSD_15() { return &___PreviousPriceUSD_15; }
	inline void set_PreviousPriceUSD_15(Nullable_1_t53833054  value)
	{
		___PreviousPriceUSD_15 = value;
	}

	inline static int32_t get_offset_of_PreviousValue_16() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t2314905142, ___PreviousValue_16)); }
	inline Nullable_1_t53833054  get_PreviousValue_16() const { return ___PreviousValue_16; }
	inline Nullable_1_t53833054 * get_address_of_PreviousValue_16() { return &___PreviousValue_16; }
	inline void set_PreviousValue_16(Nullable_1_t53833054  value)
	{
		___PreviousValue_16 = value;
	}

	inline static int32_t get_offset_of_LevelName_17() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t2314905142, ___LevelName_17)); }
	inline String_t* get_LevelName_17() const { return ___LevelName_17; }
	inline String_t** get_address_of_LevelName_17() { return &___LevelName_17; }
	inline void set_LevelName_17(String_t* value)
	{
		___LevelName_17 = value;
		Il2CppCodeGenWriteBarrier((&___LevelName_17), value);
	}

	inline static int32_t get_offset_of_PriceUSD_18() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t2314905142, ___PriceUSD_18)); }
	inline Nullable_1_t53833054  get_PriceUSD_18() const { return ___PriceUSD_18; }
	inline Nullable_1_t53833054 * get_address_of_PriceUSD_18() { return &___PriceUSD_18; }
	inline void set_PriceUSD_18(Nullable_1_t53833054  value)
	{
		___PriceUSD_18 = value;
	}

	inline static int32_t get_offset_of_Value_19() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t2314905142, ___Value_19)); }
	inline Nullable_1_t53833054  get_Value_19() const { return ___Value_19; }
	inline Nullable_1_t53833054 * get_address_of_Value_19() { return &___Value_19; }
	inline void set_Value_19(Nullable_1_t53833054  value)
	{
		___Value_19 = value;
	}

	inline static int32_t get_offset_of_UserId_20() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t2314905142, ___UserId_20)); }
	inline String_t* get_UserId_20() const { return ___UserId_20; }
	inline String_t** get_address_of_UserId_20() { return &___UserId_20; }
	inline void set_UserId_20(String_t* value)
	{
		___UserId_20 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_20), value);
	}

	inline static int32_t get_offset_of_DeveloperId_21() { return static_cast<int32_t>(offsetof(TitleRequestedLimitChangeEventData_t2314905142, ___DeveloperId_21)); }
	inline String_t* get_DeveloperId_21() const { return ___DeveloperId_21; }
	inline String_t** get_address_of_DeveloperId_21() { return &___DeveloperId_21; }
	inline void set_DeveloperId_21(String_t* value)
	{
		___DeveloperId_21 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEREQUESTEDLIMITCHANGEEVENTDATA_T2314905142_H
#ifndef PLAYERSETPROFILEPROPERTYEVENTDATA_T3596338607_H
#define PLAYERSETPROFILEPROPERTYEVENTDATA_T3596338607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerSetProfilePropertyEventData
struct  PlayerSetProfilePropertyEventData_t3596338607  : public PlayStreamEventBase_t710997429
{
public:
	// System.Nullable`1<PlayFab.PlayStreamModels.PlayerProfileProperty> PlayFab.PlayStreamModels.PlayerSetProfilePropertyEventData::Property
	Nullable_1_t861990903  ___Property_10;
	// System.Object PlayFab.PlayStreamModels.PlayerSetProfilePropertyEventData::Value
	RuntimeObject * ___Value_11;
	// System.String PlayFab.PlayStreamModels.PlayerSetProfilePropertyEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_Property_10() { return static_cast<int32_t>(offsetof(PlayerSetProfilePropertyEventData_t3596338607, ___Property_10)); }
	inline Nullable_1_t861990903  get_Property_10() const { return ___Property_10; }
	inline Nullable_1_t861990903 * get_address_of_Property_10() { return &___Property_10; }
	inline void set_Property_10(Nullable_1_t861990903  value)
	{
		___Property_10 = value;
	}

	inline static int32_t get_offset_of_Value_11() { return static_cast<int32_t>(offsetof(PlayerSetProfilePropertyEventData_t3596338607, ___Value_11)); }
	inline RuntimeObject * get_Value_11() const { return ___Value_11; }
	inline RuntimeObject ** get_address_of_Value_11() { return &___Value_11; }
	inline void set_Value_11(RuntimeObject * value)
	{
		___Value_11 = value;
		Il2CppCodeGenWriteBarrier((&___Value_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerSetProfilePropertyEventData_t3596338607, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSETPROFILEPROPERTYEVENTDATA_T3596338607_H
#ifndef PLAYERREPORTEDASABUSIVEEVENTDATA_T680407343_H
#define PLAYERREPORTEDASABUSIVEEVENTDATA_T680407343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerReportedAsAbusiveEventData
struct  PlayerReportedAsAbusiveEventData_t680407343  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerReportedAsAbusiveEventData::ReportedByPlayer
	String_t* ___ReportedByPlayer_10;
	// System.String PlayFab.PlayStreamModels.PlayerReportedAsAbusiveEventData::Comment
	String_t* ___Comment_11;
	// System.String PlayFab.PlayStreamModels.PlayerReportedAsAbusiveEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_ReportedByPlayer_10() { return static_cast<int32_t>(offsetof(PlayerReportedAsAbusiveEventData_t680407343, ___ReportedByPlayer_10)); }
	inline String_t* get_ReportedByPlayer_10() const { return ___ReportedByPlayer_10; }
	inline String_t** get_address_of_ReportedByPlayer_10() { return &___ReportedByPlayer_10; }
	inline void set_ReportedByPlayer_10(String_t* value)
	{
		___ReportedByPlayer_10 = value;
		Il2CppCodeGenWriteBarrier((&___ReportedByPlayer_10), value);
	}

	inline static int32_t get_offset_of_Comment_11() { return static_cast<int32_t>(offsetof(PlayerReportedAsAbusiveEventData_t680407343, ___Comment_11)); }
	inline String_t* get_Comment_11() const { return ___Comment_11; }
	inline String_t** get_address_of_Comment_11() { return &___Comment_11; }
	inline void set_Comment_11(String_t* value)
	{
		___Comment_11 = value;
		Il2CppCodeGenWriteBarrier((&___Comment_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerReportedAsAbusiveEventData_t680407343, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERREPORTEDASABUSIVEEVENTDATA_T680407343_H
#ifndef PLAYERREMOVEDTITLEEVENTDATA_T400522908_H
#define PLAYERREMOVEDTITLEEVENTDATA_T400522908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerRemovedTitleEventData
struct  PlayerRemovedTitleEventData_t400522908  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerRemovedTitleEventData::TitleId
	String_t* ___TitleId_10;

public:
	inline static int32_t get_offset_of_TitleId_10() { return static_cast<int32_t>(offsetof(PlayerRemovedTitleEventData_t400522908, ___TitleId_10)); }
	inline String_t* get_TitleId_10() const { return ___TitleId_10; }
	inline String_t** get_address_of_TitleId_10() { return &___TitleId_10; }
	inline void set_TitleId_10(String_t* value)
	{
		___TitleId_10 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERREMOVEDTITLEEVENTDATA_T400522908_H
#ifndef PLAYERREGISTEREDPUSHNOTIFICATIONSEVENTDATA_T564468292_H
#define PLAYERREGISTEREDPUSHNOTIFICATIONSEVENTDATA_T564468292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerRegisteredPushNotificationsEventData
struct  PlayerRegisteredPushNotificationsEventData_t564468292  : public PlayStreamEventBase_t710997429
{
public:
	// System.Nullable`1<PlayFab.PlayStreamModels.PushNotificationPlatform> PlayFab.PlayStreamModels.PlayerRegisteredPushNotificationsEventData::Platform
	Nullable_1_t1055810168  ___Platform_10;
	// System.String PlayFab.PlayStreamModels.PlayerRegisteredPushNotificationsEventData::DeviceToken
	String_t* ___DeviceToken_11;
	// System.String PlayFab.PlayStreamModels.PlayerRegisteredPushNotificationsEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_Platform_10() { return static_cast<int32_t>(offsetof(PlayerRegisteredPushNotificationsEventData_t564468292, ___Platform_10)); }
	inline Nullable_1_t1055810168  get_Platform_10() const { return ___Platform_10; }
	inline Nullable_1_t1055810168 * get_address_of_Platform_10() { return &___Platform_10; }
	inline void set_Platform_10(Nullable_1_t1055810168  value)
	{
		___Platform_10 = value;
	}

	inline static int32_t get_offset_of_DeviceToken_11() { return static_cast<int32_t>(offsetof(PlayerRegisteredPushNotificationsEventData_t564468292, ___DeviceToken_11)); }
	inline String_t* get_DeviceToken_11() const { return ___DeviceToken_11; }
	inline String_t** get_address_of_DeviceToken_11() { return &___DeviceToken_11; }
	inline void set_DeviceToken_11(String_t* value)
	{
		___DeviceToken_11 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceToken_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerRegisteredPushNotificationsEventData_t564468292, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERREGISTEREDPUSHNOTIFICATIONSEVENTDATA_T564468292_H
#ifndef PLAYERREDEEMEDCOUPONEVENTDATA_T98862066_H
#define PLAYERREDEEMEDCOUPONEVENTDATA_T98862066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerRedeemedCouponEventData
struct  PlayerRedeemedCouponEventData_t98862066  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerRedeemedCouponEventData::CouponCode
	String_t* ___CouponCode_10;
	// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.CouponGrantedInventoryItem> PlayFab.PlayStreamModels.PlayerRedeemedCouponEventData::GrantedInventoryItems
	List_1_t2057320019 * ___GrantedInventoryItems_11;
	// System.String PlayFab.PlayStreamModels.PlayerRedeemedCouponEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_CouponCode_10() { return static_cast<int32_t>(offsetof(PlayerRedeemedCouponEventData_t98862066, ___CouponCode_10)); }
	inline String_t* get_CouponCode_10() const { return ___CouponCode_10; }
	inline String_t** get_address_of_CouponCode_10() { return &___CouponCode_10; }
	inline void set_CouponCode_10(String_t* value)
	{
		___CouponCode_10 = value;
		Il2CppCodeGenWriteBarrier((&___CouponCode_10), value);
	}

	inline static int32_t get_offset_of_GrantedInventoryItems_11() { return static_cast<int32_t>(offsetof(PlayerRedeemedCouponEventData_t98862066, ___GrantedInventoryItems_11)); }
	inline List_1_t2057320019 * get_GrantedInventoryItems_11() const { return ___GrantedInventoryItems_11; }
	inline List_1_t2057320019 ** get_address_of_GrantedInventoryItems_11() { return &___GrantedInventoryItems_11; }
	inline void set_GrantedInventoryItems_11(List_1_t2057320019 * value)
	{
		___GrantedInventoryItems_11 = value;
		Il2CppCodeGenWriteBarrier((&___GrantedInventoryItems_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerRedeemedCouponEventData_t98862066, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERREDEEMEDCOUPONEVENTDATA_T98862066_H
#ifndef PLAYERRECEIPTVALIDATIONEVENTDATA_T2916042766_H
#define PLAYERRECEIPTVALIDATIONEVENTDATA_T2916042766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerReceiptValidationEventData
struct  PlayerReceiptValidationEventData_t2916042766  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerReceiptValidationEventData::PaymentProvider
	String_t* ___PaymentProvider_10;
	// System.Nullable`1<PlayFab.PlayStreamModels.PaymentType> PlayFab.PlayStreamModels.PlayerReceiptValidationEventData::PaymentType
	Nullable_1_t2885748172  ___PaymentType_11;
	// System.String PlayFab.PlayStreamModels.PlayerReceiptValidationEventData::ReceiptContent
	String_t* ___ReceiptContent_12;
	// System.Boolean PlayFab.PlayStreamModels.PlayerReceiptValidationEventData::Valid
	bool ___Valid_13;
	// System.String PlayFab.PlayStreamModels.PlayerReceiptValidationEventData::Error
	String_t* ___Error_14;
	// System.String PlayFab.PlayStreamModels.PlayerReceiptValidationEventData::TitleId
	String_t* ___TitleId_15;

public:
	inline static int32_t get_offset_of_PaymentProvider_10() { return static_cast<int32_t>(offsetof(PlayerReceiptValidationEventData_t2916042766, ___PaymentProvider_10)); }
	inline String_t* get_PaymentProvider_10() const { return ___PaymentProvider_10; }
	inline String_t** get_address_of_PaymentProvider_10() { return &___PaymentProvider_10; }
	inline void set_PaymentProvider_10(String_t* value)
	{
		___PaymentProvider_10 = value;
		Il2CppCodeGenWriteBarrier((&___PaymentProvider_10), value);
	}

	inline static int32_t get_offset_of_PaymentType_11() { return static_cast<int32_t>(offsetof(PlayerReceiptValidationEventData_t2916042766, ___PaymentType_11)); }
	inline Nullable_1_t2885748172  get_PaymentType_11() const { return ___PaymentType_11; }
	inline Nullable_1_t2885748172 * get_address_of_PaymentType_11() { return &___PaymentType_11; }
	inline void set_PaymentType_11(Nullable_1_t2885748172  value)
	{
		___PaymentType_11 = value;
	}

	inline static int32_t get_offset_of_ReceiptContent_12() { return static_cast<int32_t>(offsetof(PlayerReceiptValidationEventData_t2916042766, ___ReceiptContent_12)); }
	inline String_t* get_ReceiptContent_12() const { return ___ReceiptContent_12; }
	inline String_t** get_address_of_ReceiptContent_12() { return &___ReceiptContent_12; }
	inline void set_ReceiptContent_12(String_t* value)
	{
		___ReceiptContent_12 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiptContent_12), value);
	}

	inline static int32_t get_offset_of_Valid_13() { return static_cast<int32_t>(offsetof(PlayerReceiptValidationEventData_t2916042766, ___Valid_13)); }
	inline bool get_Valid_13() const { return ___Valid_13; }
	inline bool* get_address_of_Valid_13() { return &___Valid_13; }
	inline void set_Valid_13(bool value)
	{
		___Valid_13 = value;
	}

	inline static int32_t get_offset_of_Error_14() { return static_cast<int32_t>(offsetof(PlayerReceiptValidationEventData_t2916042766, ___Error_14)); }
	inline String_t* get_Error_14() const { return ___Error_14; }
	inline String_t** get_address_of_Error_14() { return &___Error_14; }
	inline void set_Error_14(String_t* value)
	{
		___Error_14 = value;
		Il2CppCodeGenWriteBarrier((&___Error_14), value);
	}

	inline static int32_t get_offset_of_TitleId_15() { return static_cast<int32_t>(offsetof(PlayerReceiptValidationEventData_t2916042766, ___TitleId_15)); }
	inline String_t* get_TitleId_15() const { return ___TitleId_15; }
	inline String_t** get_address_of_TitleId_15() { return &___TitleId_15; }
	inline void set_TitleId_15(String_t* value)
	{
		___TitleId_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERRECEIPTVALIDATIONEVENTDATA_T2916042766_H
#ifndef PLAYERREALMONEYPURCHASEEVENTDATA_T1385406886_H
#define PLAYERREALMONEYPURCHASEEVENTDATA_T1385406886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData
struct  PlayerRealMoneyPurchaseEventData_t1385406886  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData::PaymentProvider
	String_t* ___PaymentProvider_10;
	// System.Nullable`1<PlayFab.PlayStreamModels.PaymentType> PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData::PaymentType
	Nullable_1_t2885748172  ___PaymentType_11;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData::OrderTotal
	uint32_t ___OrderTotal_12;
	// System.Nullable`1<System.UInt32> PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData::TransactionTotal
	Nullable_1_t464247827  ___TransactionTotal_13;
	// System.Nullable`1<PlayFab.PlayStreamModels.Currency> PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData::TransactionCurrency
	Nullable_1_t2365613752  ___TransactionCurrency_14;
	// System.String PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData::OrderId
	String_t* ___OrderId_15;
	// System.String PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData::TransactionId
	String_t* ___TransactionId_16;
	// System.Collections.Generic.List`1<System.String> PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData::PurchasedProduct
	List_1_t859813222 * ___PurchasedProduct_17;
	// System.String PlayFab.PlayStreamModels.PlayerRealMoneyPurchaseEventData::TitleId
	String_t* ___TitleId_18;

public:
	inline static int32_t get_offset_of_PaymentProvider_10() { return static_cast<int32_t>(offsetof(PlayerRealMoneyPurchaseEventData_t1385406886, ___PaymentProvider_10)); }
	inline String_t* get_PaymentProvider_10() const { return ___PaymentProvider_10; }
	inline String_t** get_address_of_PaymentProvider_10() { return &___PaymentProvider_10; }
	inline void set_PaymentProvider_10(String_t* value)
	{
		___PaymentProvider_10 = value;
		Il2CppCodeGenWriteBarrier((&___PaymentProvider_10), value);
	}

	inline static int32_t get_offset_of_PaymentType_11() { return static_cast<int32_t>(offsetof(PlayerRealMoneyPurchaseEventData_t1385406886, ___PaymentType_11)); }
	inline Nullable_1_t2885748172  get_PaymentType_11() const { return ___PaymentType_11; }
	inline Nullable_1_t2885748172 * get_address_of_PaymentType_11() { return &___PaymentType_11; }
	inline void set_PaymentType_11(Nullable_1_t2885748172  value)
	{
		___PaymentType_11 = value;
	}

	inline static int32_t get_offset_of_OrderTotal_12() { return static_cast<int32_t>(offsetof(PlayerRealMoneyPurchaseEventData_t1385406886, ___OrderTotal_12)); }
	inline uint32_t get_OrderTotal_12() const { return ___OrderTotal_12; }
	inline uint32_t* get_address_of_OrderTotal_12() { return &___OrderTotal_12; }
	inline void set_OrderTotal_12(uint32_t value)
	{
		___OrderTotal_12 = value;
	}

	inline static int32_t get_offset_of_TransactionTotal_13() { return static_cast<int32_t>(offsetof(PlayerRealMoneyPurchaseEventData_t1385406886, ___TransactionTotal_13)); }
	inline Nullable_1_t464247827  get_TransactionTotal_13() const { return ___TransactionTotal_13; }
	inline Nullable_1_t464247827 * get_address_of_TransactionTotal_13() { return &___TransactionTotal_13; }
	inline void set_TransactionTotal_13(Nullable_1_t464247827  value)
	{
		___TransactionTotal_13 = value;
	}

	inline static int32_t get_offset_of_TransactionCurrency_14() { return static_cast<int32_t>(offsetof(PlayerRealMoneyPurchaseEventData_t1385406886, ___TransactionCurrency_14)); }
	inline Nullable_1_t2365613752  get_TransactionCurrency_14() const { return ___TransactionCurrency_14; }
	inline Nullable_1_t2365613752 * get_address_of_TransactionCurrency_14() { return &___TransactionCurrency_14; }
	inline void set_TransactionCurrency_14(Nullable_1_t2365613752  value)
	{
		___TransactionCurrency_14 = value;
	}

	inline static int32_t get_offset_of_OrderId_15() { return static_cast<int32_t>(offsetof(PlayerRealMoneyPurchaseEventData_t1385406886, ___OrderId_15)); }
	inline String_t* get_OrderId_15() const { return ___OrderId_15; }
	inline String_t** get_address_of_OrderId_15() { return &___OrderId_15; }
	inline void set_OrderId_15(String_t* value)
	{
		___OrderId_15 = value;
		Il2CppCodeGenWriteBarrier((&___OrderId_15), value);
	}

	inline static int32_t get_offset_of_TransactionId_16() { return static_cast<int32_t>(offsetof(PlayerRealMoneyPurchaseEventData_t1385406886, ___TransactionId_16)); }
	inline String_t* get_TransactionId_16() const { return ___TransactionId_16; }
	inline String_t** get_address_of_TransactionId_16() { return &___TransactionId_16; }
	inline void set_TransactionId_16(String_t* value)
	{
		___TransactionId_16 = value;
		Il2CppCodeGenWriteBarrier((&___TransactionId_16), value);
	}

	inline static int32_t get_offset_of_PurchasedProduct_17() { return static_cast<int32_t>(offsetof(PlayerRealMoneyPurchaseEventData_t1385406886, ___PurchasedProduct_17)); }
	inline List_1_t859813222 * get_PurchasedProduct_17() const { return ___PurchasedProduct_17; }
	inline List_1_t859813222 ** get_address_of_PurchasedProduct_17() { return &___PurchasedProduct_17; }
	inline void set_PurchasedProduct_17(List_1_t859813222 * value)
	{
		___PurchasedProduct_17 = value;
		Il2CppCodeGenWriteBarrier((&___PurchasedProduct_17), value);
	}

	inline static int32_t get_offset_of_TitleId_18() { return static_cast<int32_t>(offsetof(PlayerRealMoneyPurchaseEventData_t1385406886, ___TitleId_18)); }
	inline String_t* get_TitleId_18() const { return ___TitleId_18; }
	inline String_t** get_address_of_TitleId_18() { return &___TitleId_18; }
	inline void set_TitleId_18(String_t* value)
	{
		___TitleId_18 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERREALMONEYPURCHASEEVENTDATA_T1385406886_H
#ifndef PLAYERRANKEDONLEADERBOARDVERSIONEVENTDATA_T1777908984_H
#define PLAYERRANKEDONLEADERBOARDVERSIONEVENTDATA_T1777908984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerRankedOnLeaderboardVersionEventData
struct  PlayerRankedOnLeaderboardVersionEventData_t1777908984  : public PlayStreamEventBase_t710997429
{
public:
	// System.UInt32 PlayFab.PlayStreamModels.PlayerRankedOnLeaderboardVersionEventData::Rank
	uint32_t ___Rank_10;
	// System.Int32 PlayFab.PlayStreamModels.PlayerRankedOnLeaderboardVersionEventData::Value
	int32_t ___Value_11;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerRankedOnLeaderboardVersionEventData::Version
	uint32_t ___Version_12;
	// System.Nullable`1<PlayFab.PlayStreamModels.LeaderboardVersionChangeBehavior> PlayFab.PlayStreamModels.PlayerRankedOnLeaderboardVersionEventData::VersionChangeBehavior
	Nullable_1_t1393319993  ___VersionChangeBehavior_13;
	// PlayFab.PlayStreamModels.LeaderboardSource PlayFab.PlayStreamModels.PlayerRankedOnLeaderboardVersionEventData::LeaderboardSource
	LeaderboardSource_t3852261111 * ___LeaderboardSource_14;
	// System.String PlayFab.PlayStreamModels.PlayerRankedOnLeaderboardVersionEventData::TitleId
	String_t* ___TitleId_15;

public:
	inline static int32_t get_offset_of_Rank_10() { return static_cast<int32_t>(offsetof(PlayerRankedOnLeaderboardVersionEventData_t1777908984, ___Rank_10)); }
	inline uint32_t get_Rank_10() const { return ___Rank_10; }
	inline uint32_t* get_address_of_Rank_10() { return &___Rank_10; }
	inline void set_Rank_10(uint32_t value)
	{
		___Rank_10 = value;
	}

	inline static int32_t get_offset_of_Value_11() { return static_cast<int32_t>(offsetof(PlayerRankedOnLeaderboardVersionEventData_t1777908984, ___Value_11)); }
	inline int32_t get_Value_11() const { return ___Value_11; }
	inline int32_t* get_address_of_Value_11() { return &___Value_11; }
	inline void set_Value_11(int32_t value)
	{
		___Value_11 = value;
	}

	inline static int32_t get_offset_of_Version_12() { return static_cast<int32_t>(offsetof(PlayerRankedOnLeaderboardVersionEventData_t1777908984, ___Version_12)); }
	inline uint32_t get_Version_12() const { return ___Version_12; }
	inline uint32_t* get_address_of_Version_12() { return &___Version_12; }
	inline void set_Version_12(uint32_t value)
	{
		___Version_12 = value;
	}

	inline static int32_t get_offset_of_VersionChangeBehavior_13() { return static_cast<int32_t>(offsetof(PlayerRankedOnLeaderboardVersionEventData_t1777908984, ___VersionChangeBehavior_13)); }
	inline Nullable_1_t1393319993  get_VersionChangeBehavior_13() const { return ___VersionChangeBehavior_13; }
	inline Nullable_1_t1393319993 * get_address_of_VersionChangeBehavior_13() { return &___VersionChangeBehavior_13; }
	inline void set_VersionChangeBehavior_13(Nullable_1_t1393319993  value)
	{
		___VersionChangeBehavior_13 = value;
	}

	inline static int32_t get_offset_of_LeaderboardSource_14() { return static_cast<int32_t>(offsetof(PlayerRankedOnLeaderboardVersionEventData_t1777908984, ___LeaderboardSource_14)); }
	inline LeaderboardSource_t3852261111 * get_LeaderboardSource_14() const { return ___LeaderboardSource_14; }
	inline LeaderboardSource_t3852261111 ** get_address_of_LeaderboardSource_14() { return &___LeaderboardSource_14; }
	inline void set_LeaderboardSource_14(LeaderboardSource_t3852261111 * value)
	{
		___LeaderboardSource_14 = value;
		Il2CppCodeGenWriteBarrier((&___LeaderboardSource_14), value);
	}

	inline static int32_t get_offset_of_TitleId_15() { return static_cast<int32_t>(offsetof(PlayerRankedOnLeaderboardVersionEventData_t1777908984, ___TitleId_15)); }
	inline String_t* get_TitleId_15() const { return ___TitleId_15; }
	inline String_t** get_address_of_TitleId_15() { return &___TitleId_15; }
	inline void set_TitleId_15(String_t* value)
	{
		___TitleId_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERRANKEDONLEADERBOARDVERSIONEVENTDATA_T1777908984_H
#ifndef PLAYERPASSWORDRESETLINKSENTEVENTDATA_T783300454_H
#define PLAYERPASSWORDRESETLINKSENTEVENTDATA_T783300454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerPasswordResetLinkSentEventData
struct  PlayerPasswordResetLinkSentEventData_t783300454  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerPasswordResetLinkSentEventData::RecoveryEmailAddress
	String_t* ___RecoveryEmailAddress_10;
	// System.String PlayFab.PlayStreamModels.PlayerPasswordResetLinkSentEventData::InitiatedFromIPAddress
	String_t* ___InitiatedFromIPAddress_11;
	// System.Nullable`1<PlayFab.PlayStreamModels.PasswordResetInitiationSource> PlayFab.PlayStreamModels.PlayerPasswordResetLinkSentEventData::InitiatedBy
	Nullable_1_t2099192826  ___InitiatedBy_12;
	// System.String PlayFab.PlayStreamModels.PlayerPasswordResetLinkSentEventData::PasswordResetId
	String_t* ___PasswordResetId_13;
	// System.DateTime PlayFab.PlayStreamModels.PlayerPasswordResetLinkSentEventData::LinkExpiration
	DateTime_t1281661550  ___LinkExpiration_14;
	// System.String PlayFab.PlayStreamModels.PlayerPasswordResetLinkSentEventData::TitleId
	String_t* ___TitleId_15;

public:
	inline static int32_t get_offset_of_RecoveryEmailAddress_10() { return static_cast<int32_t>(offsetof(PlayerPasswordResetLinkSentEventData_t783300454, ___RecoveryEmailAddress_10)); }
	inline String_t* get_RecoveryEmailAddress_10() const { return ___RecoveryEmailAddress_10; }
	inline String_t** get_address_of_RecoveryEmailAddress_10() { return &___RecoveryEmailAddress_10; }
	inline void set_RecoveryEmailAddress_10(String_t* value)
	{
		___RecoveryEmailAddress_10 = value;
		Il2CppCodeGenWriteBarrier((&___RecoveryEmailAddress_10), value);
	}

	inline static int32_t get_offset_of_InitiatedFromIPAddress_11() { return static_cast<int32_t>(offsetof(PlayerPasswordResetLinkSentEventData_t783300454, ___InitiatedFromIPAddress_11)); }
	inline String_t* get_InitiatedFromIPAddress_11() const { return ___InitiatedFromIPAddress_11; }
	inline String_t** get_address_of_InitiatedFromIPAddress_11() { return &___InitiatedFromIPAddress_11; }
	inline void set_InitiatedFromIPAddress_11(String_t* value)
	{
		___InitiatedFromIPAddress_11 = value;
		Il2CppCodeGenWriteBarrier((&___InitiatedFromIPAddress_11), value);
	}

	inline static int32_t get_offset_of_InitiatedBy_12() { return static_cast<int32_t>(offsetof(PlayerPasswordResetLinkSentEventData_t783300454, ___InitiatedBy_12)); }
	inline Nullable_1_t2099192826  get_InitiatedBy_12() const { return ___InitiatedBy_12; }
	inline Nullable_1_t2099192826 * get_address_of_InitiatedBy_12() { return &___InitiatedBy_12; }
	inline void set_InitiatedBy_12(Nullable_1_t2099192826  value)
	{
		___InitiatedBy_12 = value;
	}

	inline static int32_t get_offset_of_PasswordResetId_13() { return static_cast<int32_t>(offsetof(PlayerPasswordResetLinkSentEventData_t783300454, ___PasswordResetId_13)); }
	inline String_t* get_PasswordResetId_13() const { return ___PasswordResetId_13; }
	inline String_t** get_address_of_PasswordResetId_13() { return &___PasswordResetId_13; }
	inline void set_PasswordResetId_13(String_t* value)
	{
		___PasswordResetId_13 = value;
		Il2CppCodeGenWriteBarrier((&___PasswordResetId_13), value);
	}

	inline static int32_t get_offset_of_LinkExpiration_14() { return static_cast<int32_t>(offsetof(PlayerPasswordResetLinkSentEventData_t783300454, ___LinkExpiration_14)); }
	inline DateTime_t1281661550  get_LinkExpiration_14() const { return ___LinkExpiration_14; }
	inline DateTime_t1281661550 * get_address_of_LinkExpiration_14() { return &___LinkExpiration_14; }
	inline void set_LinkExpiration_14(DateTime_t1281661550  value)
	{
		___LinkExpiration_14 = value;
	}

	inline static int32_t get_offset_of_TitleId_15() { return static_cast<int32_t>(offsetof(PlayerPasswordResetLinkSentEventData_t783300454, ___TitleId_15)); }
	inline String_t* get_TitleId_15() const { return ___TitleId_15; }
	inline String_t** get_address_of_TitleId_15() { return &___TitleId_15; }
	inline void set_TitleId_15(String_t* value)
	{
		___TitleId_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPASSWORDRESETLINKSENTEVENTDATA_T783300454_H
#ifndef PLAYERMATCHEDWITHLOBBYEVENTDATA_T559662046_H
#define PLAYERMATCHEDWITHLOBBYEVENTDATA_T559662046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData
struct  PlayerMatchedWithLobbyEventData_t559662046  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData::LobbyId
	String_t* ___LobbyId_10;
	// System.String PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData::GameMode
	String_t* ___GameMode_11;
	// System.String PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData::Region
	String_t* ___Region_12;
	// System.String PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData::ServerBuildVersion
	String_t* ___ServerBuildVersion_13;
	// System.String PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData::ServerHost
	String_t* ___ServerHost_14;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData::ServerPort
	uint32_t ___ServerPort_15;
	// System.String PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData::ServerHostInstanceId
	String_t* ___ServerHostInstanceId_16;
	// System.String PlayFab.PlayStreamModels.PlayerMatchedWithLobbyEventData::TitleId
	String_t* ___TitleId_17;

public:
	inline static int32_t get_offset_of_LobbyId_10() { return static_cast<int32_t>(offsetof(PlayerMatchedWithLobbyEventData_t559662046, ___LobbyId_10)); }
	inline String_t* get_LobbyId_10() const { return ___LobbyId_10; }
	inline String_t** get_address_of_LobbyId_10() { return &___LobbyId_10; }
	inline void set_LobbyId_10(String_t* value)
	{
		___LobbyId_10 = value;
		Il2CppCodeGenWriteBarrier((&___LobbyId_10), value);
	}

	inline static int32_t get_offset_of_GameMode_11() { return static_cast<int32_t>(offsetof(PlayerMatchedWithLobbyEventData_t559662046, ___GameMode_11)); }
	inline String_t* get_GameMode_11() const { return ___GameMode_11; }
	inline String_t** get_address_of_GameMode_11() { return &___GameMode_11; }
	inline void set_GameMode_11(String_t* value)
	{
		___GameMode_11 = value;
		Il2CppCodeGenWriteBarrier((&___GameMode_11), value);
	}

	inline static int32_t get_offset_of_Region_12() { return static_cast<int32_t>(offsetof(PlayerMatchedWithLobbyEventData_t559662046, ___Region_12)); }
	inline String_t* get_Region_12() const { return ___Region_12; }
	inline String_t** get_address_of_Region_12() { return &___Region_12; }
	inline void set_Region_12(String_t* value)
	{
		___Region_12 = value;
		Il2CppCodeGenWriteBarrier((&___Region_12), value);
	}

	inline static int32_t get_offset_of_ServerBuildVersion_13() { return static_cast<int32_t>(offsetof(PlayerMatchedWithLobbyEventData_t559662046, ___ServerBuildVersion_13)); }
	inline String_t* get_ServerBuildVersion_13() const { return ___ServerBuildVersion_13; }
	inline String_t** get_address_of_ServerBuildVersion_13() { return &___ServerBuildVersion_13; }
	inline void set_ServerBuildVersion_13(String_t* value)
	{
		___ServerBuildVersion_13 = value;
		Il2CppCodeGenWriteBarrier((&___ServerBuildVersion_13), value);
	}

	inline static int32_t get_offset_of_ServerHost_14() { return static_cast<int32_t>(offsetof(PlayerMatchedWithLobbyEventData_t559662046, ___ServerHost_14)); }
	inline String_t* get_ServerHost_14() const { return ___ServerHost_14; }
	inline String_t** get_address_of_ServerHost_14() { return &___ServerHost_14; }
	inline void set_ServerHost_14(String_t* value)
	{
		___ServerHost_14 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHost_14), value);
	}

	inline static int32_t get_offset_of_ServerPort_15() { return static_cast<int32_t>(offsetof(PlayerMatchedWithLobbyEventData_t559662046, ___ServerPort_15)); }
	inline uint32_t get_ServerPort_15() const { return ___ServerPort_15; }
	inline uint32_t* get_address_of_ServerPort_15() { return &___ServerPort_15; }
	inline void set_ServerPort_15(uint32_t value)
	{
		___ServerPort_15 = value;
	}

	inline static int32_t get_offset_of_ServerHostInstanceId_16() { return static_cast<int32_t>(offsetof(PlayerMatchedWithLobbyEventData_t559662046, ___ServerHostInstanceId_16)); }
	inline String_t* get_ServerHostInstanceId_16() const { return ___ServerHostInstanceId_16; }
	inline String_t** get_address_of_ServerHostInstanceId_16() { return &___ServerHostInstanceId_16; }
	inline void set_ServerHostInstanceId_16(String_t* value)
	{
		___ServerHostInstanceId_16 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHostInstanceId_16), value);
	}

	inline static int32_t get_offset_of_TitleId_17() { return static_cast<int32_t>(offsetof(PlayerMatchedWithLobbyEventData_t559662046, ___TitleId_17)); }
	inline String_t* get_TitleId_17() const { return ___TitleId_17; }
	inline String_t** get_address_of_TitleId_17() { return &___TitleId_17; }
	inline void set_TitleId_17(String_t* value)
	{
		___TitleId_17 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERMATCHEDWITHLOBBYEVENTDATA_T559662046_H
#ifndef PLAYERLOGGEDINEVENTDATA_T1713482707_H
#define PLAYERLOGGEDINEVENTDATA_T1713482707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerLoggedInEventData
struct  PlayerLoggedInEventData_t1713482707  : public PlayStreamEventBase_t710997429
{
public:
	// System.Nullable`1<PlayFab.PlayStreamModels.LoginIdentityProvider> PlayFab.PlayStreamModels.PlayerLoggedInEventData::Platform
	Nullable_1_t2019201765  ___Platform_10;
	// System.String PlayFab.PlayStreamModels.PlayerLoggedInEventData::PlatformUserId
	String_t* ___PlatformUserId_11;
	// PlayFab.PlayStreamModels.EventLocation PlayFab.PlayStreamModels.PlayerLoggedInEventData::Location
	EventLocation_t1715353590 * ___Location_12;
	// System.String PlayFab.PlayStreamModels.PlayerLoggedInEventData::TitleId
	String_t* ___TitleId_13;

public:
	inline static int32_t get_offset_of_Platform_10() { return static_cast<int32_t>(offsetof(PlayerLoggedInEventData_t1713482707, ___Platform_10)); }
	inline Nullable_1_t2019201765  get_Platform_10() const { return ___Platform_10; }
	inline Nullable_1_t2019201765 * get_address_of_Platform_10() { return &___Platform_10; }
	inline void set_Platform_10(Nullable_1_t2019201765  value)
	{
		___Platform_10 = value;
	}

	inline static int32_t get_offset_of_PlatformUserId_11() { return static_cast<int32_t>(offsetof(PlayerLoggedInEventData_t1713482707, ___PlatformUserId_11)); }
	inline String_t* get_PlatformUserId_11() const { return ___PlatformUserId_11; }
	inline String_t** get_address_of_PlatformUserId_11() { return &___PlatformUserId_11; }
	inline void set_PlatformUserId_11(String_t* value)
	{
		___PlatformUserId_11 = value;
		Il2CppCodeGenWriteBarrier((&___PlatformUserId_11), value);
	}

	inline static int32_t get_offset_of_Location_12() { return static_cast<int32_t>(offsetof(PlayerLoggedInEventData_t1713482707, ___Location_12)); }
	inline EventLocation_t1715353590 * get_Location_12() const { return ___Location_12; }
	inline EventLocation_t1715353590 ** get_address_of_Location_12() { return &___Location_12; }
	inline void set_Location_12(EventLocation_t1715353590 * value)
	{
		___Location_12 = value;
		Il2CppCodeGenWriteBarrier((&___Location_12), value);
	}

	inline static int32_t get_offset_of_TitleId_13() { return static_cast<int32_t>(offsetof(PlayerLoggedInEventData_t1713482707, ___TitleId_13)); }
	inline String_t* get_TitleId_13() const { return ___TitleId_13; }
	inline String_t** get_address_of_TitleId_13() { return &___TitleId_13; }
	inline void set_TitleId_13(String_t* value)
	{
		___TitleId_13 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERLOGGEDINEVENTDATA_T1713482707_H
#ifndef PLAYERLINKEDACCOUNTEVENTDATA_T2115095819_H
#define PLAYERLINKEDACCOUNTEVENTDATA_T2115095819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerLinkedAccountEventData
struct  PlayerLinkedAccountEventData_t2115095819  : public PlayStreamEventBase_t710997429
{
public:
	// System.Nullable`1<PlayFab.PlayStreamModels.LoginIdentityProvider> PlayFab.PlayStreamModels.PlayerLinkedAccountEventData::Origination
	Nullable_1_t2019201765  ___Origination_10;
	// System.String PlayFab.PlayStreamModels.PlayerLinkedAccountEventData::OriginationUserId
	String_t* ___OriginationUserId_11;
	// System.String PlayFab.PlayStreamModels.PlayerLinkedAccountEventData::Username
	String_t* ___Username_12;
	// System.String PlayFab.PlayStreamModels.PlayerLinkedAccountEventData::Email
	String_t* ___Email_13;
	// System.String PlayFab.PlayStreamModels.PlayerLinkedAccountEventData::TitleId
	String_t* ___TitleId_14;

public:
	inline static int32_t get_offset_of_Origination_10() { return static_cast<int32_t>(offsetof(PlayerLinkedAccountEventData_t2115095819, ___Origination_10)); }
	inline Nullable_1_t2019201765  get_Origination_10() const { return ___Origination_10; }
	inline Nullable_1_t2019201765 * get_address_of_Origination_10() { return &___Origination_10; }
	inline void set_Origination_10(Nullable_1_t2019201765  value)
	{
		___Origination_10 = value;
	}

	inline static int32_t get_offset_of_OriginationUserId_11() { return static_cast<int32_t>(offsetof(PlayerLinkedAccountEventData_t2115095819, ___OriginationUserId_11)); }
	inline String_t* get_OriginationUserId_11() const { return ___OriginationUserId_11; }
	inline String_t** get_address_of_OriginationUserId_11() { return &___OriginationUserId_11; }
	inline void set_OriginationUserId_11(String_t* value)
	{
		___OriginationUserId_11 = value;
		Il2CppCodeGenWriteBarrier((&___OriginationUserId_11), value);
	}

	inline static int32_t get_offset_of_Username_12() { return static_cast<int32_t>(offsetof(PlayerLinkedAccountEventData_t2115095819, ___Username_12)); }
	inline String_t* get_Username_12() const { return ___Username_12; }
	inline String_t** get_address_of_Username_12() { return &___Username_12; }
	inline void set_Username_12(String_t* value)
	{
		___Username_12 = value;
		Il2CppCodeGenWriteBarrier((&___Username_12), value);
	}

	inline static int32_t get_offset_of_Email_13() { return static_cast<int32_t>(offsetof(PlayerLinkedAccountEventData_t2115095819, ___Email_13)); }
	inline String_t* get_Email_13() const { return ___Email_13; }
	inline String_t** get_address_of_Email_13() { return &___Email_13; }
	inline void set_Email_13(String_t* value)
	{
		___Email_13 = value;
		Il2CppCodeGenWriteBarrier((&___Email_13), value);
	}

	inline static int32_t get_offset_of_TitleId_14() { return static_cast<int32_t>(offsetof(PlayerLinkedAccountEventData_t2115095819, ___TitleId_14)); }
	inline String_t* get_TitleId_14() const { return ___TitleId_14; }
	inline String_t** get_address_of_TitleId_14() { return &___TitleId_14; }
	inline void set_TitleId_14(String_t* value)
	{
		___TitleId_14 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERLINKEDACCOUNTEVENTDATA_T2115095819_H
#ifndef PLAYERLEFTLOBBYEVENTDATA_T206762372_H
#define PLAYERLEFTLOBBYEVENTDATA_T206762372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerLeftLobbyEventData
struct  PlayerLeftLobbyEventData_t206762372  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerLeftLobbyEventData::LobbyId
	String_t* ___LobbyId_10;
	// System.String PlayFab.PlayStreamModels.PlayerLeftLobbyEventData::GameMode
	String_t* ___GameMode_11;
	// System.String PlayFab.PlayStreamModels.PlayerLeftLobbyEventData::Region
	String_t* ___Region_12;
	// System.String PlayFab.PlayStreamModels.PlayerLeftLobbyEventData::ServerBuildVersion
	String_t* ___ServerBuildVersion_13;
	// System.String PlayFab.PlayStreamModels.PlayerLeftLobbyEventData::ServerHost
	String_t* ___ServerHost_14;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerLeftLobbyEventData::ServerPort
	uint32_t ___ServerPort_15;
	// System.String PlayFab.PlayStreamModels.PlayerLeftLobbyEventData::ServerHostInstanceId
	String_t* ___ServerHostInstanceId_16;
	// System.String PlayFab.PlayStreamModels.PlayerLeftLobbyEventData::TitleId
	String_t* ___TitleId_17;

public:
	inline static int32_t get_offset_of_LobbyId_10() { return static_cast<int32_t>(offsetof(PlayerLeftLobbyEventData_t206762372, ___LobbyId_10)); }
	inline String_t* get_LobbyId_10() const { return ___LobbyId_10; }
	inline String_t** get_address_of_LobbyId_10() { return &___LobbyId_10; }
	inline void set_LobbyId_10(String_t* value)
	{
		___LobbyId_10 = value;
		Il2CppCodeGenWriteBarrier((&___LobbyId_10), value);
	}

	inline static int32_t get_offset_of_GameMode_11() { return static_cast<int32_t>(offsetof(PlayerLeftLobbyEventData_t206762372, ___GameMode_11)); }
	inline String_t* get_GameMode_11() const { return ___GameMode_11; }
	inline String_t** get_address_of_GameMode_11() { return &___GameMode_11; }
	inline void set_GameMode_11(String_t* value)
	{
		___GameMode_11 = value;
		Il2CppCodeGenWriteBarrier((&___GameMode_11), value);
	}

	inline static int32_t get_offset_of_Region_12() { return static_cast<int32_t>(offsetof(PlayerLeftLobbyEventData_t206762372, ___Region_12)); }
	inline String_t* get_Region_12() const { return ___Region_12; }
	inline String_t** get_address_of_Region_12() { return &___Region_12; }
	inline void set_Region_12(String_t* value)
	{
		___Region_12 = value;
		Il2CppCodeGenWriteBarrier((&___Region_12), value);
	}

	inline static int32_t get_offset_of_ServerBuildVersion_13() { return static_cast<int32_t>(offsetof(PlayerLeftLobbyEventData_t206762372, ___ServerBuildVersion_13)); }
	inline String_t* get_ServerBuildVersion_13() const { return ___ServerBuildVersion_13; }
	inline String_t** get_address_of_ServerBuildVersion_13() { return &___ServerBuildVersion_13; }
	inline void set_ServerBuildVersion_13(String_t* value)
	{
		___ServerBuildVersion_13 = value;
		Il2CppCodeGenWriteBarrier((&___ServerBuildVersion_13), value);
	}

	inline static int32_t get_offset_of_ServerHost_14() { return static_cast<int32_t>(offsetof(PlayerLeftLobbyEventData_t206762372, ___ServerHost_14)); }
	inline String_t* get_ServerHost_14() const { return ___ServerHost_14; }
	inline String_t** get_address_of_ServerHost_14() { return &___ServerHost_14; }
	inline void set_ServerHost_14(String_t* value)
	{
		___ServerHost_14 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHost_14), value);
	}

	inline static int32_t get_offset_of_ServerPort_15() { return static_cast<int32_t>(offsetof(PlayerLeftLobbyEventData_t206762372, ___ServerPort_15)); }
	inline uint32_t get_ServerPort_15() const { return ___ServerPort_15; }
	inline uint32_t* get_address_of_ServerPort_15() { return &___ServerPort_15; }
	inline void set_ServerPort_15(uint32_t value)
	{
		___ServerPort_15 = value;
	}

	inline static int32_t get_offset_of_ServerHostInstanceId_16() { return static_cast<int32_t>(offsetof(PlayerLeftLobbyEventData_t206762372, ___ServerHostInstanceId_16)); }
	inline String_t* get_ServerHostInstanceId_16() const { return ___ServerHostInstanceId_16; }
	inline String_t** get_address_of_ServerHostInstanceId_16() { return &___ServerHostInstanceId_16; }
	inline void set_ServerHostInstanceId_16(String_t* value)
	{
		___ServerHostInstanceId_16 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHostInstanceId_16), value);
	}

	inline static int32_t get_offset_of_TitleId_17() { return static_cast<int32_t>(offsetof(PlayerLeftLobbyEventData_t206762372, ___TitleId_17)); }
	inline String_t* get_TitleId_17() const { return ___TitleId_17; }
	inline String_t** get_address_of_TitleId_17() { return &___TitleId_17; }
	inline void set_TitleId_17(String_t* value)
	{
		___TitleId_17 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERLEFTLOBBYEVENTDATA_T206762372_H
#ifndef PLAYERJOINEDLOBBYEVENTDATA_T236234889_H
#define PLAYERJOINEDLOBBYEVENTDATA_T236234889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData
struct  PlayerJoinedLobbyEventData_t236234889  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData::LobbyId
	String_t* ___LobbyId_10;
	// System.String PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData::GameMode
	String_t* ___GameMode_11;
	// System.String PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData::Region
	String_t* ___Region_12;
	// System.String PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData::ServerBuildVersion
	String_t* ___ServerBuildVersion_13;
	// System.String PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData::ServerHost
	String_t* ___ServerHost_14;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData::ServerPort
	uint32_t ___ServerPort_15;
	// System.String PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData::ServerHostInstanceId
	String_t* ___ServerHostInstanceId_16;
	// System.String PlayFab.PlayStreamModels.PlayerJoinedLobbyEventData::TitleId
	String_t* ___TitleId_17;

public:
	inline static int32_t get_offset_of_LobbyId_10() { return static_cast<int32_t>(offsetof(PlayerJoinedLobbyEventData_t236234889, ___LobbyId_10)); }
	inline String_t* get_LobbyId_10() const { return ___LobbyId_10; }
	inline String_t** get_address_of_LobbyId_10() { return &___LobbyId_10; }
	inline void set_LobbyId_10(String_t* value)
	{
		___LobbyId_10 = value;
		Il2CppCodeGenWriteBarrier((&___LobbyId_10), value);
	}

	inline static int32_t get_offset_of_GameMode_11() { return static_cast<int32_t>(offsetof(PlayerJoinedLobbyEventData_t236234889, ___GameMode_11)); }
	inline String_t* get_GameMode_11() const { return ___GameMode_11; }
	inline String_t** get_address_of_GameMode_11() { return &___GameMode_11; }
	inline void set_GameMode_11(String_t* value)
	{
		___GameMode_11 = value;
		Il2CppCodeGenWriteBarrier((&___GameMode_11), value);
	}

	inline static int32_t get_offset_of_Region_12() { return static_cast<int32_t>(offsetof(PlayerJoinedLobbyEventData_t236234889, ___Region_12)); }
	inline String_t* get_Region_12() const { return ___Region_12; }
	inline String_t** get_address_of_Region_12() { return &___Region_12; }
	inline void set_Region_12(String_t* value)
	{
		___Region_12 = value;
		Il2CppCodeGenWriteBarrier((&___Region_12), value);
	}

	inline static int32_t get_offset_of_ServerBuildVersion_13() { return static_cast<int32_t>(offsetof(PlayerJoinedLobbyEventData_t236234889, ___ServerBuildVersion_13)); }
	inline String_t* get_ServerBuildVersion_13() const { return ___ServerBuildVersion_13; }
	inline String_t** get_address_of_ServerBuildVersion_13() { return &___ServerBuildVersion_13; }
	inline void set_ServerBuildVersion_13(String_t* value)
	{
		___ServerBuildVersion_13 = value;
		Il2CppCodeGenWriteBarrier((&___ServerBuildVersion_13), value);
	}

	inline static int32_t get_offset_of_ServerHost_14() { return static_cast<int32_t>(offsetof(PlayerJoinedLobbyEventData_t236234889, ___ServerHost_14)); }
	inline String_t* get_ServerHost_14() const { return ___ServerHost_14; }
	inline String_t** get_address_of_ServerHost_14() { return &___ServerHost_14; }
	inline void set_ServerHost_14(String_t* value)
	{
		___ServerHost_14 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHost_14), value);
	}

	inline static int32_t get_offset_of_ServerPort_15() { return static_cast<int32_t>(offsetof(PlayerJoinedLobbyEventData_t236234889, ___ServerPort_15)); }
	inline uint32_t get_ServerPort_15() const { return ___ServerPort_15; }
	inline uint32_t* get_address_of_ServerPort_15() { return &___ServerPort_15; }
	inline void set_ServerPort_15(uint32_t value)
	{
		___ServerPort_15 = value;
	}

	inline static int32_t get_offset_of_ServerHostInstanceId_16() { return static_cast<int32_t>(offsetof(PlayerJoinedLobbyEventData_t236234889, ___ServerHostInstanceId_16)); }
	inline String_t* get_ServerHostInstanceId_16() const { return ___ServerHostInstanceId_16; }
	inline String_t** get_address_of_ServerHostInstanceId_16() { return &___ServerHostInstanceId_16; }
	inline void set_ServerHostInstanceId_16(String_t* value)
	{
		___ServerHostInstanceId_16 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHostInstanceId_16), value);
	}

	inline static int32_t get_offset_of_TitleId_17() { return static_cast<int32_t>(offsetof(PlayerJoinedLobbyEventData_t236234889, ___TitleId_17)); }
	inline String_t* get_TitleId_17() const { return ___TitleId_17; }
	inline String_t** get_address_of_TitleId_17() { return &___TitleId_17; }
	inline void set_TitleId_17(String_t* value)
	{
		___TitleId_17 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERJOINEDLOBBYEVENTDATA_T236234889_H
#ifndef PLAYERINVENTORYITEMADDEDEVENTDATA_T320654039_H
#define PLAYERINVENTORYITEMADDEDEVENTDATA_T320654039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData
struct  PlayerInventoryItemAddedEventData_t320654039  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::InstanceId
	String_t* ___InstanceId_10;
	// System.String PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::ItemId
	String_t* ___ItemId_11;
	// System.String PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::DisplayName
	String_t* ___DisplayName_12;
	// System.String PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::Class
	String_t* ___Class_13;
	// System.String PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::CatalogVersion
	String_t* ___CatalogVersion_14;
	// System.Nullable`1<System.DateTime> PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::Expiration
	Nullable_1_t4223474148  ___Expiration_15;
	// System.Nullable`1<System.UInt32> PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::RemainingUses
	Nullable_1_t464247827  ___RemainingUses_16;
	// System.String PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::Annotation
	String_t* ___Annotation_17;
	// System.String PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::CouponCode
	String_t* ___CouponCode_18;
	// System.Collections.Generic.List`1<System.String> PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::BundleContents
	List_1_t859813222 * ___BundleContents_19;
	// System.String PlayFab.PlayStreamModels.PlayerInventoryItemAddedEventData::TitleId
	String_t* ___TitleId_20;

public:
	inline static int32_t get_offset_of_InstanceId_10() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t320654039, ___InstanceId_10)); }
	inline String_t* get_InstanceId_10() const { return ___InstanceId_10; }
	inline String_t** get_address_of_InstanceId_10() { return &___InstanceId_10; }
	inline void set_InstanceId_10(String_t* value)
	{
		___InstanceId_10 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceId_10), value);
	}

	inline static int32_t get_offset_of_ItemId_11() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t320654039, ___ItemId_11)); }
	inline String_t* get_ItemId_11() const { return ___ItemId_11; }
	inline String_t** get_address_of_ItemId_11() { return &___ItemId_11; }
	inline void set_ItemId_11(String_t* value)
	{
		___ItemId_11 = value;
		Il2CppCodeGenWriteBarrier((&___ItemId_11), value);
	}

	inline static int32_t get_offset_of_DisplayName_12() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t320654039, ___DisplayName_12)); }
	inline String_t* get_DisplayName_12() const { return ___DisplayName_12; }
	inline String_t** get_address_of_DisplayName_12() { return &___DisplayName_12; }
	inline void set_DisplayName_12(String_t* value)
	{
		___DisplayName_12 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_12), value);
	}

	inline static int32_t get_offset_of_Class_13() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t320654039, ___Class_13)); }
	inline String_t* get_Class_13() const { return ___Class_13; }
	inline String_t** get_address_of_Class_13() { return &___Class_13; }
	inline void set_Class_13(String_t* value)
	{
		___Class_13 = value;
		Il2CppCodeGenWriteBarrier((&___Class_13), value);
	}

	inline static int32_t get_offset_of_CatalogVersion_14() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t320654039, ___CatalogVersion_14)); }
	inline String_t* get_CatalogVersion_14() const { return ___CatalogVersion_14; }
	inline String_t** get_address_of_CatalogVersion_14() { return &___CatalogVersion_14; }
	inline void set_CatalogVersion_14(String_t* value)
	{
		___CatalogVersion_14 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_14), value);
	}

	inline static int32_t get_offset_of_Expiration_15() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t320654039, ___Expiration_15)); }
	inline Nullable_1_t4223474148  get_Expiration_15() const { return ___Expiration_15; }
	inline Nullable_1_t4223474148 * get_address_of_Expiration_15() { return &___Expiration_15; }
	inline void set_Expiration_15(Nullable_1_t4223474148  value)
	{
		___Expiration_15 = value;
	}

	inline static int32_t get_offset_of_RemainingUses_16() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t320654039, ___RemainingUses_16)); }
	inline Nullable_1_t464247827  get_RemainingUses_16() const { return ___RemainingUses_16; }
	inline Nullable_1_t464247827 * get_address_of_RemainingUses_16() { return &___RemainingUses_16; }
	inline void set_RemainingUses_16(Nullable_1_t464247827  value)
	{
		___RemainingUses_16 = value;
	}

	inline static int32_t get_offset_of_Annotation_17() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t320654039, ___Annotation_17)); }
	inline String_t* get_Annotation_17() const { return ___Annotation_17; }
	inline String_t** get_address_of_Annotation_17() { return &___Annotation_17; }
	inline void set_Annotation_17(String_t* value)
	{
		___Annotation_17 = value;
		Il2CppCodeGenWriteBarrier((&___Annotation_17), value);
	}

	inline static int32_t get_offset_of_CouponCode_18() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t320654039, ___CouponCode_18)); }
	inline String_t* get_CouponCode_18() const { return ___CouponCode_18; }
	inline String_t** get_address_of_CouponCode_18() { return &___CouponCode_18; }
	inline void set_CouponCode_18(String_t* value)
	{
		___CouponCode_18 = value;
		Il2CppCodeGenWriteBarrier((&___CouponCode_18), value);
	}

	inline static int32_t get_offset_of_BundleContents_19() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t320654039, ___BundleContents_19)); }
	inline List_1_t859813222 * get_BundleContents_19() const { return ___BundleContents_19; }
	inline List_1_t859813222 ** get_address_of_BundleContents_19() { return &___BundleContents_19; }
	inline void set_BundleContents_19(List_1_t859813222 * value)
	{
		___BundleContents_19 = value;
		Il2CppCodeGenWriteBarrier((&___BundleContents_19), value);
	}

	inline static int32_t get_offset_of_TitleId_20() { return static_cast<int32_t>(offsetof(PlayerInventoryItemAddedEventData_t320654039, ___TitleId_20)); }
	inline String_t* get_TitleId_20() const { return ___TitleId_20; }
	inline String_t** get_address_of_TitleId_20() { return &___TitleId_20; }
	inline void set_TitleId_20(String_t* value)
	{
		___TitleId_20 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERINVENTORYITEMADDEDEVENTDATA_T320654039_H
#ifndef PLAYEREXECUTEDCLOUDSCRIPTEVENTDATA_T2233726154_H
#define PLAYEREXECUTEDCLOUDSCRIPTEVENTDATA_T2233726154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerExecutedCloudScriptEventData
struct  PlayerExecutedCloudScriptEventData_t2233726154  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerExecutedCloudScriptEventData::FunctionName
	String_t* ___FunctionName_10;
	// PlayFab.PlayStreamModels.ExecuteCloudScriptResult PlayFab.PlayStreamModels.PlayerExecutedCloudScriptEventData::CloudScriptExecutionResult
	ExecuteCloudScriptResult_t4017463769 * ___CloudScriptExecutionResult_11;
	// System.String PlayFab.PlayStreamModels.PlayerExecutedCloudScriptEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_FunctionName_10() { return static_cast<int32_t>(offsetof(PlayerExecutedCloudScriptEventData_t2233726154, ___FunctionName_10)); }
	inline String_t* get_FunctionName_10() const { return ___FunctionName_10; }
	inline String_t** get_address_of_FunctionName_10() { return &___FunctionName_10; }
	inline void set_FunctionName_10(String_t* value)
	{
		___FunctionName_10 = value;
		Il2CppCodeGenWriteBarrier((&___FunctionName_10), value);
	}

	inline static int32_t get_offset_of_CloudScriptExecutionResult_11() { return static_cast<int32_t>(offsetof(PlayerExecutedCloudScriptEventData_t2233726154, ___CloudScriptExecutionResult_11)); }
	inline ExecuteCloudScriptResult_t4017463769 * get_CloudScriptExecutionResult_11() const { return ___CloudScriptExecutionResult_11; }
	inline ExecuteCloudScriptResult_t4017463769 ** get_address_of_CloudScriptExecutionResult_11() { return &___CloudScriptExecutionResult_11; }
	inline void set_CloudScriptExecutionResult_11(ExecuteCloudScriptResult_t4017463769 * value)
	{
		___CloudScriptExecutionResult_11 = value;
		Il2CppCodeGenWriteBarrier((&___CloudScriptExecutionResult_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerExecutedCloudScriptEventData_t2233726154, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYEREXECUTEDCLOUDSCRIPTEVENTDATA_T2233726154_H
#ifndef PLAYERDISPLAYNAMECHANGEDEVENTDATA_T2294510825_H
#define PLAYERDISPLAYNAMECHANGEDEVENTDATA_T2294510825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerDisplayNameChangedEventData
struct  PlayerDisplayNameChangedEventData_t2294510825  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerDisplayNameChangedEventData::PreviousDisplayName
	String_t* ___PreviousDisplayName_10;
	// System.String PlayFab.PlayStreamModels.PlayerDisplayNameChangedEventData::DisplayName
	String_t* ___DisplayName_11;
	// System.String PlayFab.PlayStreamModels.PlayerDisplayNameChangedEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_PreviousDisplayName_10() { return static_cast<int32_t>(offsetof(PlayerDisplayNameChangedEventData_t2294510825, ___PreviousDisplayName_10)); }
	inline String_t* get_PreviousDisplayName_10() const { return ___PreviousDisplayName_10; }
	inline String_t** get_address_of_PreviousDisplayName_10() { return &___PreviousDisplayName_10; }
	inline void set_PreviousDisplayName_10(String_t* value)
	{
		___PreviousDisplayName_10 = value;
		Il2CppCodeGenWriteBarrier((&___PreviousDisplayName_10), value);
	}

	inline static int32_t get_offset_of_DisplayName_11() { return static_cast<int32_t>(offsetof(PlayerDisplayNameChangedEventData_t2294510825, ___DisplayName_11)); }
	inline String_t* get_DisplayName_11() const { return ___DisplayName_11; }
	inline String_t** get_address_of_DisplayName_11() { return &___DisplayName_11; }
	inline void set_DisplayName_11(String_t* value)
	{
		___DisplayName_11 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerDisplayNameChangedEventData_t2294510825, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERDISPLAYNAMECHANGEDEVENTDATA_T2294510825_H
#ifndef AUTHTOKENVALIDATEDEVENTDATA_T873836589_H
#define AUTHTOKENVALIDATEDEVENTDATA_T873836589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.AuthTokenValidatedEventData
struct  AuthTokenValidatedEventData_t873836589  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.AuthTokenValidatedEventData::Token
	String_t* ___Token_10;
	// System.String PlayFab.PlayStreamModels.AuthTokenValidatedEventData::TitleId
	String_t* ___TitleId_11;

public:
	inline static int32_t get_offset_of_Token_10() { return static_cast<int32_t>(offsetof(AuthTokenValidatedEventData_t873836589, ___Token_10)); }
	inline String_t* get_Token_10() const { return ___Token_10; }
	inline String_t** get_address_of_Token_10() { return &___Token_10; }
	inline void set_Token_10(String_t* value)
	{
		___Token_10 = value;
		Il2CppCodeGenWriteBarrier((&___Token_10), value);
	}

	inline static int32_t get_offset_of_TitleId_11() { return static_cast<int32_t>(offsetof(AuthTokenValidatedEventData_t873836589, ___TitleId_11)); }
	inline String_t* get_TitleId_11() const { return ___TitleId_11; }
	inline String_t** get_address_of_TitleId_11() { return &___TitleId_11; }
	inline void set_TitleId_11(String_t* value)
	{
		___TitleId_11 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHTOKENVALIDATEDEVENTDATA_T873836589_H
#ifndef PLAYERADCAMPAIGNATTRIBUTIONEVENTDATA_T459900559_H
#define PLAYERADCAMPAIGNATTRIBUTIONEVENTDATA_T459900559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerAdCampaignAttributionEventData
struct  PlayerAdCampaignAttributionEventData_t459900559  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerAdCampaignAttributionEventData::CampaignId
	String_t* ___CampaignId_10;
	// System.String PlayFab.PlayStreamModels.PlayerAdCampaignAttributionEventData::TitleId
	String_t* ___TitleId_11;

public:
	inline static int32_t get_offset_of_CampaignId_10() { return static_cast<int32_t>(offsetof(PlayerAdCampaignAttributionEventData_t459900559, ___CampaignId_10)); }
	inline String_t* get_CampaignId_10() const { return ___CampaignId_10; }
	inline String_t** get_address_of_CampaignId_10() { return &___CampaignId_10; }
	inline void set_CampaignId_10(String_t* value)
	{
		___CampaignId_10 = value;
		Il2CppCodeGenWriteBarrier((&___CampaignId_10), value);
	}

	inline static int32_t get_offset_of_TitleId_11() { return static_cast<int32_t>(offsetof(PlayerAdCampaignAttributionEventData_t459900559, ___TitleId_11)); }
	inline String_t* get_TitleId_11() const { return ___TitleId_11; }
	inline String_t** get_address_of_TitleId_11() { return &___TitleId_11; }
	inline void set_TitleId_11(String_t* value)
	{
		___TitleId_11 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERADCAMPAIGNATTRIBUTIONEVENTDATA_T459900559_H
#ifndef PLAYERADCLOSEDEVENTDATA_T2415992495_H
#define PLAYERADCLOSEDEVENTDATA_T2415992495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerAdClosedEventData
struct  PlayerAdClosedEventData_t2415992495  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerAdClosedEventData::AdPlacementId
	String_t* ___AdPlacementId_10;
	// System.String PlayFab.PlayStreamModels.PlayerAdClosedEventData::AdPlacementName
	String_t* ___AdPlacementName_11;
	// System.String PlayFab.PlayStreamModels.PlayerAdClosedEventData::RewardId
	String_t* ___RewardId_12;
	// System.String PlayFab.PlayStreamModels.PlayerAdClosedEventData::RewardName
	String_t* ___RewardName_13;
	// System.String PlayFab.PlayStreamModels.PlayerAdClosedEventData::AdUnit
	String_t* ___AdUnit_14;
	// System.String PlayFab.PlayStreamModels.PlayerAdClosedEventData::TitleId
	String_t* ___TitleId_15;

public:
	inline static int32_t get_offset_of_AdPlacementId_10() { return static_cast<int32_t>(offsetof(PlayerAdClosedEventData_t2415992495, ___AdPlacementId_10)); }
	inline String_t* get_AdPlacementId_10() const { return ___AdPlacementId_10; }
	inline String_t** get_address_of_AdPlacementId_10() { return &___AdPlacementId_10; }
	inline void set_AdPlacementId_10(String_t* value)
	{
		___AdPlacementId_10 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementId_10), value);
	}

	inline static int32_t get_offset_of_AdPlacementName_11() { return static_cast<int32_t>(offsetof(PlayerAdClosedEventData_t2415992495, ___AdPlacementName_11)); }
	inline String_t* get_AdPlacementName_11() const { return ___AdPlacementName_11; }
	inline String_t** get_address_of_AdPlacementName_11() { return &___AdPlacementName_11; }
	inline void set_AdPlacementName_11(String_t* value)
	{
		___AdPlacementName_11 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementName_11), value);
	}

	inline static int32_t get_offset_of_RewardId_12() { return static_cast<int32_t>(offsetof(PlayerAdClosedEventData_t2415992495, ___RewardId_12)); }
	inline String_t* get_RewardId_12() const { return ___RewardId_12; }
	inline String_t** get_address_of_RewardId_12() { return &___RewardId_12; }
	inline void set_RewardId_12(String_t* value)
	{
		___RewardId_12 = value;
		Il2CppCodeGenWriteBarrier((&___RewardId_12), value);
	}

	inline static int32_t get_offset_of_RewardName_13() { return static_cast<int32_t>(offsetof(PlayerAdClosedEventData_t2415992495, ___RewardName_13)); }
	inline String_t* get_RewardName_13() const { return ___RewardName_13; }
	inline String_t** get_address_of_RewardName_13() { return &___RewardName_13; }
	inline void set_RewardName_13(String_t* value)
	{
		___RewardName_13 = value;
		Il2CppCodeGenWriteBarrier((&___RewardName_13), value);
	}

	inline static int32_t get_offset_of_AdUnit_14() { return static_cast<int32_t>(offsetof(PlayerAdClosedEventData_t2415992495, ___AdUnit_14)); }
	inline String_t* get_AdUnit_14() const { return ___AdUnit_14; }
	inline String_t** get_address_of_AdUnit_14() { return &___AdUnit_14; }
	inline void set_AdUnit_14(String_t* value)
	{
		___AdUnit_14 = value;
		Il2CppCodeGenWriteBarrier((&___AdUnit_14), value);
	}

	inline static int32_t get_offset_of_TitleId_15() { return static_cast<int32_t>(offsetof(PlayerAdClosedEventData_t2415992495, ___TitleId_15)); }
	inline String_t* get_TitleId_15() const { return ___TitleId_15; }
	inline String_t** get_address_of_TitleId_15() { return &___TitleId_15; }
	inline void set_TitleId_15(String_t* value)
	{
		___TitleId_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERADCLOSEDEVENTDATA_T2415992495_H
#ifndef PLAYERADDEDTITLEEVENTDATA_T2584788120_H
#define PLAYERADDEDTITLEEVENTDATA_T2584788120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerAddedTitleEventData
struct  PlayerAddedTitleEventData_t2584788120  : public PlayStreamEventBase_t710997429
{
public:
	// System.Nullable`1<PlayFab.PlayStreamModels.LoginIdentityProvider> PlayFab.PlayStreamModels.PlayerAddedTitleEventData::Platform
	Nullable_1_t2019201765  ___Platform_10;
	// System.String PlayFab.PlayStreamModels.PlayerAddedTitleEventData::PlatformUserId
	String_t* ___PlatformUserId_11;
	// System.String PlayFab.PlayStreamModels.PlayerAddedTitleEventData::DisplayName
	String_t* ___DisplayName_12;
	// System.String PlayFab.PlayStreamModels.PlayerAddedTitleEventData::TitleId
	String_t* ___TitleId_13;

public:
	inline static int32_t get_offset_of_Platform_10() { return static_cast<int32_t>(offsetof(PlayerAddedTitleEventData_t2584788120, ___Platform_10)); }
	inline Nullable_1_t2019201765  get_Platform_10() const { return ___Platform_10; }
	inline Nullable_1_t2019201765 * get_address_of_Platform_10() { return &___Platform_10; }
	inline void set_Platform_10(Nullable_1_t2019201765  value)
	{
		___Platform_10 = value;
	}

	inline static int32_t get_offset_of_PlatformUserId_11() { return static_cast<int32_t>(offsetof(PlayerAddedTitleEventData_t2584788120, ___PlatformUserId_11)); }
	inline String_t* get_PlatformUserId_11() const { return ___PlatformUserId_11; }
	inline String_t** get_address_of_PlatformUserId_11() { return &___PlatformUserId_11; }
	inline void set_PlatformUserId_11(String_t* value)
	{
		___PlatformUserId_11 = value;
		Il2CppCodeGenWriteBarrier((&___PlatformUserId_11), value);
	}

	inline static int32_t get_offset_of_DisplayName_12() { return static_cast<int32_t>(offsetof(PlayerAddedTitleEventData_t2584788120, ___DisplayName_12)); }
	inline String_t* get_DisplayName_12() const { return ___DisplayName_12; }
	inline String_t** get_address_of_DisplayName_12() { return &___DisplayName_12; }
	inline void set_DisplayName_12(String_t* value)
	{
		___DisplayName_12 = value;
		Il2CppCodeGenWriteBarrier((&___DisplayName_12), value);
	}

	inline static int32_t get_offset_of_TitleId_13() { return static_cast<int32_t>(offsetof(PlayerAddedTitleEventData_t2584788120, ___TitleId_13)); }
	inline String_t* get_TitleId_13() const { return ___TitleId_13; }
	inline String_t** get_address_of_TitleId_13() { return &___TitleId_13; }
	inline void set_TitleId_13(String_t* value)
	{
		___TitleId_13 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERADDEDTITLEEVENTDATA_T2584788120_H
#ifndef PLAYERADENDEDEVENTDATA_T2307726410_H
#define PLAYERADENDEDEVENTDATA_T2307726410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerAdEndedEventData
struct  PlayerAdEndedEventData_t2307726410  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerAdEndedEventData::AdPlacementId
	String_t* ___AdPlacementId_10;
	// System.String PlayFab.PlayStreamModels.PlayerAdEndedEventData::AdPlacementName
	String_t* ___AdPlacementName_11;
	// System.String PlayFab.PlayStreamModels.PlayerAdEndedEventData::RewardId
	String_t* ___RewardId_12;
	// System.String PlayFab.PlayStreamModels.PlayerAdEndedEventData::RewardName
	String_t* ___RewardName_13;
	// System.String PlayFab.PlayStreamModels.PlayerAdEndedEventData::AdUnit
	String_t* ___AdUnit_14;
	// System.String PlayFab.PlayStreamModels.PlayerAdEndedEventData::TitleId
	String_t* ___TitleId_15;

public:
	inline static int32_t get_offset_of_AdPlacementId_10() { return static_cast<int32_t>(offsetof(PlayerAdEndedEventData_t2307726410, ___AdPlacementId_10)); }
	inline String_t* get_AdPlacementId_10() const { return ___AdPlacementId_10; }
	inline String_t** get_address_of_AdPlacementId_10() { return &___AdPlacementId_10; }
	inline void set_AdPlacementId_10(String_t* value)
	{
		___AdPlacementId_10 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementId_10), value);
	}

	inline static int32_t get_offset_of_AdPlacementName_11() { return static_cast<int32_t>(offsetof(PlayerAdEndedEventData_t2307726410, ___AdPlacementName_11)); }
	inline String_t* get_AdPlacementName_11() const { return ___AdPlacementName_11; }
	inline String_t** get_address_of_AdPlacementName_11() { return &___AdPlacementName_11; }
	inline void set_AdPlacementName_11(String_t* value)
	{
		___AdPlacementName_11 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementName_11), value);
	}

	inline static int32_t get_offset_of_RewardId_12() { return static_cast<int32_t>(offsetof(PlayerAdEndedEventData_t2307726410, ___RewardId_12)); }
	inline String_t* get_RewardId_12() const { return ___RewardId_12; }
	inline String_t** get_address_of_RewardId_12() { return &___RewardId_12; }
	inline void set_RewardId_12(String_t* value)
	{
		___RewardId_12 = value;
		Il2CppCodeGenWriteBarrier((&___RewardId_12), value);
	}

	inline static int32_t get_offset_of_RewardName_13() { return static_cast<int32_t>(offsetof(PlayerAdEndedEventData_t2307726410, ___RewardName_13)); }
	inline String_t* get_RewardName_13() const { return ___RewardName_13; }
	inline String_t** get_address_of_RewardName_13() { return &___RewardName_13; }
	inline void set_RewardName_13(String_t* value)
	{
		___RewardName_13 = value;
		Il2CppCodeGenWriteBarrier((&___RewardName_13), value);
	}

	inline static int32_t get_offset_of_AdUnit_14() { return static_cast<int32_t>(offsetof(PlayerAdEndedEventData_t2307726410, ___AdUnit_14)); }
	inline String_t* get_AdUnit_14() const { return ___AdUnit_14; }
	inline String_t** get_address_of_AdUnit_14() { return &___AdUnit_14; }
	inline void set_AdUnit_14(String_t* value)
	{
		___AdUnit_14 = value;
		Il2CppCodeGenWriteBarrier((&___AdUnit_14), value);
	}

	inline static int32_t get_offset_of_TitleId_15() { return static_cast<int32_t>(offsetof(PlayerAdEndedEventData_t2307726410, ___TitleId_15)); }
	inline String_t* get_TitleId_15() const { return ___TitleId_15; }
	inline String_t** get_address_of_TitleId_15() { return &___TitleId_15; }
	inline void set_TitleId_15(String_t* value)
	{
		___TitleId_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERADENDEDEVENTDATA_T2307726410_H
#ifndef PLAYERADOPENEDEVENTDATA_T27651999_H
#define PLAYERADOPENEDEVENTDATA_T27651999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerAdOpenedEventData
struct  PlayerAdOpenedEventData_t27651999  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerAdOpenedEventData::AdPlacementId
	String_t* ___AdPlacementId_10;
	// System.String PlayFab.PlayStreamModels.PlayerAdOpenedEventData::AdPlacementName
	String_t* ___AdPlacementName_11;
	// System.String PlayFab.PlayStreamModels.PlayerAdOpenedEventData::RewardId
	String_t* ___RewardId_12;
	// System.String PlayFab.PlayStreamModels.PlayerAdOpenedEventData::RewardName
	String_t* ___RewardName_13;
	// System.String PlayFab.PlayStreamModels.PlayerAdOpenedEventData::AdUnit
	String_t* ___AdUnit_14;
	// System.String PlayFab.PlayStreamModels.PlayerAdOpenedEventData::TitleId
	String_t* ___TitleId_15;

public:
	inline static int32_t get_offset_of_AdPlacementId_10() { return static_cast<int32_t>(offsetof(PlayerAdOpenedEventData_t27651999, ___AdPlacementId_10)); }
	inline String_t* get_AdPlacementId_10() const { return ___AdPlacementId_10; }
	inline String_t** get_address_of_AdPlacementId_10() { return &___AdPlacementId_10; }
	inline void set_AdPlacementId_10(String_t* value)
	{
		___AdPlacementId_10 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementId_10), value);
	}

	inline static int32_t get_offset_of_AdPlacementName_11() { return static_cast<int32_t>(offsetof(PlayerAdOpenedEventData_t27651999, ___AdPlacementName_11)); }
	inline String_t* get_AdPlacementName_11() const { return ___AdPlacementName_11; }
	inline String_t** get_address_of_AdPlacementName_11() { return &___AdPlacementName_11; }
	inline void set_AdPlacementName_11(String_t* value)
	{
		___AdPlacementName_11 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementName_11), value);
	}

	inline static int32_t get_offset_of_RewardId_12() { return static_cast<int32_t>(offsetof(PlayerAdOpenedEventData_t27651999, ___RewardId_12)); }
	inline String_t* get_RewardId_12() const { return ___RewardId_12; }
	inline String_t** get_address_of_RewardId_12() { return &___RewardId_12; }
	inline void set_RewardId_12(String_t* value)
	{
		___RewardId_12 = value;
		Il2CppCodeGenWriteBarrier((&___RewardId_12), value);
	}

	inline static int32_t get_offset_of_RewardName_13() { return static_cast<int32_t>(offsetof(PlayerAdOpenedEventData_t27651999, ___RewardName_13)); }
	inline String_t* get_RewardName_13() const { return ___RewardName_13; }
	inline String_t** get_address_of_RewardName_13() { return &___RewardName_13; }
	inline void set_RewardName_13(String_t* value)
	{
		___RewardName_13 = value;
		Il2CppCodeGenWriteBarrier((&___RewardName_13), value);
	}

	inline static int32_t get_offset_of_AdUnit_14() { return static_cast<int32_t>(offsetof(PlayerAdOpenedEventData_t27651999, ___AdUnit_14)); }
	inline String_t* get_AdUnit_14() const { return ___AdUnit_14; }
	inline String_t** get_address_of_AdUnit_14() { return &___AdUnit_14; }
	inline void set_AdUnit_14(String_t* value)
	{
		___AdUnit_14 = value;
		Il2CppCodeGenWriteBarrier((&___AdUnit_14), value);
	}

	inline static int32_t get_offset_of_TitleId_15() { return static_cast<int32_t>(offsetof(PlayerAdOpenedEventData_t27651999, ___TitleId_15)); }
	inline String_t* get_TitleId_15() const { return ___TitleId_15; }
	inline String_t** get_address_of_TitleId_15() { return &___TitleId_15; }
	inline void set_TitleId_15(String_t* value)
	{
		___TitleId_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERADOPENEDEVENTDATA_T27651999_H
#ifndef PLAYERSTATISTICCHANGEDEVENTDATA_T3207156102_H
#define PLAYERSTATISTICCHANGEDEVENTDATA_T3207156102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerStatisticChangedEventData
struct  PlayerStatisticChangedEventData_t3207156102  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerStatisticChangedEventData::StatisticName
	String_t* ___StatisticName_10;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerStatisticChangedEventData::StatisticId
	uint32_t ___StatisticId_11;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerStatisticChangedEventData::Version
	uint32_t ___Version_12;
	// System.Int32 PlayFab.PlayStreamModels.PlayerStatisticChangedEventData::StatisticValue
	int32_t ___StatisticValue_13;
	// System.Nullable`1<System.Int32> PlayFab.PlayStreamModels.PlayerStatisticChangedEventData::StatisticPreviousValue
	Nullable_1_t3386535404  ___StatisticPreviousValue_14;
	// System.Nullable`1<PlayFab.PlayStreamModels.StatisticAggregationMethod> PlayFab.PlayStreamModels.PlayerStatisticChangedEventData::AggregationMethod
	Nullable_1_t3633491254  ___AggregationMethod_15;
	// System.String PlayFab.PlayStreamModels.PlayerStatisticChangedEventData::TitleId
	String_t* ___TitleId_16;

public:
	inline static int32_t get_offset_of_StatisticName_10() { return static_cast<int32_t>(offsetof(PlayerStatisticChangedEventData_t3207156102, ___StatisticName_10)); }
	inline String_t* get_StatisticName_10() const { return ___StatisticName_10; }
	inline String_t** get_address_of_StatisticName_10() { return &___StatisticName_10; }
	inline void set_StatisticName_10(String_t* value)
	{
		___StatisticName_10 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_10), value);
	}

	inline static int32_t get_offset_of_StatisticId_11() { return static_cast<int32_t>(offsetof(PlayerStatisticChangedEventData_t3207156102, ___StatisticId_11)); }
	inline uint32_t get_StatisticId_11() const { return ___StatisticId_11; }
	inline uint32_t* get_address_of_StatisticId_11() { return &___StatisticId_11; }
	inline void set_StatisticId_11(uint32_t value)
	{
		___StatisticId_11 = value;
	}

	inline static int32_t get_offset_of_Version_12() { return static_cast<int32_t>(offsetof(PlayerStatisticChangedEventData_t3207156102, ___Version_12)); }
	inline uint32_t get_Version_12() const { return ___Version_12; }
	inline uint32_t* get_address_of_Version_12() { return &___Version_12; }
	inline void set_Version_12(uint32_t value)
	{
		___Version_12 = value;
	}

	inline static int32_t get_offset_of_StatisticValue_13() { return static_cast<int32_t>(offsetof(PlayerStatisticChangedEventData_t3207156102, ___StatisticValue_13)); }
	inline int32_t get_StatisticValue_13() const { return ___StatisticValue_13; }
	inline int32_t* get_address_of_StatisticValue_13() { return &___StatisticValue_13; }
	inline void set_StatisticValue_13(int32_t value)
	{
		___StatisticValue_13 = value;
	}

	inline static int32_t get_offset_of_StatisticPreviousValue_14() { return static_cast<int32_t>(offsetof(PlayerStatisticChangedEventData_t3207156102, ___StatisticPreviousValue_14)); }
	inline Nullable_1_t3386535404  get_StatisticPreviousValue_14() const { return ___StatisticPreviousValue_14; }
	inline Nullable_1_t3386535404 * get_address_of_StatisticPreviousValue_14() { return &___StatisticPreviousValue_14; }
	inline void set_StatisticPreviousValue_14(Nullable_1_t3386535404  value)
	{
		___StatisticPreviousValue_14 = value;
	}

	inline static int32_t get_offset_of_AggregationMethod_15() { return static_cast<int32_t>(offsetof(PlayerStatisticChangedEventData_t3207156102, ___AggregationMethod_15)); }
	inline Nullable_1_t3633491254  get_AggregationMethod_15() const { return ___AggregationMethod_15; }
	inline Nullable_1_t3633491254 * get_address_of_AggregationMethod_15() { return &___AggregationMethod_15; }
	inline void set_AggregationMethod_15(Nullable_1_t3633491254  value)
	{
		___AggregationMethod_15 = value;
	}

	inline static int32_t get_offset_of_TitleId_16() { return static_cast<int32_t>(offsetof(PlayerStatisticChangedEventData_t3207156102, ___TitleId_16)); }
	inline String_t* get_TitleId_16() const { return ___TitleId_16; }
	inline String_t** get_address_of_TitleId_16() { return &___TitleId_16; }
	inline void set_TitleId_16(String_t* value)
	{
		___TitleId_16 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSTATISTICCHANGEDEVENTDATA_T3207156102_H
#ifndef PLAYERADREWARDEDEVENTDATA_T941375686_H
#define PLAYERADREWARDEDEVENTDATA_T941375686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerAdRewardedEventData
struct  PlayerAdRewardedEventData_t941375686  : public PlayStreamEventBase_t710997429
{
public:
	// System.Nullable`1<System.Int32> PlayFab.PlayStreamModels.PlayerAdRewardedEventData::ViewsRemainingThisPeriod
	Nullable_1_t3386535404  ___ViewsRemainingThisPeriod_10;
	// System.Collections.Generic.List`1<System.String> PlayFab.PlayStreamModels.PlayerAdRewardedEventData::ActionGroupDebugMessages
	List_1_t859813222 * ___ActionGroupDebugMessages_11;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardedEventData::AdPlacementId
	String_t* ___AdPlacementId_12;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardedEventData::AdPlacementName
	String_t* ___AdPlacementName_13;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardedEventData::RewardId
	String_t* ___RewardId_14;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardedEventData::RewardName
	String_t* ___RewardName_15;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardedEventData::AdUnit
	String_t* ___AdUnit_16;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardedEventData::TitleId
	String_t* ___TitleId_17;

public:
	inline static int32_t get_offset_of_ViewsRemainingThisPeriod_10() { return static_cast<int32_t>(offsetof(PlayerAdRewardedEventData_t941375686, ___ViewsRemainingThisPeriod_10)); }
	inline Nullable_1_t3386535404  get_ViewsRemainingThisPeriod_10() const { return ___ViewsRemainingThisPeriod_10; }
	inline Nullable_1_t3386535404 * get_address_of_ViewsRemainingThisPeriod_10() { return &___ViewsRemainingThisPeriod_10; }
	inline void set_ViewsRemainingThisPeriod_10(Nullable_1_t3386535404  value)
	{
		___ViewsRemainingThisPeriod_10 = value;
	}

	inline static int32_t get_offset_of_ActionGroupDebugMessages_11() { return static_cast<int32_t>(offsetof(PlayerAdRewardedEventData_t941375686, ___ActionGroupDebugMessages_11)); }
	inline List_1_t859813222 * get_ActionGroupDebugMessages_11() const { return ___ActionGroupDebugMessages_11; }
	inline List_1_t859813222 ** get_address_of_ActionGroupDebugMessages_11() { return &___ActionGroupDebugMessages_11; }
	inline void set_ActionGroupDebugMessages_11(List_1_t859813222 * value)
	{
		___ActionGroupDebugMessages_11 = value;
		Il2CppCodeGenWriteBarrier((&___ActionGroupDebugMessages_11), value);
	}

	inline static int32_t get_offset_of_AdPlacementId_12() { return static_cast<int32_t>(offsetof(PlayerAdRewardedEventData_t941375686, ___AdPlacementId_12)); }
	inline String_t* get_AdPlacementId_12() const { return ___AdPlacementId_12; }
	inline String_t** get_address_of_AdPlacementId_12() { return &___AdPlacementId_12; }
	inline void set_AdPlacementId_12(String_t* value)
	{
		___AdPlacementId_12 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementId_12), value);
	}

	inline static int32_t get_offset_of_AdPlacementName_13() { return static_cast<int32_t>(offsetof(PlayerAdRewardedEventData_t941375686, ___AdPlacementName_13)); }
	inline String_t* get_AdPlacementName_13() const { return ___AdPlacementName_13; }
	inline String_t** get_address_of_AdPlacementName_13() { return &___AdPlacementName_13; }
	inline void set_AdPlacementName_13(String_t* value)
	{
		___AdPlacementName_13 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementName_13), value);
	}

	inline static int32_t get_offset_of_RewardId_14() { return static_cast<int32_t>(offsetof(PlayerAdRewardedEventData_t941375686, ___RewardId_14)); }
	inline String_t* get_RewardId_14() const { return ___RewardId_14; }
	inline String_t** get_address_of_RewardId_14() { return &___RewardId_14; }
	inline void set_RewardId_14(String_t* value)
	{
		___RewardId_14 = value;
		Il2CppCodeGenWriteBarrier((&___RewardId_14), value);
	}

	inline static int32_t get_offset_of_RewardName_15() { return static_cast<int32_t>(offsetof(PlayerAdRewardedEventData_t941375686, ___RewardName_15)); }
	inline String_t* get_RewardName_15() const { return ___RewardName_15; }
	inline String_t** get_address_of_RewardName_15() { return &___RewardName_15; }
	inline void set_RewardName_15(String_t* value)
	{
		___RewardName_15 = value;
		Il2CppCodeGenWriteBarrier((&___RewardName_15), value);
	}

	inline static int32_t get_offset_of_AdUnit_16() { return static_cast<int32_t>(offsetof(PlayerAdRewardedEventData_t941375686, ___AdUnit_16)); }
	inline String_t* get_AdUnit_16() const { return ___AdUnit_16; }
	inline String_t** get_address_of_AdUnit_16() { return &___AdUnit_16; }
	inline void set_AdUnit_16(String_t* value)
	{
		___AdUnit_16 = value;
		Il2CppCodeGenWriteBarrier((&___AdUnit_16), value);
	}

	inline static int32_t get_offset_of_TitleId_17() { return static_cast<int32_t>(offsetof(PlayerAdRewardedEventData_t941375686, ___TitleId_17)); }
	inline String_t* get_TitleId_17() const { return ___TitleId_17; }
	inline String_t** get_address_of_TitleId_17() { return &___TitleId_17; }
	inline void set_TitleId_17(String_t* value)
	{
		___TitleId_17 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERADREWARDEDEVENTDATA_T941375686_H
#ifndef PLAYERADSTARTEDEVENTDATA_T2822137282_H
#define PLAYERADSTARTEDEVENTDATA_T2822137282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerAdStartedEventData
struct  PlayerAdStartedEventData_t2822137282  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerAdStartedEventData::AdPlacementId
	String_t* ___AdPlacementId_10;
	// System.String PlayFab.PlayStreamModels.PlayerAdStartedEventData::AdPlacementName
	String_t* ___AdPlacementName_11;
	// System.String PlayFab.PlayStreamModels.PlayerAdStartedEventData::RewardId
	String_t* ___RewardId_12;
	// System.String PlayFab.PlayStreamModels.PlayerAdStartedEventData::RewardName
	String_t* ___RewardName_13;
	// System.String PlayFab.PlayStreamModels.PlayerAdStartedEventData::AdUnit
	String_t* ___AdUnit_14;
	// System.String PlayFab.PlayStreamModels.PlayerAdStartedEventData::TitleId
	String_t* ___TitleId_15;

public:
	inline static int32_t get_offset_of_AdPlacementId_10() { return static_cast<int32_t>(offsetof(PlayerAdStartedEventData_t2822137282, ___AdPlacementId_10)); }
	inline String_t* get_AdPlacementId_10() const { return ___AdPlacementId_10; }
	inline String_t** get_address_of_AdPlacementId_10() { return &___AdPlacementId_10; }
	inline void set_AdPlacementId_10(String_t* value)
	{
		___AdPlacementId_10 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementId_10), value);
	}

	inline static int32_t get_offset_of_AdPlacementName_11() { return static_cast<int32_t>(offsetof(PlayerAdStartedEventData_t2822137282, ___AdPlacementName_11)); }
	inline String_t* get_AdPlacementName_11() const { return ___AdPlacementName_11; }
	inline String_t** get_address_of_AdPlacementName_11() { return &___AdPlacementName_11; }
	inline void set_AdPlacementName_11(String_t* value)
	{
		___AdPlacementName_11 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementName_11), value);
	}

	inline static int32_t get_offset_of_RewardId_12() { return static_cast<int32_t>(offsetof(PlayerAdStartedEventData_t2822137282, ___RewardId_12)); }
	inline String_t* get_RewardId_12() const { return ___RewardId_12; }
	inline String_t** get_address_of_RewardId_12() { return &___RewardId_12; }
	inline void set_RewardId_12(String_t* value)
	{
		___RewardId_12 = value;
		Il2CppCodeGenWriteBarrier((&___RewardId_12), value);
	}

	inline static int32_t get_offset_of_RewardName_13() { return static_cast<int32_t>(offsetof(PlayerAdStartedEventData_t2822137282, ___RewardName_13)); }
	inline String_t* get_RewardName_13() const { return ___RewardName_13; }
	inline String_t** get_address_of_RewardName_13() { return &___RewardName_13; }
	inline void set_RewardName_13(String_t* value)
	{
		___RewardName_13 = value;
		Il2CppCodeGenWriteBarrier((&___RewardName_13), value);
	}

	inline static int32_t get_offset_of_AdUnit_14() { return static_cast<int32_t>(offsetof(PlayerAdStartedEventData_t2822137282, ___AdUnit_14)); }
	inline String_t* get_AdUnit_14() const { return ___AdUnit_14; }
	inline String_t** get_address_of_AdUnit_14() { return &___AdUnit_14; }
	inline void set_AdUnit_14(String_t* value)
	{
		___AdUnit_14 = value;
		Il2CppCodeGenWriteBarrier((&___AdUnit_14), value);
	}

	inline static int32_t get_offset_of_TitleId_15() { return static_cast<int32_t>(offsetof(PlayerAdStartedEventData_t2822137282, ___TitleId_15)); }
	inline String_t* get_TitleId_15() const { return ___TitleId_15; }
	inline String_t** get_address_of_TitleId_15() { return &___TitleId_15; }
	inline void set_TitleId_15(String_t* value)
	{
		___TitleId_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERADSTARTEDEVENTDATA_T2822137282_H
#ifndef PLAYERBANNEDEVENTDATA_T2607401603_H
#define PLAYERBANNEDEVENTDATA_T2607401603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerBannedEventData
struct  PlayerBannedEventData_t2607401603  : public PlayStreamEventBase_t710997429
{
public:
	// System.Nullable`1<System.DateTime> PlayFab.PlayStreamModels.PlayerBannedEventData::BanExpiration
	Nullable_1_t4223474148  ___BanExpiration_10;
	// System.Boolean PlayFab.PlayStreamModels.PlayerBannedEventData::PermanentBan
	bool ___PermanentBan_11;
	// System.String PlayFab.PlayStreamModels.PlayerBannedEventData::BanId
	String_t* ___BanId_12;
	// System.String PlayFab.PlayStreamModels.PlayerBannedEventData::BanReason
	String_t* ___BanReason_13;
	// System.String PlayFab.PlayStreamModels.PlayerBannedEventData::TitleId
	String_t* ___TitleId_14;

public:
	inline static int32_t get_offset_of_BanExpiration_10() { return static_cast<int32_t>(offsetof(PlayerBannedEventData_t2607401603, ___BanExpiration_10)); }
	inline Nullable_1_t4223474148  get_BanExpiration_10() const { return ___BanExpiration_10; }
	inline Nullable_1_t4223474148 * get_address_of_BanExpiration_10() { return &___BanExpiration_10; }
	inline void set_BanExpiration_10(Nullable_1_t4223474148  value)
	{
		___BanExpiration_10 = value;
	}

	inline static int32_t get_offset_of_PermanentBan_11() { return static_cast<int32_t>(offsetof(PlayerBannedEventData_t2607401603, ___PermanentBan_11)); }
	inline bool get_PermanentBan_11() const { return ___PermanentBan_11; }
	inline bool* get_address_of_PermanentBan_11() { return &___PermanentBan_11; }
	inline void set_PermanentBan_11(bool value)
	{
		___PermanentBan_11 = value;
	}

	inline static int32_t get_offset_of_BanId_12() { return static_cast<int32_t>(offsetof(PlayerBannedEventData_t2607401603, ___BanId_12)); }
	inline String_t* get_BanId_12() const { return ___BanId_12; }
	inline String_t** get_address_of_BanId_12() { return &___BanId_12; }
	inline void set_BanId_12(String_t* value)
	{
		___BanId_12 = value;
		Il2CppCodeGenWriteBarrier((&___BanId_12), value);
	}

	inline static int32_t get_offset_of_BanReason_13() { return static_cast<int32_t>(offsetof(PlayerBannedEventData_t2607401603, ___BanReason_13)); }
	inline String_t* get_BanReason_13() const { return ___BanReason_13; }
	inline String_t** get_address_of_BanReason_13() { return &___BanReason_13; }
	inline void set_BanReason_13(String_t* value)
	{
		___BanReason_13 = value;
		Il2CppCodeGenWriteBarrier((&___BanReason_13), value);
	}

	inline static int32_t get_offset_of_TitleId_14() { return static_cast<int32_t>(offsetof(PlayerBannedEventData_t2607401603, ___TitleId_14)); }
	inline String_t* get_TitleId_14() const { return ___TitleId_14; }
	inline String_t** get_address_of_TitleId_14() { return &___TitleId_14; }
	inline void set_TitleId_14(String_t* value)
	{
		___TitleId_14 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERBANNEDEVENTDATA_T2607401603_H
#ifndef PLAYERCHANGEDAVATAREVENTDATA_T1317131647_H
#define PLAYERCHANGEDAVATAREVENTDATA_T1317131647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerChangedAvatarEventData
struct  PlayerChangedAvatarEventData_t1317131647  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerChangedAvatarEventData::ImageUrl
	String_t* ___ImageUrl_10;
	// System.String PlayFab.PlayStreamModels.PlayerChangedAvatarEventData::PreviousImageUrl
	String_t* ___PreviousImageUrl_11;
	// System.String PlayFab.PlayStreamModels.PlayerChangedAvatarEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_ImageUrl_10() { return static_cast<int32_t>(offsetof(PlayerChangedAvatarEventData_t1317131647, ___ImageUrl_10)); }
	inline String_t* get_ImageUrl_10() const { return ___ImageUrl_10; }
	inline String_t** get_address_of_ImageUrl_10() { return &___ImageUrl_10; }
	inline void set_ImageUrl_10(String_t* value)
	{
		___ImageUrl_10 = value;
		Il2CppCodeGenWriteBarrier((&___ImageUrl_10), value);
	}

	inline static int32_t get_offset_of_PreviousImageUrl_11() { return static_cast<int32_t>(offsetof(PlayerChangedAvatarEventData_t1317131647, ___PreviousImageUrl_11)); }
	inline String_t* get_PreviousImageUrl_11() const { return ___PreviousImageUrl_11; }
	inline String_t** get_address_of_PreviousImageUrl_11() { return &___PreviousImageUrl_11; }
	inline void set_PreviousImageUrl_11(String_t* value)
	{
		___PreviousImageUrl_11 = value;
		Il2CppCodeGenWriteBarrier((&___PreviousImageUrl_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerChangedAvatarEventData_t1317131647, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCHANGEDAVATAREVENTDATA_T1317131647_H
#ifndef PLAYERCOMPLETEDPASSWORDRESETEVENTDATA_T1989099368_H
#define PLAYERCOMPLETEDPASSWORDRESETEVENTDATA_T1989099368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData
struct  PlayerCompletedPasswordResetEventData_t1989099368  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData::RecoveryEmailAddress
	String_t* ___RecoveryEmailAddress_10;
	// System.String PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData::PasswordResetId
	String_t* ___PasswordResetId_11;
	// System.String PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData::InitiatedFromIPAddress
	String_t* ___InitiatedFromIPAddress_12;
	// System.DateTime PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData::InitiationTimestamp
	DateTime_t1281661550  ___InitiationTimestamp_13;
	// System.Nullable`1<PlayFab.PlayStreamModels.PasswordResetInitiationSource> PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData::InitiatedBy
	Nullable_1_t2099192826  ___InitiatedBy_14;
	// System.DateTime PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData::LinkExpiration
	DateTime_t1281661550  ___LinkExpiration_15;
	// System.String PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData::CompletedFromIPAddress
	String_t* ___CompletedFromIPAddress_16;
	// System.DateTime PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData::CompletionTimestamp
	DateTime_t1281661550  ___CompletionTimestamp_17;
	// System.String PlayFab.PlayStreamModels.PlayerCompletedPasswordResetEventData::TitleId
	String_t* ___TitleId_18;

public:
	inline static int32_t get_offset_of_RecoveryEmailAddress_10() { return static_cast<int32_t>(offsetof(PlayerCompletedPasswordResetEventData_t1989099368, ___RecoveryEmailAddress_10)); }
	inline String_t* get_RecoveryEmailAddress_10() const { return ___RecoveryEmailAddress_10; }
	inline String_t** get_address_of_RecoveryEmailAddress_10() { return &___RecoveryEmailAddress_10; }
	inline void set_RecoveryEmailAddress_10(String_t* value)
	{
		___RecoveryEmailAddress_10 = value;
		Il2CppCodeGenWriteBarrier((&___RecoveryEmailAddress_10), value);
	}

	inline static int32_t get_offset_of_PasswordResetId_11() { return static_cast<int32_t>(offsetof(PlayerCompletedPasswordResetEventData_t1989099368, ___PasswordResetId_11)); }
	inline String_t* get_PasswordResetId_11() const { return ___PasswordResetId_11; }
	inline String_t** get_address_of_PasswordResetId_11() { return &___PasswordResetId_11; }
	inline void set_PasswordResetId_11(String_t* value)
	{
		___PasswordResetId_11 = value;
		Il2CppCodeGenWriteBarrier((&___PasswordResetId_11), value);
	}

	inline static int32_t get_offset_of_InitiatedFromIPAddress_12() { return static_cast<int32_t>(offsetof(PlayerCompletedPasswordResetEventData_t1989099368, ___InitiatedFromIPAddress_12)); }
	inline String_t* get_InitiatedFromIPAddress_12() const { return ___InitiatedFromIPAddress_12; }
	inline String_t** get_address_of_InitiatedFromIPAddress_12() { return &___InitiatedFromIPAddress_12; }
	inline void set_InitiatedFromIPAddress_12(String_t* value)
	{
		___InitiatedFromIPAddress_12 = value;
		Il2CppCodeGenWriteBarrier((&___InitiatedFromIPAddress_12), value);
	}

	inline static int32_t get_offset_of_InitiationTimestamp_13() { return static_cast<int32_t>(offsetof(PlayerCompletedPasswordResetEventData_t1989099368, ___InitiationTimestamp_13)); }
	inline DateTime_t1281661550  get_InitiationTimestamp_13() const { return ___InitiationTimestamp_13; }
	inline DateTime_t1281661550 * get_address_of_InitiationTimestamp_13() { return &___InitiationTimestamp_13; }
	inline void set_InitiationTimestamp_13(DateTime_t1281661550  value)
	{
		___InitiationTimestamp_13 = value;
	}

	inline static int32_t get_offset_of_InitiatedBy_14() { return static_cast<int32_t>(offsetof(PlayerCompletedPasswordResetEventData_t1989099368, ___InitiatedBy_14)); }
	inline Nullable_1_t2099192826  get_InitiatedBy_14() const { return ___InitiatedBy_14; }
	inline Nullable_1_t2099192826 * get_address_of_InitiatedBy_14() { return &___InitiatedBy_14; }
	inline void set_InitiatedBy_14(Nullable_1_t2099192826  value)
	{
		___InitiatedBy_14 = value;
	}

	inline static int32_t get_offset_of_LinkExpiration_15() { return static_cast<int32_t>(offsetof(PlayerCompletedPasswordResetEventData_t1989099368, ___LinkExpiration_15)); }
	inline DateTime_t1281661550  get_LinkExpiration_15() const { return ___LinkExpiration_15; }
	inline DateTime_t1281661550 * get_address_of_LinkExpiration_15() { return &___LinkExpiration_15; }
	inline void set_LinkExpiration_15(DateTime_t1281661550  value)
	{
		___LinkExpiration_15 = value;
	}

	inline static int32_t get_offset_of_CompletedFromIPAddress_16() { return static_cast<int32_t>(offsetof(PlayerCompletedPasswordResetEventData_t1989099368, ___CompletedFromIPAddress_16)); }
	inline String_t* get_CompletedFromIPAddress_16() const { return ___CompletedFromIPAddress_16; }
	inline String_t** get_address_of_CompletedFromIPAddress_16() { return &___CompletedFromIPAddress_16; }
	inline void set_CompletedFromIPAddress_16(String_t* value)
	{
		___CompletedFromIPAddress_16 = value;
		Il2CppCodeGenWriteBarrier((&___CompletedFromIPAddress_16), value);
	}

	inline static int32_t get_offset_of_CompletionTimestamp_17() { return static_cast<int32_t>(offsetof(PlayerCompletedPasswordResetEventData_t1989099368, ___CompletionTimestamp_17)); }
	inline DateTime_t1281661550  get_CompletionTimestamp_17() const { return ___CompletionTimestamp_17; }
	inline DateTime_t1281661550 * get_address_of_CompletionTimestamp_17() { return &___CompletionTimestamp_17; }
	inline void set_CompletionTimestamp_17(DateTime_t1281661550  value)
	{
		___CompletionTimestamp_17 = value;
	}

	inline static int32_t get_offset_of_TitleId_18() { return static_cast<int32_t>(offsetof(PlayerCompletedPasswordResetEventData_t1989099368, ___TitleId_18)); }
	inline String_t* get_TitleId_18() const { return ___TitleId_18; }
	inline String_t** get_address_of_TitleId_18() { return &___TitleId_18; }
	inline void set_TitleId_18(String_t* value)
	{
		___TitleId_18 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCOMPLETEDPASSWORDRESETEVENTDATA_T1989099368_H
#ifndef PLAYERCONSUMEDITEMEVENTDATA_T230557661_H
#define PLAYERCONSUMEDITEMEVENTDATA_T230557661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerConsumedItemEventData
struct  PlayerConsumedItemEventData_t230557661  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerConsumedItemEventData::ItemId
	String_t* ___ItemId_10;
	// System.String PlayFab.PlayStreamModels.PlayerConsumedItemEventData::CatalogVersion
	String_t* ___CatalogVersion_11;
	// System.String PlayFab.PlayStreamModels.PlayerConsumedItemEventData::ItemInstanceId
	String_t* ___ItemInstanceId_12;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerConsumedItemEventData::PreviousUsesRemaining
	uint32_t ___PreviousUsesRemaining_13;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerConsumedItemEventData::UsesRemaining
	uint32_t ___UsesRemaining_14;
	// System.String PlayFab.PlayStreamModels.PlayerConsumedItemEventData::TitleId
	String_t* ___TitleId_15;

public:
	inline static int32_t get_offset_of_ItemId_10() { return static_cast<int32_t>(offsetof(PlayerConsumedItemEventData_t230557661, ___ItemId_10)); }
	inline String_t* get_ItemId_10() const { return ___ItemId_10; }
	inline String_t** get_address_of_ItemId_10() { return &___ItemId_10; }
	inline void set_ItemId_10(String_t* value)
	{
		___ItemId_10 = value;
		Il2CppCodeGenWriteBarrier((&___ItemId_10), value);
	}

	inline static int32_t get_offset_of_CatalogVersion_11() { return static_cast<int32_t>(offsetof(PlayerConsumedItemEventData_t230557661, ___CatalogVersion_11)); }
	inline String_t* get_CatalogVersion_11() const { return ___CatalogVersion_11; }
	inline String_t** get_address_of_CatalogVersion_11() { return &___CatalogVersion_11; }
	inline void set_CatalogVersion_11(String_t* value)
	{
		___CatalogVersion_11 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_11), value);
	}

	inline static int32_t get_offset_of_ItemInstanceId_12() { return static_cast<int32_t>(offsetof(PlayerConsumedItemEventData_t230557661, ___ItemInstanceId_12)); }
	inline String_t* get_ItemInstanceId_12() const { return ___ItemInstanceId_12; }
	inline String_t** get_address_of_ItemInstanceId_12() { return &___ItemInstanceId_12; }
	inline void set_ItemInstanceId_12(String_t* value)
	{
		___ItemInstanceId_12 = value;
		Il2CppCodeGenWriteBarrier((&___ItemInstanceId_12), value);
	}

	inline static int32_t get_offset_of_PreviousUsesRemaining_13() { return static_cast<int32_t>(offsetof(PlayerConsumedItemEventData_t230557661, ___PreviousUsesRemaining_13)); }
	inline uint32_t get_PreviousUsesRemaining_13() const { return ___PreviousUsesRemaining_13; }
	inline uint32_t* get_address_of_PreviousUsesRemaining_13() { return &___PreviousUsesRemaining_13; }
	inline void set_PreviousUsesRemaining_13(uint32_t value)
	{
		___PreviousUsesRemaining_13 = value;
	}

	inline static int32_t get_offset_of_UsesRemaining_14() { return static_cast<int32_t>(offsetof(PlayerConsumedItemEventData_t230557661, ___UsesRemaining_14)); }
	inline uint32_t get_UsesRemaining_14() const { return ___UsesRemaining_14; }
	inline uint32_t* get_address_of_UsesRemaining_14() { return &___UsesRemaining_14; }
	inline void set_UsesRemaining_14(uint32_t value)
	{
		___UsesRemaining_14 = value;
	}

	inline static int32_t get_offset_of_TitleId_15() { return static_cast<int32_t>(offsetof(PlayerConsumedItemEventData_t230557661, ___TitleId_15)); }
	inline String_t* get_TitleId_15() const { return ___TitleId_15; }
	inline String_t** get_address_of_TitleId_15() { return &___TitleId_15; }
	inline void set_TitleId_15(String_t* value)
	{
		___TitleId_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONSUMEDITEMEVENTDATA_T230557661_H
#ifndef PLAYERCREATEDEVENTDATA_T2351616928_H
#define PLAYERCREATEDEVENTDATA_T2351616928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerCreatedEventData
struct  PlayerCreatedEventData_t2351616928  : public PlayStreamEventBase_t710997429
{
public:
	// System.DateTime PlayFab.PlayStreamModels.PlayerCreatedEventData::Created
	DateTime_t1281661550  ___Created_10;
	// System.String PlayFab.PlayStreamModels.PlayerCreatedEventData::PublisherId
	String_t* ___PublisherId_11;
	// System.String PlayFab.PlayStreamModels.PlayerCreatedEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_Created_10() { return static_cast<int32_t>(offsetof(PlayerCreatedEventData_t2351616928, ___Created_10)); }
	inline DateTime_t1281661550  get_Created_10() const { return ___Created_10; }
	inline DateTime_t1281661550 * get_address_of_Created_10() { return &___Created_10; }
	inline void set_Created_10(DateTime_t1281661550  value)
	{
		___Created_10 = value;
	}

	inline static int32_t get_offset_of_PublisherId_11() { return static_cast<int32_t>(offsetof(PlayerCreatedEventData_t2351616928, ___PublisherId_11)); }
	inline String_t* get_PublisherId_11() const { return ___PublisherId_11; }
	inline String_t** get_address_of_PublisherId_11() { return &___PublisherId_11; }
	inline void set_PublisherId_11(String_t* value)
	{
		___PublisherId_11 = value;
		Il2CppCodeGenWriteBarrier((&___PublisherId_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerCreatedEventData_t2351616928, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCREATEDEVENTDATA_T2351616928_H
#ifndef PLAYERADREWARDVALUEDEVENTDATA_T680421006_H
#define PLAYERADREWARDVALUEDEVENTDATA_T680421006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerAdRewardValuedEventData
struct  PlayerAdRewardValuedEventData_t680421006  : public PlayStreamEventBase_t710997429
{
public:
	// System.Double PlayFab.PlayStreamModels.PlayerAdRewardValuedEventData::RevenueShare
	double ___RevenueShare_10;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardValuedEventData::AdPlacementId
	String_t* ___AdPlacementId_11;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardValuedEventData::AdPlacementName
	String_t* ___AdPlacementName_12;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardValuedEventData::RewardId
	String_t* ___RewardId_13;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardValuedEventData::RewardName
	String_t* ___RewardName_14;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardValuedEventData::AdUnit
	String_t* ___AdUnit_15;
	// System.String PlayFab.PlayStreamModels.PlayerAdRewardValuedEventData::TitleId
	String_t* ___TitleId_16;

public:
	inline static int32_t get_offset_of_RevenueShare_10() { return static_cast<int32_t>(offsetof(PlayerAdRewardValuedEventData_t680421006, ___RevenueShare_10)); }
	inline double get_RevenueShare_10() const { return ___RevenueShare_10; }
	inline double* get_address_of_RevenueShare_10() { return &___RevenueShare_10; }
	inline void set_RevenueShare_10(double value)
	{
		___RevenueShare_10 = value;
	}

	inline static int32_t get_offset_of_AdPlacementId_11() { return static_cast<int32_t>(offsetof(PlayerAdRewardValuedEventData_t680421006, ___AdPlacementId_11)); }
	inline String_t* get_AdPlacementId_11() const { return ___AdPlacementId_11; }
	inline String_t** get_address_of_AdPlacementId_11() { return &___AdPlacementId_11; }
	inline void set_AdPlacementId_11(String_t* value)
	{
		___AdPlacementId_11 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementId_11), value);
	}

	inline static int32_t get_offset_of_AdPlacementName_12() { return static_cast<int32_t>(offsetof(PlayerAdRewardValuedEventData_t680421006, ___AdPlacementName_12)); }
	inline String_t* get_AdPlacementName_12() const { return ___AdPlacementName_12; }
	inline String_t** get_address_of_AdPlacementName_12() { return &___AdPlacementName_12; }
	inline void set_AdPlacementName_12(String_t* value)
	{
		___AdPlacementName_12 = value;
		Il2CppCodeGenWriteBarrier((&___AdPlacementName_12), value);
	}

	inline static int32_t get_offset_of_RewardId_13() { return static_cast<int32_t>(offsetof(PlayerAdRewardValuedEventData_t680421006, ___RewardId_13)); }
	inline String_t* get_RewardId_13() const { return ___RewardId_13; }
	inline String_t** get_address_of_RewardId_13() { return &___RewardId_13; }
	inline void set_RewardId_13(String_t* value)
	{
		___RewardId_13 = value;
		Il2CppCodeGenWriteBarrier((&___RewardId_13), value);
	}

	inline static int32_t get_offset_of_RewardName_14() { return static_cast<int32_t>(offsetof(PlayerAdRewardValuedEventData_t680421006, ___RewardName_14)); }
	inline String_t* get_RewardName_14() const { return ___RewardName_14; }
	inline String_t** get_address_of_RewardName_14() { return &___RewardName_14; }
	inline void set_RewardName_14(String_t* value)
	{
		___RewardName_14 = value;
		Il2CppCodeGenWriteBarrier((&___RewardName_14), value);
	}

	inline static int32_t get_offset_of_AdUnit_15() { return static_cast<int32_t>(offsetof(PlayerAdRewardValuedEventData_t680421006, ___AdUnit_15)); }
	inline String_t* get_AdUnit_15() const { return ___AdUnit_15; }
	inline String_t** get_address_of_AdUnit_15() { return &___AdUnit_15; }
	inline void set_AdUnit_15(String_t* value)
	{
		___AdUnit_15 = value;
		Il2CppCodeGenWriteBarrier((&___AdUnit_15), value);
	}

	inline static int32_t get_offset_of_TitleId_16() { return static_cast<int32_t>(offsetof(PlayerAdRewardValuedEventData_t680421006, ___TitleId_16)); }
	inline String_t* get_TitleId_16() const { return ___TitleId_16; }
	inline String_t** get_address_of_TitleId_16() { return &___TitleId_16; }
	inline void set_TitleId_16(String_t* value)
	{
		___TitleId_16 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERADREWARDVALUEDEVENTDATA_T680421006_H
#ifndef TITLESCHEDULEDCLOUDSCRIPTEXECUTEDEVENTDATA_T1721888798_H
#define TITLESCHEDULEDCLOUDSCRIPTEXECUTEDEVENTDATA_T1721888798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleScheduledCloudScriptExecutedEventData
struct  TitleScheduledCloudScriptExecutedEventData_t1721888798  : public PlayStreamEventBase_t710997429
{
public:
	// PlayFab.PlayStreamModels.NameId PlayFab.PlayStreamModels.TitleScheduledCloudScriptExecutedEventData::ScheduledTask
	NameId_t2777016614 * ___ScheduledTask_10;
	// System.String PlayFab.PlayStreamModels.TitleScheduledCloudScriptExecutedEventData::FunctionName
	String_t* ___FunctionName_11;
	// PlayFab.PlayStreamModels.ExecuteCloudScriptResult PlayFab.PlayStreamModels.TitleScheduledCloudScriptExecutedEventData::CloudScriptExecutionResult
	ExecuteCloudScriptResult_t4017463769 * ___CloudScriptExecutionResult_12;

public:
	inline static int32_t get_offset_of_ScheduledTask_10() { return static_cast<int32_t>(offsetof(TitleScheduledCloudScriptExecutedEventData_t1721888798, ___ScheduledTask_10)); }
	inline NameId_t2777016614 * get_ScheduledTask_10() const { return ___ScheduledTask_10; }
	inline NameId_t2777016614 ** get_address_of_ScheduledTask_10() { return &___ScheduledTask_10; }
	inline void set_ScheduledTask_10(NameId_t2777016614 * value)
	{
		___ScheduledTask_10 = value;
		Il2CppCodeGenWriteBarrier((&___ScheduledTask_10), value);
	}

	inline static int32_t get_offset_of_FunctionName_11() { return static_cast<int32_t>(offsetof(TitleScheduledCloudScriptExecutedEventData_t1721888798, ___FunctionName_11)); }
	inline String_t* get_FunctionName_11() const { return ___FunctionName_11; }
	inline String_t** get_address_of_FunctionName_11() { return &___FunctionName_11; }
	inline void set_FunctionName_11(String_t* value)
	{
		___FunctionName_11 = value;
		Il2CppCodeGenWriteBarrier((&___FunctionName_11), value);
	}

	inline static int32_t get_offset_of_CloudScriptExecutionResult_12() { return static_cast<int32_t>(offsetof(TitleScheduledCloudScriptExecutedEventData_t1721888798, ___CloudScriptExecutionResult_12)); }
	inline ExecuteCloudScriptResult_t4017463769 * get_CloudScriptExecutionResult_12() const { return ___CloudScriptExecutionResult_12; }
	inline ExecuteCloudScriptResult_t4017463769 ** get_address_of_CloudScriptExecutionResult_12() { return &___CloudScriptExecutionResult_12; }
	inline void set_CloudScriptExecutionResult_12(ExecuteCloudScriptResult_t4017463769 * value)
	{
		___CloudScriptExecutionResult_12 = value;
		Il2CppCodeGenWriteBarrier((&___CloudScriptExecutionResult_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLESCHEDULEDCLOUDSCRIPTEXECUTEDEVENTDATA_T1721888798_H
#ifndef PLAYERSTATISTICDELETEDEVENTDATA_T1354481889_H
#define PLAYERSTATISTICDELETEDEVENTDATA_T1354481889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerStatisticDeletedEventData
struct  PlayerStatisticDeletedEventData_t1354481889  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerStatisticDeletedEventData::StatisticName
	String_t* ___StatisticName_10;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerStatisticDeletedEventData::StatisticId
	uint32_t ___StatisticId_11;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerStatisticDeletedEventData::Version
	uint32_t ___Version_12;
	// System.Nullable`1<System.Int32> PlayFab.PlayStreamModels.PlayerStatisticDeletedEventData::StatisticPreviousValue
	Nullable_1_t3386535404  ___StatisticPreviousValue_13;
	// System.String PlayFab.PlayStreamModels.PlayerStatisticDeletedEventData::TitleId
	String_t* ___TitleId_14;

public:
	inline static int32_t get_offset_of_StatisticName_10() { return static_cast<int32_t>(offsetof(PlayerStatisticDeletedEventData_t1354481889, ___StatisticName_10)); }
	inline String_t* get_StatisticName_10() const { return ___StatisticName_10; }
	inline String_t** get_address_of_StatisticName_10() { return &___StatisticName_10; }
	inline void set_StatisticName_10(String_t* value)
	{
		___StatisticName_10 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticName_10), value);
	}

	inline static int32_t get_offset_of_StatisticId_11() { return static_cast<int32_t>(offsetof(PlayerStatisticDeletedEventData_t1354481889, ___StatisticId_11)); }
	inline uint32_t get_StatisticId_11() const { return ___StatisticId_11; }
	inline uint32_t* get_address_of_StatisticId_11() { return &___StatisticId_11; }
	inline void set_StatisticId_11(uint32_t value)
	{
		___StatisticId_11 = value;
	}

	inline static int32_t get_offset_of_Version_12() { return static_cast<int32_t>(offsetof(PlayerStatisticDeletedEventData_t1354481889, ___Version_12)); }
	inline uint32_t get_Version_12() const { return ___Version_12; }
	inline uint32_t* get_address_of_Version_12() { return &___Version_12; }
	inline void set_Version_12(uint32_t value)
	{
		___Version_12 = value;
	}

	inline static int32_t get_offset_of_StatisticPreviousValue_13() { return static_cast<int32_t>(offsetof(PlayerStatisticDeletedEventData_t1354481889, ___StatisticPreviousValue_13)); }
	inline Nullable_1_t3386535404  get_StatisticPreviousValue_13() const { return ___StatisticPreviousValue_13; }
	inline Nullable_1_t3386535404 * get_address_of_StatisticPreviousValue_13() { return &___StatisticPreviousValue_13; }
	inline void set_StatisticPreviousValue_13(Nullable_1_t3386535404  value)
	{
		___StatisticPreviousValue_13 = value;
	}

	inline static int32_t get_offset_of_TitleId_14() { return static_cast<int32_t>(offsetof(PlayerStatisticDeletedEventData_t1354481889, ___TitleId_14)); }
	inline String_t* get_TitleId_14() const { return ___TitleId_14; }
	inline String_t** get_address_of_TitleId_14() { return &___TitleId_14; }
	inline void set_TitleId_14(String_t* value)
	{
		___TitleId_14 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSTATISTICDELETEDEVENTDATA_T1354481889_H
#ifndef PLAYERTAGREMOVEDEVENTDATA_T4070892819_H
#define PLAYERTAGREMOVEDEVENTDATA_T4070892819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerTagRemovedEventData
struct  PlayerTagRemovedEventData_t4070892819  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerTagRemovedEventData::TagName
	String_t* ___TagName_10;
	// System.String PlayFab.PlayStreamModels.PlayerTagRemovedEventData::Namespace
	String_t* ___Namespace_11;
	// System.String PlayFab.PlayStreamModels.PlayerTagRemovedEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_TagName_10() { return static_cast<int32_t>(offsetof(PlayerTagRemovedEventData_t4070892819, ___TagName_10)); }
	inline String_t* get_TagName_10() const { return ___TagName_10; }
	inline String_t** get_address_of_TagName_10() { return &___TagName_10; }
	inline void set_TagName_10(String_t* value)
	{
		___TagName_10 = value;
		Il2CppCodeGenWriteBarrier((&___TagName_10), value);
	}

	inline static int32_t get_offset_of_Namespace_11() { return static_cast<int32_t>(offsetof(PlayerTagRemovedEventData_t4070892819, ___Namespace_11)); }
	inline String_t* get_Namespace_11() const { return ___Namespace_11; }
	inline String_t** get_address_of_Namespace_11() { return &___Namespace_11; }
	inline void set_Namespace_11(String_t* value)
	{
		___Namespace_11 = value;
		Il2CppCodeGenWriteBarrier((&___Namespace_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerTagRemovedEventData_t4070892819, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERTAGREMOVEDEVENTDATA_T4070892819_H
#ifndef TITLEPUBLISHEDCLOUDSCRIPTEVENTDATA_T4204108721_H
#define TITLEPUBLISHEDCLOUDSCRIPTEVENTDATA_T4204108721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitlePublishedCloudScriptEventData
struct  TitlePublishedCloudScriptEventData_t4204108721  : public PlayStreamEventBase_t710997429
{
public:
	// System.Int32 PlayFab.PlayStreamModels.TitlePublishedCloudScriptEventData::Revision
	int32_t ___Revision_10;
	// System.String PlayFab.PlayStreamModels.TitlePublishedCloudScriptEventData::UserId
	String_t* ___UserId_11;
	// System.String PlayFab.PlayStreamModels.TitlePublishedCloudScriptEventData::DeveloperId
	String_t* ___DeveloperId_12;

public:
	inline static int32_t get_offset_of_Revision_10() { return static_cast<int32_t>(offsetof(TitlePublishedCloudScriptEventData_t4204108721, ___Revision_10)); }
	inline int32_t get_Revision_10() const { return ___Revision_10; }
	inline int32_t* get_address_of_Revision_10() { return &___Revision_10; }
	inline void set_Revision_10(int32_t value)
	{
		___Revision_10 = value;
	}

	inline static int32_t get_offset_of_UserId_11() { return static_cast<int32_t>(offsetof(TitlePublishedCloudScriptEventData_t4204108721, ___UserId_11)); }
	inline String_t* get_UserId_11() const { return ___UserId_11; }
	inline String_t** get_address_of_UserId_11() { return &___UserId_11; }
	inline void set_UserId_11(String_t* value)
	{
		___UserId_11 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_11), value);
	}

	inline static int32_t get_offset_of_DeveloperId_12() { return static_cast<int32_t>(offsetof(TitlePublishedCloudScriptEventData_t4204108721, ___DeveloperId_12)); }
	inline String_t* get_DeveloperId_12() const { return ___DeveloperId_12; }
	inline String_t** get_address_of_DeveloperId_12() { return &___DeveloperId_12; }
	inline void set_DeveloperId_12(String_t* value)
	{
		___DeveloperId_12 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEPUBLISHEDCLOUDSCRIPTEVENTDATA_T4204108721_H
#ifndef TITLEPROFILEVIEWCONSTRAINTSCHANGEDEVENTDATA_T2737047_H
#define TITLEPROFILEVIEWCONSTRAINTSCHANGEDEVENTDATA_T2737047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleProfileViewConstraintsChangedEventData
struct  TitleProfileViewConstraintsChangedEventData_t2737047  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.TitleProfileViewConstraintsChangedEventData::ProfileType
	String_t* ___ProfileType_10;
	// System.String PlayFab.PlayStreamModels.TitleProfileViewConstraintsChangedEventData::PreviousProfileViewConstraints
	String_t* ___PreviousProfileViewConstraints_11;
	// System.String PlayFab.PlayStreamModels.TitleProfileViewConstraintsChangedEventData::ProfileViewConstraints
	String_t* ___ProfileViewConstraints_12;
	// System.String PlayFab.PlayStreamModels.TitleProfileViewConstraintsChangedEventData::UserId
	String_t* ___UserId_13;
	// System.String PlayFab.PlayStreamModels.TitleProfileViewConstraintsChangedEventData::DeveloperId
	String_t* ___DeveloperId_14;

public:
	inline static int32_t get_offset_of_ProfileType_10() { return static_cast<int32_t>(offsetof(TitleProfileViewConstraintsChangedEventData_t2737047, ___ProfileType_10)); }
	inline String_t* get_ProfileType_10() const { return ___ProfileType_10; }
	inline String_t** get_address_of_ProfileType_10() { return &___ProfileType_10; }
	inline void set_ProfileType_10(String_t* value)
	{
		___ProfileType_10 = value;
		Il2CppCodeGenWriteBarrier((&___ProfileType_10), value);
	}

	inline static int32_t get_offset_of_PreviousProfileViewConstraints_11() { return static_cast<int32_t>(offsetof(TitleProfileViewConstraintsChangedEventData_t2737047, ___PreviousProfileViewConstraints_11)); }
	inline String_t* get_PreviousProfileViewConstraints_11() const { return ___PreviousProfileViewConstraints_11; }
	inline String_t** get_address_of_PreviousProfileViewConstraints_11() { return &___PreviousProfileViewConstraints_11; }
	inline void set_PreviousProfileViewConstraints_11(String_t* value)
	{
		___PreviousProfileViewConstraints_11 = value;
		Il2CppCodeGenWriteBarrier((&___PreviousProfileViewConstraints_11), value);
	}

	inline static int32_t get_offset_of_ProfileViewConstraints_12() { return static_cast<int32_t>(offsetof(TitleProfileViewConstraintsChangedEventData_t2737047, ___ProfileViewConstraints_12)); }
	inline String_t* get_ProfileViewConstraints_12() const { return ___ProfileViewConstraints_12; }
	inline String_t** get_address_of_ProfileViewConstraints_12() { return &___ProfileViewConstraints_12; }
	inline void set_ProfileViewConstraints_12(String_t* value)
	{
		___ProfileViewConstraints_12 = value;
		Il2CppCodeGenWriteBarrier((&___ProfileViewConstraints_12), value);
	}

	inline static int32_t get_offset_of_UserId_13() { return static_cast<int32_t>(offsetof(TitleProfileViewConstraintsChangedEventData_t2737047, ___UserId_13)); }
	inline String_t* get_UserId_13() const { return ___UserId_13; }
	inline String_t** get_address_of_UserId_13() { return &___UserId_13; }
	inline void set_UserId_13(String_t* value)
	{
		___UserId_13 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_13), value);
	}

	inline static int32_t get_offset_of_DeveloperId_14() { return static_cast<int32_t>(offsetof(TitleProfileViewConstraintsChangedEventData_t2737047, ___DeveloperId_14)); }
	inline String_t* get_DeveloperId_14() const { return ___DeveloperId_14; }
	inline String_t** get_address_of_DeveloperId_14() { return &___DeveloperId_14; }
	inline void set_DeveloperId_14(String_t* value)
	{
		___DeveloperId_14 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEPROFILEVIEWCONSTRAINTSCHANGEDEVENTDATA_T2737047_H
#ifndef TITLEPERMISSIONSPOLICYCHANGEDEVENTDATA_T1650765699_H
#define TITLEPERMISSIONSPOLICYCHANGEDEVENTDATA_T1650765699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitlePermissionsPolicyChangedEventData
struct  TitlePermissionsPolicyChangedEventData_t1650765699  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.TitlePermissionsPolicyChangedEventData::PolicyName
	String_t* ___PolicyName_10;
	// System.String PlayFab.PlayStreamModels.TitlePermissionsPolicyChangedEventData::NewPolicy
	String_t* ___NewPolicy_11;
	// System.String PlayFab.PlayStreamModels.TitlePermissionsPolicyChangedEventData::UserId
	String_t* ___UserId_12;
	// System.String PlayFab.PlayStreamModels.TitlePermissionsPolicyChangedEventData::DeveloperId
	String_t* ___DeveloperId_13;

public:
	inline static int32_t get_offset_of_PolicyName_10() { return static_cast<int32_t>(offsetof(TitlePermissionsPolicyChangedEventData_t1650765699, ___PolicyName_10)); }
	inline String_t* get_PolicyName_10() const { return ___PolicyName_10; }
	inline String_t** get_address_of_PolicyName_10() { return &___PolicyName_10; }
	inline void set_PolicyName_10(String_t* value)
	{
		___PolicyName_10 = value;
		Il2CppCodeGenWriteBarrier((&___PolicyName_10), value);
	}

	inline static int32_t get_offset_of_NewPolicy_11() { return static_cast<int32_t>(offsetof(TitlePermissionsPolicyChangedEventData_t1650765699, ___NewPolicy_11)); }
	inline String_t* get_NewPolicy_11() const { return ___NewPolicy_11; }
	inline String_t** get_address_of_NewPolicy_11() { return &___NewPolicy_11; }
	inline void set_NewPolicy_11(String_t* value)
	{
		___NewPolicy_11 = value;
		Il2CppCodeGenWriteBarrier((&___NewPolicy_11), value);
	}

	inline static int32_t get_offset_of_UserId_12() { return static_cast<int32_t>(offsetof(TitlePermissionsPolicyChangedEventData_t1650765699, ___UserId_12)); }
	inline String_t* get_UserId_12() const { return ___UserId_12; }
	inline String_t** get_address_of_UserId_12() { return &___UserId_12; }
	inline void set_UserId_12(String_t* value)
	{
		___UserId_12 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_12), value);
	}

	inline static int32_t get_offset_of_DeveloperId_13() { return static_cast<int32_t>(offsetof(TitlePermissionsPolicyChangedEventData_t1650765699, ___DeveloperId_13)); }
	inline String_t* get_DeveloperId_13() const { return ___DeveloperId_13; }
	inline String_t** get_address_of_DeveloperId_13() { return &___DeveloperId_13; }
	inline void set_DeveloperId_13(String_t* value)
	{
		___DeveloperId_13 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEPERMISSIONSPOLICYCHANGEDEVENTDATA_T1650765699_H
#ifndef TITLENEWSUPDATEDEVENTDATA_T1774219510_H
#define TITLENEWSUPDATEDEVENTDATA_T1774219510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleNewsUpdatedEventData
struct  TitleNewsUpdatedEventData_t1774219510  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.TitleNewsUpdatedEventData::NewsId
	String_t* ___NewsId_10;
	// System.String PlayFab.PlayStreamModels.TitleNewsUpdatedEventData::NewsTitle
	String_t* ___NewsTitle_11;
	// System.DateTime PlayFab.PlayStreamModels.TitleNewsUpdatedEventData::DateCreated
	DateTime_t1281661550  ___DateCreated_12;
	// System.Nullable`1<PlayFab.PlayStreamModels.NewsStatus> PlayFab.PlayStreamModels.TitleNewsUpdatedEventData::Status
	Nullable_1_t340296481  ___Status_13;

public:
	inline static int32_t get_offset_of_NewsId_10() { return static_cast<int32_t>(offsetof(TitleNewsUpdatedEventData_t1774219510, ___NewsId_10)); }
	inline String_t* get_NewsId_10() const { return ___NewsId_10; }
	inline String_t** get_address_of_NewsId_10() { return &___NewsId_10; }
	inline void set_NewsId_10(String_t* value)
	{
		___NewsId_10 = value;
		Il2CppCodeGenWriteBarrier((&___NewsId_10), value);
	}

	inline static int32_t get_offset_of_NewsTitle_11() { return static_cast<int32_t>(offsetof(TitleNewsUpdatedEventData_t1774219510, ___NewsTitle_11)); }
	inline String_t* get_NewsTitle_11() const { return ___NewsTitle_11; }
	inline String_t** get_address_of_NewsTitle_11() { return &___NewsTitle_11; }
	inline void set_NewsTitle_11(String_t* value)
	{
		___NewsTitle_11 = value;
		Il2CppCodeGenWriteBarrier((&___NewsTitle_11), value);
	}

	inline static int32_t get_offset_of_DateCreated_12() { return static_cast<int32_t>(offsetof(TitleNewsUpdatedEventData_t1774219510, ___DateCreated_12)); }
	inline DateTime_t1281661550  get_DateCreated_12() const { return ___DateCreated_12; }
	inline DateTime_t1281661550 * get_address_of_DateCreated_12() { return &___DateCreated_12; }
	inline void set_DateCreated_12(DateTime_t1281661550  value)
	{
		___DateCreated_12 = value;
	}

	inline static int32_t get_offset_of_Status_13() { return static_cast<int32_t>(offsetof(TitleNewsUpdatedEventData_t1774219510, ___Status_13)); }
	inline Nullable_1_t340296481  get_Status_13() const { return ___Status_13; }
	inline Nullable_1_t340296481 * get_address_of_Status_13() { return &___Status_13; }
	inline void set_Status_13(Nullable_1_t340296481  value)
	{
		___Status_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLENEWSUPDATEDEVENTDATA_T1774219510_H
#ifndef TITLEMODIFIEDGAMEBUILDEVENTDATA_T615280322_H
#define TITLEMODIFIEDGAMEBUILDEVENTDATA_T615280322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleModifiedGameBuildEventData
struct  TitleModifiedGameBuildEventData_t615280322  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.TitleModifiedGameBuildEventData::BuildId
	String_t* ___BuildId_10;
	// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.Region> PlayFab.PlayStreamModels.TitleModifiedGameBuildEventData::Regions
	List_1_t4105128198 * ___Regions_11;
	// System.Int32 PlayFab.PlayStreamModels.TitleModifiedGameBuildEventData::MinFreeGameSlots
	int32_t ___MinFreeGameSlots_12;
	// System.Int32 PlayFab.PlayStreamModels.TitleModifiedGameBuildEventData::MaxGamesPerHost
	int32_t ___MaxGamesPerHost_13;
	// System.String PlayFab.PlayStreamModels.TitleModifiedGameBuildEventData::UserId
	String_t* ___UserId_14;
	// System.String PlayFab.PlayStreamModels.TitleModifiedGameBuildEventData::DeveloperId
	String_t* ___DeveloperId_15;

public:
	inline static int32_t get_offset_of_BuildId_10() { return static_cast<int32_t>(offsetof(TitleModifiedGameBuildEventData_t615280322, ___BuildId_10)); }
	inline String_t* get_BuildId_10() const { return ___BuildId_10; }
	inline String_t** get_address_of_BuildId_10() { return &___BuildId_10; }
	inline void set_BuildId_10(String_t* value)
	{
		___BuildId_10 = value;
		Il2CppCodeGenWriteBarrier((&___BuildId_10), value);
	}

	inline static int32_t get_offset_of_Regions_11() { return static_cast<int32_t>(offsetof(TitleModifiedGameBuildEventData_t615280322, ___Regions_11)); }
	inline List_1_t4105128198 * get_Regions_11() const { return ___Regions_11; }
	inline List_1_t4105128198 ** get_address_of_Regions_11() { return &___Regions_11; }
	inline void set_Regions_11(List_1_t4105128198 * value)
	{
		___Regions_11 = value;
		Il2CppCodeGenWriteBarrier((&___Regions_11), value);
	}

	inline static int32_t get_offset_of_MinFreeGameSlots_12() { return static_cast<int32_t>(offsetof(TitleModifiedGameBuildEventData_t615280322, ___MinFreeGameSlots_12)); }
	inline int32_t get_MinFreeGameSlots_12() const { return ___MinFreeGameSlots_12; }
	inline int32_t* get_address_of_MinFreeGameSlots_12() { return &___MinFreeGameSlots_12; }
	inline void set_MinFreeGameSlots_12(int32_t value)
	{
		___MinFreeGameSlots_12 = value;
	}

	inline static int32_t get_offset_of_MaxGamesPerHost_13() { return static_cast<int32_t>(offsetof(TitleModifiedGameBuildEventData_t615280322, ___MaxGamesPerHost_13)); }
	inline int32_t get_MaxGamesPerHost_13() const { return ___MaxGamesPerHost_13; }
	inline int32_t* get_address_of_MaxGamesPerHost_13() { return &___MaxGamesPerHost_13; }
	inline void set_MaxGamesPerHost_13(int32_t value)
	{
		___MaxGamesPerHost_13 = value;
	}

	inline static int32_t get_offset_of_UserId_14() { return static_cast<int32_t>(offsetof(TitleModifiedGameBuildEventData_t615280322, ___UserId_14)); }
	inline String_t* get_UserId_14() const { return ___UserId_14; }
	inline String_t** get_address_of_UserId_14() { return &___UserId_14; }
	inline void set_UserId_14(String_t* value)
	{
		___UserId_14 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_14), value);
	}

	inline static int32_t get_offset_of_DeveloperId_15() { return static_cast<int32_t>(offsetof(TitleModifiedGameBuildEventData_t615280322, ___DeveloperId_15)); }
	inline String_t* get_DeveloperId_15() const { return ___DeveloperId_15; }
	inline String_t** get_address_of_DeveloperId_15() { return &___DeveloperId_15; }
	inline void set_DeveloperId_15(String_t* value)
	{
		___DeveloperId_15 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEMODIFIEDGAMEBUILDEVENTDATA_T615280322_H
#ifndef TITLELIMITCHANGEDEVENTDATA_T198395271_H
#define TITLELIMITCHANGEDEVENTDATA_T198395271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleLimitChangedEventData
struct  TitleLimitChangedEventData_t198395271  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.TitleLimitChangedEventData::LimitId
	String_t* ___LimitId_10;
	// System.String PlayFab.PlayStreamModels.TitleLimitChangedEventData::LimitDisplayName
	String_t* ___LimitDisplayName_11;
	// System.Nullable`1<PlayFab.PlayStreamModels.MetricUnit> PlayFab.PlayStreamModels.TitleLimitChangedEventData::Unit
	Nullable_1_t4276494596  ___Unit_12;
	// System.String PlayFab.PlayStreamModels.TitleLimitChangedEventData::TransactionId
	String_t* ___TransactionId_13;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.TitleLimitChangedEventData::PreviousPriceUSD
	Nullable_1_t53833054  ___PreviousPriceUSD_14;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.TitleLimitChangedEventData::PreviousValue
	Nullable_1_t53833054  ___PreviousValue_15;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.TitleLimitChangedEventData::PriceUSD
	Nullable_1_t53833054  ___PriceUSD_16;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.TitleLimitChangedEventData::Value
	Nullable_1_t53833054  ___Value_17;

public:
	inline static int32_t get_offset_of_LimitId_10() { return static_cast<int32_t>(offsetof(TitleLimitChangedEventData_t198395271, ___LimitId_10)); }
	inline String_t* get_LimitId_10() const { return ___LimitId_10; }
	inline String_t** get_address_of_LimitId_10() { return &___LimitId_10; }
	inline void set_LimitId_10(String_t* value)
	{
		___LimitId_10 = value;
		Il2CppCodeGenWriteBarrier((&___LimitId_10), value);
	}

	inline static int32_t get_offset_of_LimitDisplayName_11() { return static_cast<int32_t>(offsetof(TitleLimitChangedEventData_t198395271, ___LimitDisplayName_11)); }
	inline String_t* get_LimitDisplayName_11() const { return ___LimitDisplayName_11; }
	inline String_t** get_address_of_LimitDisplayName_11() { return &___LimitDisplayName_11; }
	inline void set_LimitDisplayName_11(String_t* value)
	{
		___LimitDisplayName_11 = value;
		Il2CppCodeGenWriteBarrier((&___LimitDisplayName_11), value);
	}

	inline static int32_t get_offset_of_Unit_12() { return static_cast<int32_t>(offsetof(TitleLimitChangedEventData_t198395271, ___Unit_12)); }
	inline Nullable_1_t4276494596  get_Unit_12() const { return ___Unit_12; }
	inline Nullable_1_t4276494596 * get_address_of_Unit_12() { return &___Unit_12; }
	inline void set_Unit_12(Nullable_1_t4276494596  value)
	{
		___Unit_12 = value;
	}

	inline static int32_t get_offset_of_TransactionId_13() { return static_cast<int32_t>(offsetof(TitleLimitChangedEventData_t198395271, ___TransactionId_13)); }
	inline String_t* get_TransactionId_13() const { return ___TransactionId_13; }
	inline String_t** get_address_of_TransactionId_13() { return &___TransactionId_13; }
	inline void set_TransactionId_13(String_t* value)
	{
		___TransactionId_13 = value;
		Il2CppCodeGenWriteBarrier((&___TransactionId_13), value);
	}

	inline static int32_t get_offset_of_PreviousPriceUSD_14() { return static_cast<int32_t>(offsetof(TitleLimitChangedEventData_t198395271, ___PreviousPriceUSD_14)); }
	inline Nullable_1_t53833054  get_PreviousPriceUSD_14() const { return ___PreviousPriceUSD_14; }
	inline Nullable_1_t53833054 * get_address_of_PreviousPriceUSD_14() { return &___PreviousPriceUSD_14; }
	inline void set_PreviousPriceUSD_14(Nullable_1_t53833054  value)
	{
		___PreviousPriceUSD_14 = value;
	}

	inline static int32_t get_offset_of_PreviousValue_15() { return static_cast<int32_t>(offsetof(TitleLimitChangedEventData_t198395271, ___PreviousValue_15)); }
	inline Nullable_1_t53833054  get_PreviousValue_15() const { return ___PreviousValue_15; }
	inline Nullable_1_t53833054 * get_address_of_PreviousValue_15() { return &___PreviousValue_15; }
	inline void set_PreviousValue_15(Nullable_1_t53833054  value)
	{
		___PreviousValue_15 = value;
	}

	inline static int32_t get_offset_of_PriceUSD_16() { return static_cast<int32_t>(offsetof(TitleLimitChangedEventData_t198395271, ___PriceUSD_16)); }
	inline Nullable_1_t53833054  get_PriceUSD_16() const { return ___PriceUSD_16; }
	inline Nullable_1_t53833054 * get_address_of_PriceUSD_16() { return &___PriceUSD_16; }
	inline void set_PriceUSD_16(Nullable_1_t53833054  value)
	{
		___PriceUSD_16 = value;
	}

	inline static int32_t get_offset_of_Value_17() { return static_cast<int32_t>(offsetof(TitleLimitChangedEventData_t198395271, ___Value_17)); }
	inline Nullable_1_t53833054  get_Value_17() const { return ___Value_17; }
	inline Nullable_1_t53833054 * get_address_of_Value_17() { return &___Value_17; }
	inline void set_Value_17(Nullable_1_t53833054  value)
	{
		___Value_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLELIMITCHANGEDEVENTDATA_T198395271_H
#ifndef TITLEINITIATEDPLAYERPASSWORDRESETEVENTDATA_T2137886045_H
#define TITLEINITIATEDPLAYERPASSWORDRESETEVENTDATA_T2137886045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleInitiatedPlayerPasswordResetEventData
struct  TitleInitiatedPlayerPasswordResetEventData_t2137886045  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.TitleInitiatedPlayerPasswordResetEventData::PlayerId
	String_t* ___PlayerId_10;
	// System.String PlayFab.PlayStreamModels.TitleInitiatedPlayerPasswordResetEventData::PlayerRecoveryEmailAddress
	String_t* ___PlayerRecoveryEmailAddress_11;
	// System.String PlayFab.PlayStreamModels.TitleInitiatedPlayerPasswordResetEventData::PasswordResetId
	String_t* ___PasswordResetId_12;
	// System.String PlayFab.PlayStreamModels.TitleInitiatedPlayerPasswordResetEventData::UserId
	String_t* ___UserId_13;
	// System.String PlayFab.PlayStreamModels.TitleInitiatedPlayerPasswordResetEventData::DeveloperId
	String_t* ___DeveloperId_14;

public:
	inline static int32_t get_offset_of_PlayerId_10() { return static_cast<int32_t>(offsetof(TitleInitiatedPlayerPasswordResetEventData_t2137886045, ___PlayerId_10)); }
	inline String_t* get_PlayerId_10() const { return ___PlayerId_10; }
	inline String_t** get_address_of_PlayerId_10() { return &___PlayerId_10; }
	inline void set_PlayerId_10(String_t* value)
	{
		___PlayerId_10 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerId_10), value);
	}

	inline static int32_t get_offset_of_PlayerRecoveryEmailAddress_11() { return static_cast<int32_t>(offsetof(TitleInitiatedPlayerPasswordResetEventData_t2137886045, ___PlayerRecoveryEmailAddress_11)); }
	inline String_t* get_PlayerRecoveryEmailAddress_11() const { return ___PlayerRecoveryEmailAddress_11; }
	inline String_t** get_address_of_PlayerRecoveryEmailAddress_11() { return &___PlayerRecoveryEmailAddress_11; }
	inline void set_PlayerRecoveryEmailAddress_11(String_t* value)
	{
		___PlayerRecoveryEmailAddress_11 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerRecoveryEmailAddress_11), value);
	}

	inline static int32_t get_offset_of_PasswordResetId_12() { return static_cast<int32_t>(offsetof(TitleInitiatedPlayerPasswordResetEventData_t2137886045, ___PasswordResetId_12)); }
	inline String_t* get_PasswordResetId_12() const { return ___PasswordResetId_12; }
	inline String_t** get_address_of_PasswordResetId_12() { return &___PasswordResetId_12; }
	inline void set_PasswordResetId_12(String_t* value)
	{
		___PasswordResetId_12 = value;
		Il2CppCodeGenWriteBarrier((&___PasswordResetId_12), value);
	}

	inline static int32_t get_offset_of_UserId_13() { return static_cast<int32_t>(offsetof(TitleInitiatedPlayerPasswordResetEventData_t2137886045, ___UserId_13)); }
	inline String_t* get_UserId_13() const { return ___UserId_13; }
	inline String_t** get_address_of_UserId_13() { return &___UserId_13; }
	inline void set_UserId_13(String_t* value)
	{
		___UserId_13 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_13), value);
	}

	inline static int32_t get_offset_of_DeveloperId_14() { return static_cast<int32_t>(offsetof(TitleInitiatedPlayerPasswordResetEventData_t2137886045, ___DeveloperId_14)); }
	inline String_t* get_DeveloperId_14() const { return ___DeveloperId_14; }
	inline String_t** get_address_of_DeveloperId_14() { return &___DeveloperId_14; }
	inline void set_DeveloperId_14(String_t* value)
	{
		___DeveloperId_14 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEINITIATEDPLAYERPASSWORDRESETEVENTDATA_T2137886045_H
#ifndef TITLEHIGHERRORRATEEVENTDATA_T2550781104_H
#define TITLEHIGHERRORRATEEVENTDATA_T2550781104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleHighErrorRateEventData
struct  TitleHighErrorRateEventData_t2550781104  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.TitleHighErrorRateEventData::GraphUrl
	String_t* ___GraphUrl_10;
	// System.String PlayFab.PlayStreamModels.TitleHighErrorRateEventData::AlertEventId
	String_t* ___AlertEventId_11;
	// System.String PlayFab.PlayStreamModels.TitleHighErrorRateEventData::API
	String_t* ___API_12;
	// System.String PlayFab.PlayStreamModels.TitleHighErrorRateEventData::ErrorCode
	String_t* ___ErrorCode_13;
	// System.Nullable`1<PlayFab.PlayStreamModels.AlertLevel> PlayFab.PlayStreamModels.TitleHighErrorRateEventData::Level
	Nullable_1_t4219494913  ___Level_14;
	// System.Nullable`1<PlayFab.PlayStreamModels.AlertStates> PlayFab.PlayStreamModels.TitleHighErrorRateEventData::AlertState
	Nullable_1_t3987833740  ___AlertState_15;

public:
	inline static int32_t get_offset_of_GraphUrl_10() { return static_cast<int32_t>(offsetof(TitleHighErrorRateEventData_t2550781104, ___GraphUrl_10)); }
	inline String_t* get_GraphUrl_10() const { return ___GraphUrl_10; }
	inline String_t** get_address_of_GraphUrl_10() { return &___GraphUrl_10; }
	inline void set_GraphUrl_10(String_t* value)
	{
		___GraphUrl_10 = value;
		Il2CppCodeGenWriteBarrier((&___GraphUrl_10), value);
	}

	inline static int32_t get_offset_of_AlertEventId_11() { return static_cast<int32_t>(offsetof(TitleHighErrorRateEventData_t2550781104, ___AlertEventId_11)); }
	inline String_t* get_AlertEventId_11() const { return ___AlertEventId_11; }
	inline String_t** get_address_of_AlertEventId_11() { return &___AlertEventId_11; }
	inline void set_AlertEventId_11(String_t* value)
	{
		___AlertEventId_11 = value;
		Il2CppCodeGenWriteBarrier((&___AlertEventId_11), value);
	}

	inline static int32_t get_offset_of_API_12() { return static_cast<int32_t>(offsetof(TitleHighErrorRateEventData_t2550781104, ___API_12)); }
	inline String_t* get_API_12() const { return ___API_12; }
	inline String_t** get_address_of_API_12() { return &___API_12; }
	inline void set_API_12(String_t* value)
	{
		___API_12 = value;
		Il2CppCodeGenWriteBarrier((&___API_12), value);
	}

	inline static int32_t get_offset_of_ErrorCode_13() { return static_cast<int32_t>(offsetof(TitleHighErrorRateEventData_t2550781104, ___ErrorCode_13)); }
	inline String_t* get_ErrorCode_13() const { return ___ErrorCode_13; }
	inline String_t** get_address_of_ErrorCode_13() { return &___ErrorCode_13; }
	inline void set_ErrorCode_13(String_t* value)
	{
		___ErrorCode_13 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorCode_13), value);
	}

	inline static int32_t get_offset_of_Level_14() { return static_cast<int32_t>(offsetof(TitleHighErrorRateEventData_t2550781104, ___Level_14)); }
	inline Nullable_1_t4219494913  get_Level_14() const { return ___Level_14; }
	inline Nullable_1_t4219494913 * get_address_of_Level_14() { return &___Level_14; }
	inline void set_Level_14(Nullable_1_t4219494913  value)
	{
		___Level_14 = value;
	}

	inline static int32_t get_offset_of_AlertState_15() { return static_cast<int32_t>(offsetof(TitleHighErrorRateEventData_t2550781104, ___AlertState_15)); }
	inline Nullable_1_t3987833740  get_AlertState_15() const { return ___AlertState_15; }
	inline Nullable_1_t3987833740 * get_address_of_AlertState_15() { return &___AlertState_15; }
	inline void set_AlertState_15(Nullable_1_t3987833740  value)
	{
		___AlertState_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEHIGHERRORRATEEVENTDATA_T2550781104_H
#ifndef TITLEEXCEEDEDLIMITEVENTDATA_T2496628674_H
#define TITLEEXCEEDEDLIMITEVENTDATA_T2496628674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleExceededLimitEventData
struct  TitleExceededLimitEventData_t2496628674  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.TitleExceededLimitEventData::LimitId
	String_t* ___LimitId_10;
	// System.String PlayFab.PlayStreamModels.TitleExceededLimitEventData::LimitDisplayName
	String_t* ___LimitDisplayName_11;
	// System.Nullable`1<PlayFab.PlayStreamModels.MetricUnit> PlayFab.PlayStreamModels.TitleExceededLimitEventData::Unit
	Nullable_1_t4276494596  ___Unit_12;
	// System.Double PlayFab.PlayStreamModels.TitleExceededLimitEventData::LimitValue
	double ___LimitValue_13;
	// System.Double PlayFab.PlayStreamModels.TitleExceededLimitEventData::Value
	double ___Value_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> PlayFab.PlayStreamModels.TitleExceededLimitEventData::Details
	Dictionary_2_t2977282306 * ___Details_15;

public:
	inline static int32_t get_offset_of_LimitId_10() { return static_cast<int32_t>(offsetof(TitleExceededLimitEventData_t2496628674, ___LimitId_10)); }
	inline String_t* get_LimitId_10() const { return ___LimitId_10; }
	inline String_t** get_address_of_LimitId_10() { return &___LimitId_10; }
	inline void set_LimitId_10(String_t* value)
	{
		___LimitId_10 = value;
		Il2CppCodeGenWriteBarrier((&___LimitId_10), value);
	}

	inline static int32_t get_offset_of_LimitDisplayName_11() { return static_cast<int32_t>(offsetof(TitleExceededLimitEventData_t2496628674, ___LimitDisplayName_11)); }
	inline String_t* get_LimitDisplayName_11() const { return ___LimitDisplayName_11; }
	inline String_t** get_address_of_LimitDisplayName_11() { return &___LimitDisplayName_11; }
	inline void set_LimitDisplayName_11(String_t* value)
	{
		___LimitDisplayName_11 = value;
		Il2CppCodeGenWriteBarrier((&___LimitDisplayName_11), value);
	}

	inline static int32_t get_offset_of_Unit_12() { return static_cast<int32_t>(offsetof(TitleExceededLimitEventData_t2496628674, ___Unit_12)); }
	inline Nullable_1_t4276494596  get_Unit_12() const { return ___Unit_12; }
	inline Nullable_1_t4276494596 * get_address_of_Unit_12() { return &___Unit_12; }
	inline void set_Unit_12(Nullable_1_t4276494596  value)
	{
		___Unit_12 = value;
	}

	inline static int32_t get_offset_of_LimitValue_13() { return static_cast<int32_t>(offsetof(TitleExceededLimitEventData_t2496628674, ___LimitValue_13)); }
	inline double get_LimitValue_13() const { return ___LimitValue_13; }
	inline double* get_address_of_LimitValue_13() { return &___LimitValue_13; }
	inline void set_LimitValue_13(double value)
	{
		___LimitValue_13 = value;
	}

	inline static int32_t get_offset_of_Value_14() { return static_cast<int32_t>(offsetof(TitleExceededLimitEventData_t2496628674, ___Value_14)); }
	inline double get_Value_14() const { return ___Value_14; }
	inline double* get_address_of_Value_14() { return &___Value_14; }
	inline void set_Value_14(double value)
	{
		___Value_14 = value;
	}

	inline static int32_t get_offset_of_Details_15() { return static_cast<int32_t>(offsetof(TitleExceededLimitEventData_t2496628674, ___Details_15)); }
	inline Dictionary_2_t2977282306 * get_Details_15() const { return ___Details_15; }
	inline Dictionary_2_t2977282306 ** get_address_of_Details_15() { return &___Details_15; }
	inline void set_Details_15(Dictionary_2_t2977282306 * value)
	{
		___Details_15 = value;
		Il2CppCodeGenWriteBarrier((&___Details_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEEXCEEDEDLIMITEVENTDATA_T2496628674_H
#ifndef TITLEDELETEDTASKEVENTDATA_T2855794751_H
#define TITLEDELETEDTASKEVENTDATA_T2855794751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleDeletedTaskEventData
struct  TitleDeletedTaskEventData_t2855794751  : public PlayStreamEventBase_t710997429
{
public:
	// PlayFab.PlayStreamModels.NameIdentifier PlayFab.PlayStreamModels.TitleDeletedTaskEventData::ScheduledTask
	NameIdentifier_t2678357796 * ___ScheduledTask_10;
	// System.String PlayFab.PlayStreamModels.TitleDeletedTaskEventData::UserId
	String_t* ___UserId_11;
	// System.String PlayFab.PlayStreamModels.TitleDeletedTaskEventData::DeveloperId
	String_t* ___DeveloperId_12;

public:
	inline static int32_t get_offset_of_ScheduledTask_10() { return static_cast<int32_t>(offsetof(TitleDeletedTaskEventData_t2855794751, ___ScheduledTask_10)); }
	inline NameIdentifier_t2678357796 * get_ScheduledTask_10() const { return ___ScheduledTask_10; }
	inline NameIdentifier_t2678357796 ** get_address_of_ScheduledTask_10() { return &___ScheduledTask_10; }
	inline void set_ScheduledTask_10(NameIdentifier_t2678357796 * value)
	{
		___ScheduledTask_10 = value;
		Il2CppCodeGenWriteBarrier((&___ScheduledTask_10), value);
	}

	inline static int32_t get_offset_of_UserId_11() { return static_cast<int32_t>(offsetof(TitleDeletedTaskEventData_t2855794751, ___UserId_11)); }
	inline String_t* get_UserId_11() const { return ___UserId_11; }
	inline String_t** get_address_of_UserId_11() { return &___UserId_11; }
	inline void set_UserId_11(String_t* value)
	{
		___UserId_11 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_11), value);
	}

	inline static int32_t get_offset_of_DeveloperId_12() { return static_cast<int32_t>(offsetof(TitleDeletedTaskEventData_t2855794751, ___DeveloperId_12)); }
	inline String_t* get_DeveloperId_12() const { return ___DeveloperId_12; }
	inline String_t** get_address_of_DeveloperId_12() { return &___DeveloperId_12; }
	inline void set_DeveloperId_12(String_t* value)
	{
		___DeveloperId_12 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEDELETEDTASKEVENTDATA_T2855794751_H
#ifndef TITLECREATEDTASKEVENTDATA_T3457382386_H
#define TITLECREATEDTASKEVENTDATA_T3457382386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleCreatedTaskEventData
struct  TitleCreatedTaskEventData_t3457382386  : public PlayStreamEventBase_t710997429
{
public:
	// PlayFab.PlayStreamModels.NameIdentifier PlayFab.PlayStreamModels.TitleCreatedTaskEventData::ScheduledTask
	NameIdentifier_t2678357796 * ___ScheduledTask_10;
	// System.String PlayFab.PlayStreamModels.TitleCreatedTaskEventData::UserId
	String_t* ___UserId_11;
	// System.String PlayFab.PlayStreamModels.TitleCreatedTaskEventData::DeveloperId
	String_t* ___DeveloperId_12;

public:
	inline static int32_t get_offset_of_ScheduledTask_10() { return static_cast<int32_t>(offsetof(TitleCreatedTaskEventData_t3457382386, ___ScheduledTask_10)); }
	inline NameIdentifier_t2678357796 * get_ScheduledTask_10() const { return ___ScheduledTask_10; }
	inline NameIdentifier_t2678357796 ** get_address_of_ScheduledTask_10() { return &___ScheduledTask_10; }
	inline void set_ScheduledTask_10(NameIdentifier_t2678357796 * value)
	{
		___ScheduledTask_10 = value;
		Il2CppCodeGenWriteBarrier((&___ScheduledTask_10), value);
	}

	inline static int32_t get_offset_of_UserId_11() { return static_cast<int32_t>(offsetof(TitleCreatedTaskEventData_t3457382386, ___UserId_11)); }
	inline String_t* get_UserId_11() const { return ___UserId_11; }
	inline String_t** get_address_of_UserId_11() { return &___UserId_11; }
	inline void set_UserId_11(String_t* value)
	{
		___UserId_11 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_11), value);
	}

	inline static int32_t get_offset_of_DeveloperId_12() { return static_cast<int32_t>(offsetof(TitleCreatedTaskEventData_t3457382386, ___DeveloperId_12)); }
	inline String_t* get_DeveloperId_12() const { return ___DeveloperId_12; }
	inline String_t** get_address_of_DeveloperId_12() { return &___DeveloperId_12; }
	inline void set_DeveloperId_12(String_t* value)
	{
		___DeveloperId_12 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLECREATEDTASKEVENTDATA_T3457382386_H
#ifndef TITLECOMPLETEDTASKEVENTDATA_T41329012_H
#define TITLECOMPLETEDTASKEVENTDATA_T41329012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleCompletedTaskEventData
struct  TitleCompletedTaskEventData_t41329012  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.TitleCompletedTaskEventData::TaskType
	String_t* ___TaskType_10;
	// System.String PlayFab.PlayStreamModels.TitleCompletedTaskEventData::TaskInstanceId
	String_t* ___TaskInstanceId_11;
	// System.Boolean PlayFab.PlayStreamModels.TitleCompletedTaskEventData::IsAborted
	bool ___IsAborted_12;
	// System.Nullable`1<System.DateTime> PlayFab.PlayStreamModels.TitleCompletedTaskEventData::AbortedAt
	Nullable_1_t4223474148  ___AbortedAt_13;
	// System.Nullable`1<PlayFab.PlayStreamModels.TaskInstanceStatus> PlayFab.PlayStreamModels.TitleCompletedTaskEventData::Result
	Nullable_1_t2645446852  ___Result_14;
	// System.Object PlayFab.PlayStreamModels.TitleCompletedTaskEventData::Summary
	RuntimeObject * ___Summary_15;

public:
	inline static int32_t get_offset_of_TaskType_10() { return static_cast<int32_t>(offsetof(TitleCompletedTaskEventData_t41329012, ___TaskType_10)); }
	inline String_t* get_TaskType_10() const { return ___TaskType_10; }
	inline String_t** get_address_of_TaskType_10() { return &___TaskType_10; }
	inline void set_TaskType_10(String_t* value)
	{
		___TaskType_10 = value;
		Il2CppCodeGenWriteBarrier((&___TaskType_10), value);
	}

	inline static int32_t get_offset_of_TaskInstanceId_11() { return static_cast<int32_t>(offsetof(TitleCompletedTaskEventData_t41329012, ___TaskInstanceId_11)); }
	inline String_t* get_TaskInstanceId_11() const { return ___TaskInstanceId_11; }
	inline String_t** get_address_of_TaskInstanceId_11() { return &___TaskInstanceId_11; }
	inline void set_TaskInstanceId_11(String_t* value)
	{
		___TaskInstanceId_11 = value;
		Il2CppCodeGenWriteBarrier((&___TaskInstanceId_11), value);
	}

	inline static int32_t get_offset_of_IsAborted_12() { return static_cast<int32_t>(offsetof(TitleCompletedTaskEventData_t41329012, ___IsAborted_12)); }
	inline bool get_IsAborted_12() const { return ___IsAborted_12; }
	inline bool* get_address_of_IsAborted_12() { return &___IsAborted_12; }
	inline void set_IsAborted_12(bool value)
	{
		___IsAborted_12 = value;
	}

	inline static int32_t get_offset_of_AbortedAt_13() { return static_cast<int32_t>(offsetof(TitleCompletedTaskEventData_t41329012, ___AbortedAt_13)); }
	inline Nullable_1_t4223474148  get_AbortedAt_13() const { return ___AbortedAt_13; }
	inline Nullable_1_t4223474148 * get_address_of_AbortedAt_13() { return &___AbortedAt_13; }
	inline void set_AbortedAt_13(Nullable_1_t4223474148  value)
	{
		___AbortedAt_13 = value;
	}

	inline static int32_t get_offset_of_Result_14() { return static_cast<int32_t>(offsetof(TitleCompletedTaskEventData_t41329012, ___Result_14)); }
	inline Nullable_1_t2645446852  get_Result_14() const { return ___Result_14; }
	inline Nullable_1_t2645446852 * get_address_of_Result_14() { return &___Result_14; }
	inline void set_Result_14(Nullable_1_t2645446852  value)
	{
		___Result_14 = value;
	}

	inline static int32_t get_offset_of_Summary_15() { return static_cast<int32_t>(offsetof(TitleCompletedTaskEventData_t41329012, ___Summary_15)); }
	inline RuntimeObject * get_Summary_15() const { return ___Summary_15; }
	inline RuntimeObject ** get_address_of_Summary_15() { return &___Summary_15; }
	inline void set_Summary_15(RuntimeObject * value)
	{
		___Summary_15 = value;
		Il2CppCodeGenWriteBarrier((&___Summary_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLECOMPLETEDTASKEVENTDATA_T41329012_H
#ifndef TITLECLIENTRATELIMITEDEVENTDATA_T2541482180_H
#define TITLECLIENTRATELIMITEDEVENTDATA_T2541482180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleClientRateLimitedEventData
struct  TitleClientRateLimitedEventData_t2541482180  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.TitleClientRateLimitedEventData::GraphUrl
	String_t* ___GraphUrl_10;
	// System.String PlayFab.PlayStreamModels.TitleClientRateLimitedEventData::AlertEventId
	String_t* ___AlertEventId_11;
	// System.String PlayFab.PlayStreamModels.TitleClientRateLimitedEventData::API
	String_t* ___API_12;
	// System.String PlayFab.PlayStreamModels.TitleClientRateLimitedEventData::ErrorCode
	String_t* ___ErrorCode_13;
	// System.Nullable`1<PlayFab.PlayStreamModels.AlertLevel> PlayFab.PlayStreamModels.TitleClientRateLimitedEventData::Level
	Nullable_1_t4219494913  ___Level_14;
	// System.Nullable`1<PlayFab.PlayStreamModels.AlertStates> PlayFab.PlayStreamModels.TitleClientRateLimitedEventData::AlertState
	Nullable_1_t3987833740  ___AlertState_15;

public:
	inline static int32_t get_offset_of_GraphUrl_10() { return static_cast<int32_t>(offsetof(TitleClientRateLimitedEventData_t2541482180, ___GraphUrl_10)); }
	inline String_t* get_GraphUrl_10() const { return ___GraphUrl_10; }
	inline String_t** get_address_of_GraphUrl_10() { return &___GraphUrl_10; }
	inline void set_GraphUrl_10(String_t* value)
	{
		___GraphUrl_10 = value;
		Il2CppCodeGenWriteBarrier((&___GraphUrl_10), value);
	}

	inline static int32_t get_offset_of_AlertEventId_11() { return static_cast<int32_t>(offsetof(TitleClientRateLimitedEventData_t2541482180, ___AlertEventId_11)); }
	inline String_t* get_AlertEventId_11() const { return ___AlertEventId_11; }
	inline String_t** get_address_of_AlertEventId_11() { return &___AlertEventId_11; }
	inline void set_AlertEventId_11(String_t* value)
	{
		___AlertEventId_11 = value;
		Il2CppCodeGenWriteBarrier((&___AlertEventId_11), value);
	}

	inline static int32_t get_offset_of_API_12() { return static_cast<int32_t>(offsetof(TitleClientRateLimitedEventData_t2541482180, ___API_12)); }
	inline String_t* get_API_12() const { return ___API_12; }
	inline String_t** get_address_of_API_12() { return &___API_12; }
	inline void set_API_12(String_t* value)
	{
		___API_12 = value;
		Il2CppCodeGenWriteBarrier((&___API_12), value);
	}

	inline static int32_t get_offset_of_ErrorCode_13() { return static_cast<int32_t>(offsetof(TitleClientRateLimitedEventData_t2541482180, ___ErrorCode_13)); }
	inline String_t* get_ErrorCode_13() const { return ___ErrorCode_13; }
	inline String_t** get_address_of_ErrorCode_13() { return &___ErrorCode_13; }
	inline void set_ErrorCode_13(String_t* value)
	{
		___ErrorCode_13 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorCode_13), value);
	}

	inline static int32_t get_offset_of_Level_14() { return static_cast<int32_t>(offsetof(TitleClientRateLimitedEventData_t2541482180, ___Level_14)); }
	inline Nullable_1_t4219494913  get_Level_14() const { return ___Level_14; }
	inline Nullable_1_t4219494913 * get_address_of_Level_14() { return &___Level_14; }
	inline void set_Level_14(Nullable_1_t4219494913  value)
	{
		___Level_14 = value;
	}

	inline static int32_t get_offset_of_AlertState_15() { return static_cast<int32_t>(offsetof(TitleClientRateLimitedEventData_t2541482180, ___AlertState_15)); }
	inline Nullable_1_t3987833740  get_AlertState_15() const { return ___AlertState_15; }
	inline Nullable_1_t3987833740 * get_address_of_AlertState_15() { return &___AlertState_15; }
	inline void set_AlertState_15(Nullable_1_t3987833740  value)
	{
		___AlertState_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLECLIENTRATELIMITEDEVENTDATA_T2541482180_H
#ifndef TITLECATALOGUPDATEDEVENTDATA_T1228579868_H
#define TITLECATALOGUPDATEDEVENTDATA_T1228579868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleCatalogUpdatedEventData
struct  TitleCatalogUpdatedEventData_t1228579868  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.TitleCatalogUpdatedEventData::CatalogVersion
	String_t* ___CatalogVersion_10;
	// System.Boolean PlayFab.PlayStreamModels.TitleCatalogUpdatedEventData::Deleted
	bool ___Deleted_11;
	// System.String PlayFab.PlayStreamModels.TitleCatalogUpdatedEventData::UserId
	String_t* ___UserId_12;
	// System.String PlayFab.PlayStreamModels.TitleCatalogUpdatedEventData::DeveloperId
	String_t* ___DeveloperId_13;

public:
	inline static int32_t get_offset_of_CatalogVersion_10() { return static_cast<int32_t>(offsetof(TitleCatalogUpdatedEventData_t1228579868, ___CatalogVersion_10)); }
	inline String_t* get_CatalogVersion_10() const { return ___CatalogVersion_10; }
	inline String_t** get_address_of_CatalogVersion_10() { return &___CatalogVersion_10; }
	inline void set_CatalogVersion_10(String_t* value)
	{
		___CatalogVersion_10 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_10), value);
	}

	inline static int32_t get_offset_of_Deleted_11() { return static_cast<int32_t>(offsetof(TitleCatalogUpdatedEventData_t1228579868, ___Deleted_11)); }
	inline bool get_Deleted_11() const { return ___Deleted_11; }
	inline bool* get_address_of_Deleted_11() { return &___Deleted_11; }
	inline void set_Deleted_11(bool value)
	{
		___Deleted_11 = value;
	}

	inline static int32_t get_offset_of_UserId_12() { return static_cast<int32_t>(offsetof(TitleCatalogUpdatedEventData_t1228579868, ___UserId_12)); }
	inline String_t* get_UserId_12() const { return ___UserId_12; }
	inline String_t** get_address_of_UserId_12() { return &___UserId_12; }
	inline void set_UserId_12(String_t* value)
	{
		___UserId_12 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_12), value);
	}

	inline static int32_t get_offset_of_DeveloperId_13() { return static_cast<int32_t>(offsetof(TitleCatalogUpdatedEventData_t1228579868, ___DeveloperId_13)); }
	inline String_t* get_DeveloperId_13() const { return ___DeveloperId_13; }
	inline String_t** get_address_of_DeveloperId_13() { return &___DeveloperId_13; }
	inline void set_DeveloperId_13(String_t* value)
	{
		___DeveloperId_13 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLECATALOGUPDATEDEVENTDATA_T1228579868_H
#ifndef TITLEAPISETTINGSCHANGEDEVENTDATA_T820595823_H
#define TITLEAPISETTINGSCHANGEDEVENTDATA_T820595823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleAPISettingsChangedEventData
struct  TitleAPISettingsChangedEventData_t820595823  : public PlayStreamEventBase_t710997429
{
public:
	// PlayFab.PlayStreamModels.APISettings PlayFab.PlayStreamModels.TitleAPISettingsChangedEventData::PreviousSettingsValues
	APISettings_t3971419043 * ___PreviousSettingsValues_10;
	// PlayFab.PlayStreamModels.APISettings PlayFab.PlayStreamModels.TitleAPISettingsChangedEventData::SettingsValues
	APISettings_t3971419043 * ___SettingsValues_11;
	// System.String PlayFab.PlayStreamModels.TitleAPISettingsChangedEventData::UserId
	String_t* ___UserId_12;
	// System.String PlayFab.PlayStreamModels.TitleAPISettingsChangedEventData::DeveloperId
	String_t* ___DeveloperId_13;

public:
	inline static int32_t get_offset_of_PreviousSettingsValues_10() { return static_cast<int32_t>(offsetof(TitleAPISettingsChangedEventData_t820595823, ___PreviousSettingsValues_10)); }
	inline APISettings_t3971419043 * get_PreviousSettingsValues_10() const { return ___PreviousSettingsValues_10; }
	inline APISettings_t3971419043 ** get_address_of_PreviousSettingsValues_10() { return &___PreviousSettingsValues_10; }
	inline void set_PreviousSettingsValues_10(APISettings_t3971419043 * value)
	{
		___PreviousSettingsValues_10 = value;
		Il2CppCodeGenWriteBarrier((&___PreviousSettingsValues_10), value);
	}

	inline static int32_t get_offset_of_SettingsValues_11() { return static_cast<int32_t>(offsetof(TitleAPISettingsChangedEventData_t820595823, ___SettingsValues_11)); }
	inline APISettings_t3971419043 * get_SettingsValues_11() const { return ___SettingsValues_11; }
	inline APISettings_t3971419043 ** get_address_of_SettingsValues_11() { return &___SettingsValues_11; }
	inline void set_SettingsValues_11(APISettings_t3971419043 * value)
	{
		___SettingsValues_11 = value;
		Il2CppCodeGenWriteBarrier((&___SettingsValues_11), value);
	}

	inline static int32_t get_offset_of_UserId_12() { return static_cast<int32_t>(offsetof(TitleAPISettingsChangedEventData_t820595823, ___UserId_12)); }
	inline String_t* get_UserId_12() const { return ___UserId_12; }
	inline String_t** get_address_of_UserId_12() { return &___UserId_12; }
	inline void set_UserId_12(String_t* value)
	{
		___UserId_12 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_12), value);
	}

	inline static int32_t get_offset_of_DeveloperId_13() { return static_cast<int32_t>(offsetof(TitleAPISettingsChangedEventData_t820595823, ___DeveloperId_13)); }
	inline String_t* get_DeveloperId_13() const { return ___DeveloperId_13; }
	inline String_t** get_address_of_DeveloperId_13() { return &___DeveloperId_13; }
	inline void set_DeveloperId_13(String_t* value)
	{
		___DeveloperId_13 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEAPISETTINGSCHANGEDEVENTDATA_T820595823_H
#ifndef TITLEADDEDGAMEBUILDEVENTDATA_T2942884392_H
#define TITLEADDEDGAMEBUILDEVENTDATA_T2942884392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleAddedGameBuildEventData
struct  TitleAddedGameBuildEventData_t2942884392  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.TitleAddedGameBuildEventData::BuildId
	String_t* ___BuildId_10;
	// System.Collections.Generic.List`1<PlayFab.PlayStreamModels.Region> PlayFab.PlayStreamModels.TitleAddedGameBuildEventData::Regions
	List_1_t4105128198 * ___Regions_11;
	// System.Int32 PlayFab.PlayStreamModels.TitleAddedGameBuildEventData::MinFreeGameSlots
	int32_t ___MinFreeGameSlots_12;
	// System.Int32 PlayFab.PlayStreamModels.TitleAddedGameBuildEventData::MaxGamesPerHost
	int32_t ___MaxGamesPerHost_13;
	// System.String PlayFab.PlayStreamModels.TitleAddedGameBuildEventData::UserId
	String_t* ___UserId_14;
	// System.String PlayFab.PlayStreamModels.TitleAddedGameBuildEventData::DeveloperId
	String_t* ___DeveloperId_15;

public:
	inline static int32_t get_offset_of_BuildId_10() { return static_cast<int32_t>(offsetof(TitleAddedGameBuildEventData_t2942884392, ___BuildId_10)); }
	inline String_t* get_BuildId_10() const { return ___BuildId_10; }
	inline String_t** get_address_of_BuildId_10() { return &___BuildId_10; }
	inline void set_BuildId_10(String_t* value)
	{
		___BuildId_10 = value;
		Il2CppCodeGenWriteBarrier((&___BuildId_10), value);
	}

	inline static int32_t get_offset_of_Regions_11() { return static_cast<int32_t>(offsetof(TitleAddedGameBuildEventData_t2942884392, ___Regions_11)); }
	inline List_1_t4105128198 * get_Regions_11() const { return ___Regions_11; }
	inline List_1_t4105128198 ** get_address_of_Regions_11() { return &___Regions_11; }
	inline void set_Regions_11(List_1_t4105128198 * value)
	{
		___Regions_11 = value;
		Il2CppCodeGenWriteBarrier((&___Regions_11), value);
	}

	inline static int32_t get_offset_of_MinFreeGameSlots_12() { return static_cast<int32_t>(offsetof(TitleAddedGameBuildEventData_t2942884392, ___MinFreeGameSlots_12)); }
	inline int32_t get_MinFreeGameSlots_12() const { return ___MinFreeGameSlots_12; }
	inline int32_t* get_address_of_MinFreeGameSlots_12() { return &___MinFreeGameSlots_12; }
	inline void set_MinFreeGameSlots_12(int32_t value)
	{
		___MinFreeGameSlots_12 = value;
	}

	inline static int32_t get_offset_of_MaxGamesPerHost_13() { return static_cast<int32_t>(offsetof(TitleAddedGameBuildEventData_t2942884392, ___MaxGamesPerHost_13)); }
	inline int32_t get_MaxGamesPerHost_13() const { return ___MaxGamesPerHost_13; }
	inline int32_t* get_address_of_MaxGamesPerHost_13() { return &___MaxGamesPerHost_13; }
	inline void set_MaxGamesPerHost_13(int32_t value)
	{
		___MaxGamesPerHost_13 = value;
	}

	inline static int32_t get_offset_of_UserId_14() { return static_cast<int32_t>(offsetof(TitleAddedGameBuildEventData_t2942884392, ___UserId_14)); }
	inline String_t* get_UserId_14() const { return ___UserId_14; }
	inline String_t** get_address_of_UserId_14() { return &___UserId_14; }
	inline void set_UserId_14(String_t* value)
	{
		___UserId_14 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_14), value);
	}

	inline static int32_t get_offset_of_DeveloperId_15() { return static_cast<int32_t>(offsetof(TitleAddedGameBuildEventData_t2942884392, ___DeveloperId_15)); }
	inline String_t* get_DeveloperId_15() const { return ___DeveloperId_15; }
	inline String_t** get_address_of_DeveloperId_15() { return &___DeveloperId_15; }
	inline void set_DeveloperId_15(String_t* value)
	{
		___DeveloperId_15 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEADDEDGAMEBUILDEVENTDATA_T2942884392_H
#ifndef TITLEADDEDCLOUDSCRIPTEVENTDATA_T3060120679_H
#define TITLEADDEDCLOUDSCRIPTEVENTDATA_T3060120679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleAddedCloudScriptEventData
struct  TitleAddedCloudScriptEventData_t3060120679  : public PlayStreamEventBase_t710997429
{
public:
	// System.Int32 PlayFab.PlayStreamModels.TitleAddedCloudScriptEventData::Version
	int32_t ___Version_10;
	// System.Int32 PlayFab.PlayStreamModels.TitleAddedCloudScriptEventData::Revision
	int32_t ___Revision_11;
	// System.Boolean PlayFab.PlayStreamModels.TitleAddedCloudScriptEventData::Published
	bool ___Published_12;
	// System.Collections.Generic.List`1<System.String> PlayFab.PlayStreamModels.TitleAddedCloudScriptEventData::ScriptNames
	List_1_t859813222 * ___ScriptNames_13;
	// System.String PlayFab.PlayStreamModels.TitleAddedCloudScriptEventData::UserId
	String_t* ___UserId_14;
	// System.String PlayFab.PlayStreamModels.TitleAddedCloudScriptEventData::DeveloperId
	String_t* ___DeveloperId_15;

public:
	inline static int32_t get_offset_of_Version_10() { return static_cast<int32_t>(offsetof(TitleAddedCloudScriptEventData_t3060120679, ___Version_10)); }
	inline int32_t get_Version_10() const { return ___Version_10; }
	inline int32_t* get_address_of_Version_10() { return &___Version_10; }
	inline void set_Version_10(int32_t value)
	{
		___Version_10 = value;
	}

	inline static int32_t get_offset_of_Revision_11() { return static_cast<int32_t>(offsetof(TitleAddedCloudScriptEventData_t3060120679, ___Revision_11)); }
	inline int32_t get_Revision_11() const { return ___Revision_11; }
	inline int32_t* get_address_of_Revision_11() { return &___Revision_11; }
	inline void set_Revision_11(int32_t value)
	{
		___Revision_11 = value;
	}

	inline static int32_t get_offset_of_Published_12() { return static_cast<int32_t>(offsetof(TitleAddedCloudScriptEventData_t3060120679, ___Published_12)); }
	inline bool get_Published_12() const { return ___Published_12; }
	inline bool* get_address_of_Published_12() { return &___Published_12; }
	inline void set_Published_12(bool value)
	{
		___Published_12 = value;
	}

	inline static int32_t get_offset_of_ScriptNames_13() { return static_cast<int32_t>(offsetof(TitleAddedCloudScriptEventData_t3060120679, ___ScriptNames_13)); }
	inline List_1_t859813222 * get_ScriptNames_13() const { return ___ScriptNames_13; }
	inline List_1_t859813222 ** get_address_of_ScriptNames_13() { return &___ScriptNames_13; }
	inline void set_ScriptNames_13(List_1_t859813222 * value)
	{
		___ScriptNames_13 = value;
		Il2CppCodeGenWriteBarrier((&___ScriptNames_13), value);
	}

	inline static int32_t get_offset_of_UserId_14() { return static_cast<int32_t>(offsetof(TitleAddedCloudScriptEventData_t3060120679, ___UserId_14)); }
	inline String_t* get_UserId_14() const { return ___UserId_14; }
	inline String_t** get_address_of_UserId_14() { return &___UserId_14; }
	inline void set_UserId_14(String_t* value)
	{
		___UserId_14 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_14), value);
	}

	inline static int32_t get_offset_of_DeveloperId_15() { return static_cast<int32_t>(offsetof(TitleAddedCloudScriptEventData_t3060120679, ___DeveloperId_15)); }
	inline String_t* get_DeveloperId_15() const { return ___DeveloperId_15; }
	inline String_t** get_address_of_DeveloperId_15() { return &___DeveloperId_15; }
	inline void set_DeveloperId_15(String_t* value)
	{
		___DeveloperId_15 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEADDEDCLOUDSCRIPTEVENTDATA_T3060120679_H
#ifndef PLAYERTRIGGEREDACTIONEXECUTEDCLOUDSCRIPTEVENTDATA_T3930448696_H
#define PLAYERTRIGGEREDACTIONEXECUTEDCLOUDSCRIPTEVENTDATA_T3930448696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerTriggeredActionExecutedCloudScriptEventData
struct  PlayerTriggeredActionExecutedCloudScriptEventData_t3930448696  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerTriggeredActionExecutedCloudScriptEventData::FunctionName
	String_t* ___FunctionName_10;
	// PlayFab.PlayStreamModels.ExecuteCloudScriptResult PlayFab.PlayStreamModels.PlayerTriggeredActionExecutedCloudScriptEventData::CloudScriptExecutionResult
	ExecuteCloudScriptResult_t4017463769 * ___CloudScriptExecutionResult_11;
	// System.Object PlayFab.PlayStreamModels.PlayerTriggeredActionExecutedCloudScriptEventData::TriggeringEventData
	RuntimeObject * ___TriggeringEventData_12;
	// System.String PlayFab.PlayStreamModels.PlayerTriggeredActionExecutedCloudScriptEventData::TriggeringEventName
	String_t* ___TriggeringEventName_13;
	// PlayFab.PlayStreamModels.PlayerProfile PlayFab.PlayStreamModels.PlayerTriggeredActionExecutedCloudScriptEventData::TriggeringPlayer
	PlayerProfile_t256993481 * ___TriggeringPlayer_14;
	// System.String PlayFab.PlayStreamModels.PlayerTriggeredActionExecutedCloudScriptEventData::TitleId
	String_t* ___TitleId_15;

public:
	inline static int32_t get_offset_of_FunctionName_10() { return static_cast<int32_t>(offsetof(PlayerTriggeredActionExecutedCloudScriptEventData_t3930448696, ___FunctionName_10)); }
	inline String_t* get_FunctionName_10() const { return ___FunctionName_10; }
	inline String_t** get_address_of_FunctionName_10() { return &___FunctionName_10; }
	inline void set_FunctionName_10(String_t* value)
	{
		___FunctionName_10 = value;
		Il2CppCodeGenWriteBarrier((&___FunctionName_10), value);
	}

	inline static int32_t get_offset_of_CloudScriptExecutionResult_11() { return static_cast<int32_t>(offsetof(PlayerTriggeredActionExecutedCloudScriptEventData_t3930448696, ___CloudScriptExecutionResult_11)); }
	inline ExecuteCloudScriptResult_t4017463769 * get_CloudScriptExecutionResult_11() const { return ___CloudScriptExecutionResult_11; }
	inline ExecuteCloudScriptResult_t4017463769 ** get_address_of_CloudScriptExecutionResult_11() { return &___CloudScriptExecutionResult_11; }
	inline void set_CloudScriptExecutionResult_11(ExecuteCloudScriptResult_t4017463769 * value)
	{
		___CloudScriptExecutionResult_11 = value;
		Il2CppCodeGenWriteBarrier((&___CloudScriptExecutionResult_11), value);
	}

	inline static int32_t get_offset_of_TriggeringEventData_12() { return static_cast<int32_t>(offsetof(PlayerTriggeredActionExecutedCloudScriptEventData_t3930448696, ___TriggeringEventData_12)); }
	inline RuntimeObject * get_TriggeringEventData_12() const { return ___TriggeringEventData_12; }
	inline RuntimeObject ** get_address_of_TriggeringEventData_12() { return &___TriggeringEventData_12; }
	inline void set_TriggeringEventData_12(RuntimeObject * value)
	{
		___TriggeringEventData_12 = value;
		Il2CppCodeGenWriteBarrier((&___TriggeringEventData_12), value);
	}

	inline static int32_t get_offset_of_TriggeringEventName_13() { return static_cast<int32_t>(offsetof(PlayerTriggeredActionExecutedCloudScriptEventData_t3930448696, ___TriggeringEventName_13)); }
	inline String_t* get_TriggeringEventName_13() const { return ___TriggeringEventName_13; }
	inline String_t** get_address_of_TriggeringEventName_13() { return &___TriggeringEventName_13; }
	inline void set_TriggeringEventName_13(String_t* value)
	{
		___TriggeringEventName_13 = value;
		Il2CppCodeGenWriteBarrier((&___TriggeringEventName_13), value);
	}

	inline static int32_t get_offset_of_TriggeringPlayer_14() { return static_cast<int32_t>(offsetof(PlayerTriggeredActionExecutedCloudScriptEventData_t3930448696, ___TriggeringPlayer_14)); }
	inline PlayerProfile_t256993481 * get_TriggeringPlayer_14() const { return ___TriggeringPlayer_14; }
	inline PlayerProfile_t256993481 ** get_address_of_TriggeringPlayer_14() { return &___TriggeringPlayer_14; }
	inline void set_TriggeringPlayer_14(PlayerProfile_t256993481 * value)
	{
		___TriggeringPlayer_14 = value;
		Il2CppCodeGenWriteBarrier((&___TriggeringPlayer_14), value);
	}

	inline static int32_t get_offset_of_TitleId_15() { return static_cast<int32_t>(offsetof(PlayerTriggeredActionExecutedCloudScriptEventData_t3930448696, ___TitleId_15)); }
	inline String_t* get_TitleId_15() const { return ___TitleId_15; }
	inline String_t** get_address_of_TitleId_15() { return &___TitleId_15; }
	inline void set_TitleId_15(String_t* value)
	{
		___TitleId_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERTRIGGEREDACTIONEXECUTEDCLOUDSCRIPTEVENTDATA_T3930448696_H
#ifndef PLAYERUNLINKEDACCOUNTEVENTDATA_T1327848036_H
#define PLAYERUNLINKEDACCOUNTEVENTDATA_T1327848036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerUnlinkedAccountEventData
struct  PlayerUnlinkedAccountEventData_t1327848036  : public PlayStreamEventBase_t710997429
{
public:
	// System.Nullable`1<PlayFab.PlayStreamModels.LoginIdentityProvider> PlayFab.PlayStreamModels.PlayerUnlinkedAccountEventData::Origination
	Nullable_1_t2019201765  ___Origination_10;
	// System.String PlayFab.PlayStreamModels.PlayerUnlinkedAccountEventData::OriginationUserId
	String_t* ___OriginationUserId_11;
	// System.String PlayFab.PlayStreamModels.PlayerUnlinkedAccountEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_Origination_10() { return static_cast<int32_t>(offsetof(PlayerUnlinkedAccountEventData_t1327848036, ___Origination_10)); }
	inline Nullable_1_t2019201765  get_Origination_10() const { return ___Origination_10; }
	inline Nullable_1_t2019201765 * get_address_of_Origination_10() { return &___Origination_10; }
	inline void set_Origination_10(Nullable_1_t2019201765  value)
	{
		___Origination_10 = value;
	}

	inline static int32_t get_offset_of_OriginationUserId_11() { return static_cast<int32_t>(offsetof(PlayerUnlinkedAccountEventData_t1327848036, ___OriginationUserId_11)); }
	inline String_t* get_OriginationUserId_11() const { return ___OriginationUserId_11; }
	inline String_t** get_address_of_OriginationUserId_11() { return &___OriginationUserId_11; }
	inline void set_OriginationUserId_11(String_t* value)
	{
		___OriginationUserId_11 = value;
		Il2CppCodeGenWriteBarrier((&___OriginationUserId_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerUnlinkedAccountEventData_t1327848036, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERUNLINKEDACCOUNTEVENTDATA_T1327848036_H
#ifndef PLAYERUPDATEDCONTACTEMAILEVENTDATA_T345450517_H
#define PLAYERUPDATEDCONTACTEMAILEVENTDATA_T345450517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerUpdatedContactEmailEventData
struct  PlayerUpdatedContactEmailEventData_t345450517  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerUpdatedContactEmailEventData::EmailName
	String_t* ___EmailName_10;
	// System.String PlayFab.PlayStreamModels.PlayerUpdatedContactEmailEventData::PreviousEmailAddress
	String_t* ___PreviousEmailAddress_11;
	// System.String PlayFab.PlayStreamModels.PlayerUpdatedContactEmailEventData::NewEmailAddress
	String_t* ___NewEmailAddress_12;
	// System.String PlayFab.PlayStreamModels.PlayerUpdatedContactEmailEventData::TitleId
	String_t* ___TitleId_13;

public:
	inline static int32_t get_offset_of_EmailName_10() { return static_cast<int32_t>(offsetof(PlayerUpdatedContactEmailEventData_t345450517, ___EmailName_10)); }
	inline String_t* get_EmailName_10() const { return ___EmailName_10; }
	inline String_t** get_address_of_EmailName_10() { return &___EmailName_10; }
	inline void set_EmailName_10(String_t* value)
	{
		___EmailName_10 = value;
		Il2CppCodeGenWriteBarrier((&___EmailName_10), value);
	}

	inline static int32_t get_offset_of_PreviousEmailAddress_11() { return static_cast<int32_t>(offsetof(PlayerUpdatedContactEmailEventData_t345450517, ___PreviousEmailAddress_11)); }
	inline String_t* get_PreviousEmailAddress_11() const { return ___PreviousEmailAddress_11; }
	inline String_t** get_address_of_PreviousEmailAddress_11() { return &___PreviousEmailAddress_11; }
	inline void set_PreviousEmailAddress_11(String_t* value)
	{
		___PreviousEmailAddress_11 = value;
		Il2CppCodeGenWriteBarrier((&___PreviousEmailAddress_11), value);
	}

	inline static int32_t get_offset_of_NewEmailAddress_12() { return static_cast<int32_t>(offsetof(PlayerUpdatedContactEmailEventData_t345450517, ___NewEmailAddress_12)); }
	inline String_t* get_NewEmailAddress_12() const { return ___NewEmailAddress_12; }
	inline String_t** get_address_of_NewEmailAddress_12() { return &___NewEmailAddress_12; }
	inline void set_NewEmailAddress_12(String_t* value)
	{
		___NewEmailAddress_12 = value;
		Il2CppCodeGenWriteBarrier((&___NewEmailAddress_12), value);
	}

	inline static int32_t get_offset_of_TitleId_13() { return static_cast<int32_t>(offsetof(PlayerUpdatedContactEmailEventData_t345450517, ___TitleId_13)); }
	inline String_t* get_TitleId_13() const { return ___TitleId_13; }
	inline String_t** get_address_of_TitleId_13() { return &___TitleId_13; }
	inline void set_TitleId_13(String_t* value)
	{
		___TitleId_13 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERUPDATEDCONTACTEMAILEVENTDATA_T345450517_H
#ifndef PLAYERVCPURCHASEEVENTDATA_T3475333803_H
#define PLAYERVCPURCHASEEVENTDATA_T3475333803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerVCPurchaseEventData
struct  PlayerVCPurchaseEventData_t3475333803  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerVCPurchaseEventData::PurchaseId
	String_t* ___PurchaseId_10;
	// System.String PlayFab.PlayStreamModels.PlayerVCPurchaseEventData::ItemId
	String_t* ___ItemId_11;
	// System.String PlayFab.PlayStreamModels.PlayerVCPurchaseEventData::CatalogVersion
	String_t* ___CatalogVersion_12;
	// System.String PlayFab.PlayStreamModels.PlayerVCPurchaseEventData::StoreId
	String_t* ___StoreId_13;
	// System.String PlayFab.PlayStreamModels.PlayerVCPurchaseEventData::CurrencyCode
	String_t* ___CurrencyCode_14;
	// System.Int32 PlayFab.PlayStreamModels.PlayerVCPurchaseEventData::Quantity
	int32_t ___Quantity_15;
	// System.UInt32 PlayFab.PlayStreamModels.PlayerVCPurchaseEventData::UnitPrice
	uint32_t ___UnitPrice_16;
	// System.String PlayFab.PlayStreamModels.PlayerVCPurchaseEventData::TitleId
	String_t* ___TitleId_17;

public:
	inline static int32_t get_offset_of_PurchaseId_10() { return static_cast<int32_t>(offsetof(PlayerVCPurchaseEventData_t3475333803, ___PurchaseId_10)); }
	inline String_t* get_PurchaseId_10() const { return ___PurchaseId_10; }
	inline String_t** get_address_of_PurchaseId_10() { return &___PurchaseId_10; }
	inline void set_PurchaseId_10(String_t* value)
	{
		___PurchaseId_10 = value;
		Il2CppCodeGenWriteBarrier((&___PurchaseId_10), value);
	}

	inline static int32_t get_offset_of_ItemId_11() { return static_cast<int32_t>(offsetof(PlayerVCPurchaseEventData_t3475333803, ___ItemId_11)); }
	inline String_t* get_ItemId_11() const { return ___ItemId_11; }
	inline String_t** get_address_of_ItemId_11() { return &___ItemId_11; }
	inline void set_ItemId_11(String_t* value)
	{
		___ItemId_11 = value;
		Il2CppCodeGenWriteBarrier((&___ItemId_11), value);
	}

	inline static int32_t get_offset_of_CatalogVersion_12() { return static_cast<int32_t>(offsetof(PlayerVCPurchaseEventData_t3475333803, ___CatalogVersion_12)); }
	inline String_t* get_CatalogVersion_12() const { return ___CatalogVersion_12; }
	inline String_t** get_address_of_CatalogVersion_12() { return &___CatalogVersion_12; }
	inline void set_CatalogVersion_12(String_t* value)
	{
		___CatalogVersion_12 = value;
		Il2CppCodeGenWriteBarrier((&___CatalogVersion_12), value);
	}

	inline static int32_t get_offset_of_StoreId_13() { return static_cast<int32_t>(offsetof(PlayerVCPurchaseEventData_t3475333803, ___StoreId_13)); }
	inline String_t* get_StoreId_13() const { return ___StoreId_13; }
	inline String_t** get_address_of_StoreId_13() { return &___StoreId_13; }
	inline void set_StoreId_13(String_t* value)
	{
		___StoreId_13 = value;
		Il2CppCodeGenWriteBarrier((&___StoreId_13), value);
	}

	inline static int32_t get_offset_of_CurrencyCode_14() { return static_cast<int32_t>(offsetof(PlayerVCPurchaseEventData_t3475333803, ___CurrencyCode_14)); }
	inline String_t* get_CurrencyCode_14() const { return ___CurrencyCode_14; }
	inline String_t** get_address_of_CurrencyCode_14() { return &___CurrencyCode_14; }
	inline void set_CurrencyCode_14(String_t* value)
	{
		___CurrencyCode_14 = value;
		Il2CppCodeGenWriteBarrier((&___CurrencyCode_14), value);
	}

	inline static int32_t get_offset_of_Quantity_15() { return static_cast<int32_t>(offsetof(PlayerVCPurchaseEventData_t3475333803, ___Quantity_15)); }
	inline int32_t get_Quantity_15() const { return ___Quantity_15; }
	inline int32_t* get_address_of_Quantity_15() { return &___Quantity_15; }
	inline void set_Quantity_15(int32_t value)
	{
		___Quantity_15 = value;
	}

	inline static int32_t get_offset_of_UnitPrice_16() { return static_cast<int32_t>(offsetof(PlayerVCPurchaseEventData_t3475333803, ___UnitPrice_16)); }
	inline uint32_t get_UnitPrice_16() const { return ___UnitPrice_16; }
	inline uint32_t* get_address_of_UnitPrice_16() { return &___UnitPrice_16; }
	inline void set_UnitPrice_16(uint32_t value)
	{
		___UnitPrice_16 = value;
	}

	inline static int32_t get_offset_of_TitleId_17() { return static_cast<int32_t>(offsetof(PlayerVCPurchaseEventData_t3475333803, ___TitleId_17)); }
	inline String_t* get_TitleId_17() const { return ___TitleId_17; }
	inline String_t** get_address_of_TitleId_17() { return &___TitleId_17; }
	inline void set_TitleId_17(String_t* value)
	{
		___TitleId_17 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERVCPURCHASEEVENTDATA_T3475333803_H
#ifndef PLAYERVERIFIEDCONTACTEMAILEVENTDATA_T2829647043_H
#define PLAYERVERIFIEDCONTACTEMAILEVENTDATA_T2829647043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerVerifiedContactEmailEventData
struct  PlayerVerifiedContactEmailEventData_t2829647043  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerVerifiedContactEmailEventData::EmailName
	String_t* ___EmailName_10;
	// System.String PlayFab.PlayStreamModels.PlayerVerifiedContactEmailEventData::EmailAddress
	String_t* ___EmailAddress_11;
	// System.String PlayFab.PlayStreamModels.PlayerVerifiedContactEmailEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_EmailName_10() { return static_cast<int32_t>(offsetof(PlayerVerifiedContactEmailEventData_t2829647043, ___EmailName_10)); }
	inline String_t* get_EmailName_10() const { return ___EmailName_10; }
	inline String_t** get_address_of_EmailName_10() { return &___EmailName_10; }
	inline void set_EmailName_10(String_t* value)
	{
		___EmailName_10 = value;
		Il2CppCodeGenWriteBarrier((&___EmailName_10), value);
	}

	inline static int32_t get_offset_of_EmailAddress_11() { return static_cast<int32_t>(offsetof(PlayerVerifiedContactEmailEventData_t2829647043, ___EmailAddress_11)); }
	inline String_t* get_EmailAddress_11() const { return ___EmailAddress_11; }
	inline String_t** get_address_of_EmailAddress_11() { return &___EmailAddress_11; }
	inline void set_EmailAddress_11(String_t* value)
	{
		___EmailAddress_11 = value;
		Il2CppCodeGenWriteBarrier((&___EmailAddress_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerVerifiedContactEmailEventData_t2829647043, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERVERIFIEDCONTACTEMAILEVENTDATA_T2829647043_H
#ifndef PLAYERVIRTUALCURRENCYBALANCECHANGEDEVENTDATA_T457368683_H
#define PLAYERVIRTUALCURRENCYBALANCECHANGEDEVENTDATA_T457368683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerVirtualCurrencyBalanceChangedEventData
struct  PlayerVirtualCurrencyBalanceChangedEventData_t457368683  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerVirtualCurrencyBalanceChangedEventData::VirtualCurrencyName
	String_t* ___VirtualCurrencyName_10;
	// System.Int32 PlayFab.PlayStreamModels.PlayerVirtualCurrencyBalanceChangedEventData::VirtualCurrencyBalance
	int32_t ___VirtualCurrencyBalance_11;
	// System.Int32 PlayFab.PlayStreamModels.PlayerVirtualCurrencyBalanceChangedEventData::VirtualCurrencyPreviousBalance
	int32_t ___VirtualCurrencyPreviousBalance_12;
	// System.String PlayFab.PlayStreamModels.PlayerVirtualCurrencyBalanceChangedEventData::OrderId
	String_t* ___OrderId_13;
	// System.String PlayFab.PlayStreamModels.PlayerVirtualCurrencyBalanceChangedEventData::TitleId
	String_t* ___TitleId_14;

public:
	inline static int32_t get_offset_of_VirtualCurrencyName_10() { return static_cast<int32_t>(offsetof(PlayerVirtualCurrencyBalanceChangedEventData_t457368683, ___VirtualCurrencyName_10)); }
	inline String_t* get_VirtualCurrencyName_10() const { return ___VirtualCurrencyName_10; }
	inline String_t** get_address_of_VirtualCurrencyName_10() { return &___VirtualCurrencyName_10; }
	inline void set_VirtualCurrencyName_10(String_t* value)
	{
		___VirtualCurrencyName_10 = value;
		Il2CppCodeGenWriteBarrier((&___VirtualCurrencyName_10), value);
	}

	inline static int32_t get_offset_of_VirtualCurrencyBalance_11() { return static_cast<int32_t>(offsetof(PlayerVirtualCurrencyBalanceChangedEventData_t457368683, ___VirtualCurrencyBalance_11)); }
	inline int32_t get_VirtualCurrencyBalance_11() const { return ___VirtualCurrencyBalance_11; }
	inline int32_t* get_address_of_VirtualCurrencyBalance_11() { return &___VirtualCurrencyBalance_11; }
	inline void set_VirtualCurrencyBalance_11(int32_t value)
	{
		___VirtualCurrencyBalance_11 = value;
	}

	inline static int32_t get_offset_of_VirtualCurrencyPreviousBalance_12() { return static_cast<int32_t>(offsetof(PlayerVirtualCurrencyBalanceChangedEventData_t457368683, ___VirtualCurrencyPreviousBalance_12)); }
	inline int32_t get_VirtualCurrencyPreviousBalance_12() const { return ___VirtualCurrencyPreviousBalance_12; }
	inline int32_t* get_address_of_VirtualCurrencyPreviousBalance_12() { return &___VirtualCurrencyPreviousBalance_12; }
	inline void set_VirtualCurrencyPreviousBalance_12(int32_t value)
	{
		___VirtualCurrencyPreviousBalance_12 = value;
	}

	inline static int32_t get_offset_of_OrderId_13() { return static_cast<int32_t>(offsetof(PlayerVirtualCurrencyBalanceChangedEventData_t457368683, ___OrderId_13)); }
	inline String_t* get_OrderId_13() const { return ___OrderId_13; }
	inline String_t** get_address_of_OrderId_13() { return &___OrderId_13; }
	inline void set_OrderId_13(String_t* value)
	{
		___OrderId_13 = value;
		Il2CppCodeGenWriteBarrier((&___OrderId_13), value);
	}

	inline static int32_t get_offset_of_TitleId_14() { return static_cast<int32_t>(offsetof(PlayerVirtualCurrencyBalanceChangedEventData_t457368683, ___TitleId_14)); }
	inline String_t* get_TitleId_14() const { return ___TitleId_14; }
	inline String_t** get_address_of_TitleId_14() { return &___TitleId_14; }
	inline void set_TitleId_14(String_t* value)
	{
		___TitleId_14 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERVIRTUALCURRENCYBALANCECHANGEDEVENTDATA_T457368683_H
#ifndef PLAYERTAGADDEDEVENTDATA_T2409993340_H
#define PLAYERTAGADDEDEVENTDATA_T2409993340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerTagAddedEventData
struct  PlayerTagAddedEventData_t2409993340  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerTagAddedEventData::TagName
	String_t* ___TagName_10;
	// System.String PlayFab.PlayStreamModels.PlayerTagAddedEventData::Namespace
	String_t* ___Namespace_11;
	// System.String PlayFab.PlayStreamModels.PlayerTagAddedEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_TagName_10() { return static_cast<int32_t>(offsetof(PlayerTagAddedEventData_t2409993340, ___TagName_10)); }
	inline String_t* get_TagName_10() const { return ___TagName_10; }
	inline String_t** get_address_of_TagName_10() { return &___TagName_10; }
	inline void set_TagName_10(String_t* value)
	{
		___TagName_10 = value;
		Il2CppCodeGenWriteBarrier((&___TagName_10), value);
	}

	inline static int32_t get_offset_of_Namespace_11() { return static_cast<int32_t>(offsetof(PlayerTagAddedEventData_t2409993340, ___Namespace_11)); }
	inline String_t* get_Namespace_11() const { return ___Namespace_11; }
	inline String_t** get_address_of_Namespace_11() { return &___Namespace_11; }
	inline void set_Namespace_11(String_t* value)
	{
		___Namespace_11 = value;
		Il2CppCodeGenWriteBarrier((&___Namespace_11), value);
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerTagAddedEventData_t2409993340, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERTAGADDEDEVENTDATA_T2409993340_H
#ifndef SENTEMAILEVENTDATA_T3037998575_H
#define SENTEMAILEVENTDATA_T3037998575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.SentEmailEventData
struct  SentEmailEventData_t3037998575  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.SentEmailEventData::EmailTemplateId
	String_t* ___EmailTemplateId_10;
	// System.String PlayFab.PlayStreamModels.SentEmailEventData::EmailTemplateName
	String_t* ___EmailTemplateName_11;
	// System.Nullable`1<PlayFab.PlayStreamModels.EmailTemplateType> PlayFab.PlayStreamModels.SentEmailEventData::EmailTemplateType
	Nullable_1_t541783326  ___EmailTemplateType_12;
	// System.Boolean PlayFab.PlayStreamModels.SentEmailEventData::Success
	bool ___Success_13;
	// System.String PlayFab.PlayStreamModels.SentEmailEventData::ErrorName
	String_t* ___ErrorName_14;
	// System.String PlayFab.PlayStreamModels.SentEmailEventData::ErrorMessage
	String_t* ___ErrorMessage_15;
	// System.String PlayFab.PlayStreamModels.SentEmailEventData::EmailName
	String_t* ___EmailName_16;
	// System.String PlayFab.PlayStreamModels.SentEmailEventData::TitleId
	String_t* ___TitleId_17;

public:
	inline static int32_t get_offset_of_EmailTemplateId_10() { return static_cast<int32_t>(offsetof(SentEmailEventData_t3037998575, ___EmailTemplateId_10)); }
	inline String_t* get_EmailTemplateId_10() const { return ___EmailTemplateId_10; }
	inline String_t** get_address_of_EmailTemplateId_10() { return &___EmailTemplateId_10; }
	inline void set_EmailTemplateId_10(String_t* value)
	{
		___EmailTemplateId_10 = value;
		Il2CppCodeGenWriteBarrier((&___EmailTemplateId_10), value);
	}

	inline static int32_t get_offset_of_EmailTemplateName_11() { return static_cast<int32_t>(offsetof(SentEmailEventData_t3037998575, ___EmailTemplateName_11)); }
	inline String_t* get_EmailTemplateName_11() const { return ___EmailTemplateName_11; }
	inline String_t** get_address_of_EmailTemplateName_11() { return &___EmailTemplateName_11; }
	inline void set_EmailTemplateName_11(String_t* value)
	{
		___EmailTemplateName_11 = value;
		Il2CppCodeGenWriteBarrier((&___EmailTemplateName_11), value);
	}

	inline static int32_t get_offset_of_EmailTemplateType_12() { return static_cast<int32_t>(offsetof(SentEmailEventData_t3037998575, ___EmailTemplateType_12)); }
	inline Nullable_1_t541783326  get_EmailTemplateType_12() const { return ___EmailTemplateType_12; }
	inline Nullable_1_t541783326 * get_address_of_EmailTemplateType_12() { return &___EmailTemplateType_12; }
	inline void set_EmailTemplateType_12(Nullable_1_t541783326  value)
	{
		___EmailTemplateType_12 = value;
	}

	inline static int32_t get_offset_of_Success_13() { return static_cast<int32_t>(offsetof(SentEmailEventData_t3037998575, ___Success_13)); }
	inline bool get_Success_13() const { return ___Success_13; }
	inline bool* get_address_of_Success_13() { return &___Success_13; }
	inline void set_Success_13(bool value)
	{
		___Success_13 = value;
	}

	inline static int32_t get_offset_of_ErrorName_14() { return static_cast<int32_t>(offsetof(SentEmailEventData_t3037998575, ___ErrorName_14)); }
	inline String_t* get_ErrorName_14() const { return ___ErrorName_14; }
	inline String_t** get_address_of_ErrorName_14() { return &___ErrorName_14; }
	inline void set_ErrorName_14(String_t* value)
	{
		___ErrorName_14 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorName_14), value);
	}

	inline static int32_t get_offset_of_ErrorMessage_15() { return static_cast<int32_t>(offsetof(SentEmailEventData_t3037998575, ___ErrorMessage_15)); }
	inline String_t* get_ErrorMessage_15() const { return ___ErrorMessage_15; }
	inline String_t** get_address_of_ErrorMessage_15() { return &___ErrorMessage_15; }
	inline void set_ErrorMessage_15(String_t* value)
	{
		___ErrorMessage_15 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorMessage_15), value);
	}

	inline static int32_t get_offset_of_EmailName_16() { return static_cast<int32_t>(offsetof(SentEmailEventData_t3037998575, ___EmailName_16)); }
	inline String_t* get_EmailName_16() const { return ___EmailName_16; }
	inline String_t** get_address_of_EmailName_16() { return &___EmailName_16; }
	inline void set_EmailName_16(String_t* value)
	{
		___EmailName_16 = value;
		Il2CppCodeGenWriteBarrier((&___EmailName_16), value);
	}

	inline static int32_t get_offset_of_TitleId_17() { return static_cast<int32_t>(offsetof(SentEmailEventData_t3037998575, ___TitleId_17)); }
	inline String_t* get_TitleId_17() const { return ___TitleId_17; }
	inline String_t** get_address_of_TitleId_17() { return &___TitleId_17; }
	inline void set_TitleId_17(String_t* value)
	{
		___TitleId_17 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENTEMAILEVENTDATA_T3037998575_H
#ifndef GAMELOBBYSTARTEDEVENTDATA_T667510670_H
#define GAMELOBBYSTARTEDEVENTDATA_T667510670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.GameLobbyStartedEventData
struct  GameLobbyStartedEventData_t667510670  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::GameServerData
	String_t* ___GameServerData_10;
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::CustomCommandLineData
	String_t* ___CustomCommandLineData_11;
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::CustomMatchmakerEndpoint
	String_t* ___CustomMatchmakerEndpoint_12;
	// System.Nullable`1<System.Int32> PlayFab.PlayStreamModels.GameLobbyStartedEventData::MaxPlayers
	Nullable_1_t3386535404  ___MaxPlayers_13;
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::TitleId
	String_t* ___TitleId_14;
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::GameMode
	String_t* ___GameMode_15;
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::Region
	String_t* ___Region_16;
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::ServerBuildVersion
	String_t* ___ServerBuildVersion_17;
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::ServerHost
	String_t* ___ServerHost_18;
	// System.UInt32 PlayFab.PlayStreamModels.GameLobbyStartedEventData::ServerPort
	uint32_t ___ServerPort_19;
	// System.String PlayFab.PlayStreamModels.GameLobbyStartedEventData::ServerHostInstanceId
	String_t* ___ServerHostInstanceId_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.PlayStreamModels.GameLobbyStartedEventData::Tags
	Dictionary_2_t1409761793 * ___Tags_21;

public:
	inline static int32_t get_offset_of_GameServerData_10() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t667510670, ___GameServerData_10)); }
	inline String_t* get_GameServerData_10() const { return ___GameServerData_10; }
	inline String_t** get_address_of_GameServerData_10() { return &___GameServerData_10; }
	inline void set_GameServerData_10(String_t* value)
	{
		___GameServerData_10 = value;
		Il2CppCodeGenWriteBarrier((&___GameServerData_10), value);
	}

	inline static int32_t get_offset_of_CustomCommandLineData_11() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t667510670, ___CustomCommandLineData_11)); }
	inline String_t* get_CustomCommandLineData_11() const { return ___CustomCommandLineData_11; }
	inline String_t** get_address_of_CustomCommandLineData_11() { return &___CustomCommandLineData_11; }
	inline void set_CustomCommandLineData_11(String_t* value)
	{
		___CustomCommandLineData_11 = value;
		Il2CppCodeGenWriteBarrier((&___CustomCommandLineData_11), value);
	}

	inline static int32_t get_offset_of_CustomMatchmakerEndpoint_12() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t667510670, ___CustomMatchmakerEndpoint_12)); }
	inline String_t* get_CustomMatchmakerEndpoint_12() const { return ___CustomMatchmakerEndpoint_12; }
	inline String_t** get_address_of_CustomMatchmakerEndpoint_12() { return &___CustomMatchmakerEndpoint_12; }
	inline void set_CustomMatchmakerEndpoint_12(String_t* value)
	{
		___CustomMatchmakerEndpoint_12 = value;
		Il2CppCodeGenWriteBarrier((&___CustomMatchmakerEndpoint_12), value);
	}

	inline static int32_t get_offset_of_MaxPlayers_13() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t667510670, ___MaxPlayers_13)); }
	inline Nullable_1_t3386535404  get_MaxPlayers_13() const { return ___MaxPlayers_13; }
	inline Nullable_1_t3386535404 * get_address_of_MaxPlayers_13() { return &___MaxPlayers_13; }
	inline void set_MaxPlayers_13(Nullable_1_t3386535404  value)
	{
		___MaxPlayers_13 = value;
	}

	inline static int32_t get_offset_of_TitleId_14() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t667510670, ___TitleId_14)); }
	inline String_t* get_TitleId_14() const { return ___TitleId_14; }
	inline String_t** get_address_of_TitleId_14() { return &___TitleId_14; }
	inline void set_TitleId_14(String_t* value)
	{
		___TitleId_14 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_14), value);
	}

	inline static int32_t get_offset_of_GameMode_15() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t667510670, ___GameMode_15)); }
	inline String_t* get_GameMode_15() const { return ___GameMode_15; }
	inline String_t** get_address_of_GameMode_15() { return &___GameMode_15; }
	inline void set_GameMode_15(String_t* value)
	{
		___GameMode_15 = value;
		Il2CppCodeGenWriteBarrier((&___GameMode_15), value);
	}

	inline static int32_t get_offset_of_Region_16() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t667510670, ___Region_16)); }
	inline String_t* get_Region_16() const { return ___Region_16; }
	inline String_t** get_address_of_Region_16() { return &___Region_16; }
	inline void set_Region_16(String_t* value)
	{
		___Region_16 = value;
		Il2CppCodeGenWriteBarrier((&___Region_16), value);
	}

	inline static int32_t get_offset_of_ServerBuildVersion_17() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t667510670, ___ServerBuildVersion_17)); }
	inline String_t* get_ServerBuildVersion_17() const { return ___ServerBuildVersion_17; }
	inline String_t** get_address_of_ServerBuildVersion_17() { return &___ServerBuildVersion_17; }
	inline void set_ServerBuildVersion_17(String_t* value)
	{
		___ServerBuildVersion_17 = value;
		Il2CppCodeGenWriteBarrier((&___ServerBuildVersion_17), value);
	}

	inline static int32_t get_offset_of_ServerHost_18() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t667510670, ___ServerHost_18)); }
	inline String_t* get_ServerHost_18() const { return ___ServerHost_18; }
	inline String_t** get_address_of_ServerHost_18() { return &___ServerHost_18; }
	inline void set_ServerHost_18(String_t* value)
	{
		___ServerHost_18 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHost_18), value);
	}

	inline static int32_t get_offset_of_ServerPort_19() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t667510670, ___ServerPort_19)); }
	inline uint32_t get_ServerPort_19() const { return ___ServerPort_19; }
	inline uint32_t* get_address_of_ServerPort_19() { return &___ServerPort_19; }
	inline void set_ServerPort_19(uint32_t value)
	{
		___ServerPort_19 = value;
	}

	inline static int32_t get_offset_of_ServerHostInstanceId_20() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t667510670, ___ServerHostInstanceId_20)); }
	inline String_t* get_ServerHostInstanceId_20() const { return ___ServerHostInstanceId_20; }
	inline String_t** get_address_of_ServerHostInstanceId_20() { return &___ServerHostInstanceId_20; }
	inline void set_ServerHostInstanceId_20(String_t* value)
	{
		___ServerHostInstanceId_20 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHostInstanceId_20), value);
	}

	inline static int32_t get_offset_of_Tags_21() { return static_cast<int32_t>(offsetof(GameLobbyStartedEventData_t667510670, ___Tags_21)); }
	inline Dictionary_2_t1409761793 * get_Tags_21() const { return ___Tags_21; }
	inline Dictionary_2_t1409761793 ** get_address_of_Tags_21() { return &___Tags_21; }
	inline void set_Tags_21(Dictionary_2_t1409761793 * value)
	{
		___Tags_21 = value;
		Il2CppCodeGenWriteBarrier((&___Tags_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMELOBBYSTARTEDEVENTDATA_T667510670_H
#ifndef GAMESERVERHOSTSTARTEDEVENTDATA_T1617646090_H
#define GAMESERVERHOSTSTARTEDEVENTDATA_T1617646090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.GameServerHostStartedEventData
struct  GameServerHostStartedEventData_t1617646090  : public PlayStreamEventBase_t710997429
{
public:
	// System.DateTime PlayFab.PlayStreamModels.GameServerHostStartedEventData::StartTime
	DateTime_t1281661550  ___StartTime_10;
	// System.String PlayFab.PlayStreamModels.GameServerHostStartedEventData::TitleId
	String_t* ___TitleId_11;
	// System.String PlayFab.PlayStreamModels.GameServerHostStartedEventData::Region
	String_t* ___Region_12;
	// System.String PlayFab.PlayStreamModels.GameServerHostStartedEventData::ServerBuildVersion
	String_t* ___ServerBuildVersion_13;
	// System.String PlayFab.PlayStreamModels.GameServerHostStartedEventData::ServerHost
	String_t* ___ServerHost_14;
	// System.String PlayFab.PlayStreamModels.GameServerHostStartedEventData::InstanceId
	String_t* ___InstanceId_15;
	// System.String PlayFab.PlayStreamModels.GameServerHostStartedEventData::InstanceProvider
	String_t* ___InstanceProvider_16;
	// System.String PlayFab.PlayStreamModels.GameServerHostStartedEventData::InstanceType
	String_t* ___InstanceType_17;

public:
	inline static int32_t get_offset_of_StartTime_10() { return static_cast<int32_t>(offsetof(GameServerHostStartedEventData_t1617646090, ___StartTime_10)); }
	inline DateTime_t1281661550  get_StartTime_10() const { return ___StartTime_10; }
	inline DateTime_t1281661550 * get_address_of_StartTime_10() { return &___StartTime_10; }
	inline void set_StartTime_10(DateTime_t1281661550  value)
	{
		___StartTime_10 = value;
	}

	inline static int32_t get_offset_of_TitleId_11() { return static_cast<int32_t>(offsetof(GameServerHostStartedEventData_t1617646090, ___TitleId_11)); }
	inline String_t* get_TitleId_11() const { return ___TitleId_11; }
	inline String_t** get_address_of_TitleId_11() { return &___TitleId_11; }
	inline void set_TitleId_11(String_t* value)
	{
		___TitleId_11 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_11), value);
	}

	inline static int32_t get_offset_of_Region_12() { return static_cast<int32_t>(offsetof(GameServerHostStartedEventData_t1617646090, ___Region_12)); }
	inline String_t* get_Region_12() const { return ___Region_12; }
	inline String_t** get_address_of_Region_12() { return &___Region_12; }
	inline void set_Region_12(String_t* value)
	{
		___Region_12 = value;
		Il2CppCodeGenWriteBarrier((&___Region_12), value);
	}

	inline static int32_t get_offset_of_ServerBuildVersion_13() { return static_cast<int32_t>(offsetof(GameServerHostStartedEventData_t1617646090, ___ServerBuildVersion_13)); }
	inline String_t* get_ServerBuildVersion_13() const { return ___ServerBuildVersion_13; }
	inline String_t** get_address_of_ServerBuildVersion_13() { return &___ServerBuildVersion_13; }
	inline void set_ServerBuildVersion_13(String_t* value)
	{
		___ServerBuildVersion_13 = value;
		Il2CppCodeGenWriteBarrier((&___ServerBuildVersion_13), value);
	}

	inline static int32_t get_offset_of_ServerHost_14() { return static_cast<int32_t>(offsetof(GameServerHostStartedEventData_t1617646090, ___ServerHost_14)); }
	inline String_t* get_ServerHost_14() const { return ___ServerHost_14; }
	inline String_t** get_address_of_ServerHost_14() { return &___ServerHost_14; }
	inline void set_ServerHost_14(String_t* value)
	{
		___ServerHost_14 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHost_14), value);
	}

	inline static int32_t get_offset_of_InstanceId_15() { return static_cast<int32_t>(offsetof(GameServerHostStartedEventData_t1617646090, ___InstanceId_15)); }
	inline String_t* get_InstanceId_15() const { return ___InstanceId_15; }
	inline String_t** get_address_of_InstanceId_15() { return &___InstanceId_15; }
	inline void set_InstanceId_15(String_t* value)
	{
		___InstanceId_15 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceId_15), value);
	}

	inline static int32_t get_offset_of_InstanceProvider_16() { return static_cast<int32_t>(offsetof(GameServerHostStartedEventData_t1617646090, ___InstanceProvider_16)); }
	inline String_t* get_InstanceProvider_16() const { return ___InstanceProvider_16; }
	inline String_t** get_address_of_InstanceProvider_16() { return &___InstanceProvider_16; }
	inline void set_InstanceProvider_16(String_t* value)
	{
		___InstanceProvider_16 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceProvider_16), value);
	}

	inline static int32_t get_offset_of_InstanceType_17() { return static_cast<int32_t>(offsetof(GameServerHostStartedEventData_t1617646090, ___InstanceType_17)); }
	inline String_t* get_InstanceType_17() const { return ___InstanceType_17; }
	inline String_t** get_address_of_InstanceType_17() { return &___InstanceType_17; }
	inline void set_InstanceType_17(String_t* value)
	{
		___InstanceType_17 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceType_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESERVERHOSTSTARTEDEVENTDATA_T1617646090_H
#ifndef GAMESERVERHOSTSTOPPEDEVENTDATA_T2829167398_H
#define GAMESERVERHOSTSTOPPEDEVENTDATA_T2829167398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.GameServerHostStoppedEventData
struct  GameServerHostStoppedEventData_t2829167398  : public PlayStreamEventBase_t710997429
{
public:
	// System.DateTime PlayFab.PlayStreamModels.GameServerHostStoppedEventData::StartTime
	DateTime_t1281661550  ___StartTime_10;
	// System.DateTime PlayFab.PlayStreamModels.GameServerHostStoppedEventData::StopTime
	DateTime_t1281661550  ___StopTime_11;
	// System.Nullable`1<PlayFab.PlayStreamModels.GameServerHostStopReason> PlayFab.PlayStreamModels.GameServerHostStoppedEventData::StopReason
	Nullable_1_t2017385689  ___StopReason_12;
	// System.String PlayFab.PlayStreamModels.GameServerHostStoppedEventData::TitleId
	String_t* ___TitleId_13;
	// System.String PlayFab.PlayStreamModels.GameServerHostStoppedEventData::Region
	String_t* ___Region_14;
	// System.String PlayFab.PlayStreamModels.GameServerHostStoppedEventData::ServerBuildVersion
	String_t* ___ServerBuildVersion_15;
	// System.String PlayFab.PlayStreamModels.GameServerHostStoppedEventData::ServerHost
	String_t* ___ServerHost_16;
	// System.String PlayFab.PlayStreamModels.GameServerHostStoppedEventData::InstanceId
	String_t* ___InstanceId_17;
	// System.String PlayFab.PlayStreamModels.GameServerHostStoppedEventData::InstanceProvider
	String_t* ___InstanceProvider_18;
	// System.String PlayFab.PlayStreamModels.GameServerHostStoppedEventData::InstanceType
	String_t* ___InstanceType_19;

public:
	inline static int32_t get_offset_of_StartTime_10() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t2829167398, ___StartTime_10)); }
	inline DateTime_t1281661550  get_StartTime_10() const { return ___StartTime_10; }
	inline DateTime_t1281661550 * get_address_of_StartTime_10() { return &___StartTime_10; }
	inline void set_StartTime_10(DateTime_t1281661550  value)
	{
		___StartTime_10 = value;
	}

	inline static int32_t get_offset_of_StopTime_11() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t2829167398, ___StopTime_11)); }
	inline DateTime_t1281661550  get_StopTime_11() const { return ___StopTime_11; }
	inline DateTime_t1281661550 * get_address_of_StopTime_11() { return &___StopTime_11; }
	inline void set_StopTime_11(DateTime_t1281661550  value)
	{
		___StopTime_11 = value;
	}

	inline static int32_t get_offset_of_StopReason_12() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t2829167398, ___StopReason_12)); }
	inline Nullable_1_t2017385689  get_StopReason_12() const { return ___StopReason_12; }
	inline Nullable_1_t2017385689 * get_address_of_StopReason_12() { return &___StopReason_12; }
	inline void set_StopReason_12(Nullable_1_t2017385689  value)
	{
		___StopReason_12 = value;
	}

	inline static int32_t get_offset_of_TitleId_13() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t2829167398, ___TitleId_13)); }
	inline String_t* get_TitleId_13() const { return ___TitleId_13; }
	inline String_t** get_address_of_TitleId_13() { return &___TitleId_13; }
	inline void set_TitleId_13(String_t* value)
	{
		___TitleId_13 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_13), value);
	}

	inline static int32_t get_offset_of_Region_14() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t2829167398, ___Region_14)); }
	inline String_t* get_Region_14() const { return ___Region_14; }
	inline String_t** get_address_of_Region_14() { return &___Region_14; }
	inline void set_Region_14(String_t* value)
	{
		___Region_14 = value;
		Il2CppCodeGenWriteBarrier((&___Region_14), value);
	}

	inline static int32_t get_offset_of_ServerBuildVersion_15() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t2829167398, ___ServerBuildVersion_15)); }
	inline String_t* get_ServerBuildVersion_15() const { return ___ServerBuildVersion_15; }
	inline String_t** get_address_of_ServerBuildVersion_15() { return &___ServerBuildVersion_15; }
	inline void set_ServerBuildVersion_15(String_t* value)
	{
		___ServerBuildVersion_15 = value;
		Il2CppCodeGenWriteBarrier((&___ServerBuildVersion_15), value);
	}

	inline static int32_t get_offset_of_ServerHost_16() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t2829167398, ___ServerHost_16)); }
	inline String_t* get_ServerHost_16() const { return ___ServerHost_16; }
	inline String_t** get_address_of_ServerHost_16() { return &___ServerHost_16; }
	inline void set_ServerHost_16(String_t* value)
	{
		___ServerHost_16 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHost_16), value);
	}

	inline static int32_t get_offset_of_InstanceId_17() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t2829167398, ___InstanceId_17)); }
	inline String_t* get_InstanceId_17() const { return ___InstanceId_17; }
	inline String_t** get_address_of_InstanceId_17() { return &___InstanceId_17; }
	inline void set_InstanceId_17(String_t* value)
	{
		___InstanceId_17 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceId_17), value);
	}

	inline static int32_t get_offset_of_InstanceProvider_18() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t2829167398, ___InstanceProvider_18)); }
	inline String_t* get_InstanceProvider_18() const { return ___InstanceProvider_18; }
	inline String_t** get_address_of_InstanceProvider_18() { return &___InstanceProvider_18; }
	inline void set_InstanceProvider_18(String_t* value)
	{
		___InstanceProvider_18 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceProvider_18), value);
	}

	inline static int32_t get_offset_of_InstanceType_19() { return static_cast<int32_t>(offsetof(GameServerHostStoppedEventData_t2829167398, ___InstanceType_19)); }
	inline String_t* get_InstanceType_19() const { return ___InstanceType_19; }
	inline String_t** get_address_of_InstanceType_19() { return &___InstanceType_19; }
	inline void set_InstanceType_19(String_t* value)
	{
		___InstanceType_19 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceType_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESERVERHOSTSTOPPEDEVENTDATA_T2829167398_H
#ifndef SESSIONENDEDEVENTDATA_T3285613182_H
#define SESSIONENDEDEVENTDATA_T3285613182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.SessionEndedEventData
struct  SessionEndedEventData_t3285613182  : public PlayStreamEventBase_t710997429
{
public:
	// System.DateTime PlayFab.PlayStreamModels.SessionEndedEventData::EndTime
	DateTime_t1281661550  ___EndTime_10;
	// System.String PlayFab.PlayStreamModels.SessionEndedEventData::UserId
	String_t* ___UserId_11;
	// System.Nullable`1<System.Double> PlayFab.PlayStreamModels.SessionEndedEventData::KilobytesWritten
	Nullable_1_t53833054  ___KilobytesWritten_12;
	// System.Double PlayFab.PlayStreamModels.SessionEndedEventData::SessionLengthMs
	double ___SessionLengthMs_13;
	// System.Boolean PlayFab.PlayStreamModels.SessionEndedEventData::Crashed
	bool ___Crashed_14;
	// System.String PlayFab.PlayStreamModels.SessionEndedEventData::TitleId
	String_t* ___TitleId_15;

public:
	inline static int32_t get_offset_of_EndTime_10() { return static_cast<int32_t>(offsetof(SessionEndedEventData_t3285613182, ___EndTime_10)); }
	inline DateTime_t1281661550  get_EndTime_10() const { return ___EndTime_10; }
	inline DateTime_t1281661550 * get_address_of_EndTime_10() { return &___EndTime_10; }
	inline void set_EndTime_10(DateTime_t1281661550  value)
	{
		___EndTime_10 = value;
	}

	inline static int32_t get_offset_of_UserId_11() { return static_cast<int32_t>(offsetof(SessionEndedEventData_t3285613182, ___UserId_11)); }
	inline String_t* get_UserId_11() const { return ___UserId_11; }
	inline String_t** get_address_of_UserId_11() { return &___UserId_11; }
	inline void set_UserId_11(String_t* value)
	{
		___UserId_11 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_11), value);
	}

	inline static int32_t get_offset_of_KilobytesWritten_12() { return static_cast<int32_t>(offsetof(SessionEndedEventData_t3285613182, ___KilobytesWritten_12)); }
	inline Nullable_1_t53833054  get_KilobytesWritten_12() const { return ___KilobytesWritten_12; }
	inline Nullable_1_t53833054 * get_address_of_KilobytesWritten_12() { return &___KilobytesWritten_12; }
	inline void set_KilobytesWritten_12(Nullable_1_t53833054  value)
	{
		___KilobytesWritten_12 = value;
	}

	inline static int32_t get_offset_of_SessionLengthMs_13() { return static_cast<int32_t>(offsetof(SessionEndedEventData_t3285613182, ___SessionLengthMs_13)); }
	inline double get_SessionLengthMs_13() const { return ___SessionLengthMs_13; }
	inline double* get_address_of_SessionLengthMs_13() { return &___SessionLengthMs_13; }
	inline void set_SessionLengthMs_13(double value)
	{
		___SessionLengthMs_13 = value;
	}

	inline static int32_t get_offset_of_Crashed_14() { return static_cast<int32_t>(offsetof(SessionEndedEventData_t3285613182, ___Crashed_14)); }
	inline bool get_Crashed_14() const { return ___Crashed_14; }
	inline bool* get_address_of_Crashed_14() { return &___Crashed_14; }
	inline void set_Crashed_14(bool value)
	{
		___Crashed_14 = value;
	}

	inline static int32_t get_offset_of_TitleId_15() { return static_cast<int32_t>(offsetof(SessionEndedEventData_t3285613182, ___TitleId_15)); }
	inline String_t* get_TitleId_15() const { return ___TitleId_15; }
	inline String_t** get_address_of_TitleId_15() { return &___TitleId_15; }
	inline void set_TitleId_15(String_t* value)
	{
		___TitleId_15 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONENDEDEVENTDATA_T3285613182_H
#ifndef SESSIONSTARTEDEVENTDATA_T2505317385_H
#define SESSIONSTARTEDEVENTDATA_T2505317385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.SessionStartedEventData
struct  SessionStartedEventData_t2505317385  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.SessionStartedEventData::TemporaryWriteUrl
	String_t* ___TemporaryWriteUrl_10;
	// System.String PlayFab.PlayStreamModels.SessionStartedEventData::TitleId
	String_t* ___TitleId_11;

public:
	inline static int32_t get_offset_of_TemporaryWriteUrl_10() { return static_cast<int32_t>(offsetof(SessionStartedEventData_t2505317385, ___TemporaryWriteUrl_10)); }
	inline String_t* get_TemporaryWriteUrl_10() const { return ___TemporaryWriteUrl_10; }
	inline String_t** get_address_of_TemporaryWriteUrl_10() { return &___TemporaryWriteUrl_10; }
	inline void set_TemporaryWriteUrl_10(String_t* value)
	{
		___TemporaryWriteUrl_10 = value;
		Il2CppCodeGenWriteBarrier((&___TemporaryWriteUrl_10), value);
	}

	inline static int32_t get_offset_of_TitleId_11() { return static_cast<int32_t>(offsetof(SessionStartedEventData_t2505317385, ___TitleId_11)); }
	inline String_t* get_TitleId_11() const { return ___TitleId_11; }
	inline String_t** get_address_of_TitleId_11() { return &___TitleId_11; }
	inline void set_TitleId_11(String_t* value)
	{
		___TitleId_11 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONSTARTEDEVENTDATA_T2505317385_H
#ifndef TITLEABORTEDTASKEVENTDATA_T238607223_H
#define TITLEABORTEDTASKEVENTDATA_T238607223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.TitleAbortedTaskEventData
struct  TitleAbortedTaskEventData_t238607223  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.TitleAbortedTaskEventData::TaskInstanceId
	String_t* ___TaskInstanceId_10;
	// System.String PlayFab.PlayStreamModels.TitleAbortedTaskEventData::UserId
	String_t* ___UserId_11;
	// System.String PlayFab.PlayStreamModels.TitleAbortedTaskEventData::DeveloperId
	String_t* ___DeveloperId_12;

public:
	inline static int32_t get_offset_of_TaskInstanceId_10() { return static_cast<int32_t>(offsetof(TitleAbortedTaskEventData_t238607223, ___TaskInstanceId_10)); }
	inline String_t* get_TaskInstanceId_10() const { return ___TaskInstanceId_10; }
	inline String_t** get_address_of_TaskInstanceId_10() { return &___TaskInstanceId_10; }
	inline void set_TaskInstanceId_10(String_t* value)
	{
		___TaskInstanceId_10 = value;
		Il2CppCodeGenWriteBarrier((&___TaskInstanceId_10), value);
	}

	inline static int32_t get_offset_of_UserId_11() { return static_cast<int32_t>(offsetof(TitleAbortedTaskEventData_t238607223, ___UserId_11)); }
	inline String_t* get_UserId_11() const { return ___UserId_11; }
	inline String_t** get_address_of_UserId_11() { return &___UserId_11; }
	inline void set_UserId_11(String_t* value)
	{
		___UserId_11 = value;
		Il2CppCodeGenWriteBarrier((&___UserId_11), value);
	}

	inline static int32_t get_offset_of_DeveloperId_12() { return static_cast<int32_t>(offsetof(TitleAbortedTaskEventData_t238607223, ___DeveloperId_12)); }
	inline String_t* get_DeveloperId_12() const { return ___DeveloperId_12; }
	inline String_t** get_address_of_DeveloperId_12() { return &___DeveloperId_12; }
	inline void set_DeveloperId_12(String_t* value)
	{
		___DeveloperId_12 = value;
		Il2CppCodeGenWriteBarrier((&___DeveloperId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLEABORTEDTASKEVENTDATA_T238607223_H
#ifndef GAMELOBBYENDEDEVENTDATA_T2139015717_H
#define GAMELOBBYENDEDEVENTDATA_T2139015717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.GameLobbyEndedEventData
struct  GameLobbyEndedEventData_t2139015717  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.GameLobbyEndedEventData::TitleId
	String_t* ___TitleId_10;
	// System.String PlayFab.PlayStreamModels.GameLobbyEndedEventData::GameMode
	String_t* ___GameMode_11;
	// System.String PlayFab.PlayStreamModels.GameLobbyEndedEventData::Region
	String_t* ___Region_12;
	// System.String PlayFab.PlayStreamModels.GameLobbyEndedEventData::ServerBuildVersion
	String_t* ___ServerBuildVersion_13;
	// System.String PlayFab.PlayStreamModels.GameLobbyEndedEventData::ServerHost
	String_t* ___ServerHost_14;
	// System.UInt32 PlayFab.PlayStreamModels.GameLobbyEndedEventData::ServerPort
	uint32_t ___ServerPort_15;
	// System.String PlayFab.PlayStreamModels.GameLobbyEndedEventData::ServerHostInstanceId
	String_t* ___ServerHostInstanceId_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> PlayFab.PlayStreamModels.GameLobbyEndedEventData::Tags
	Dictionary_2_t1409761793 * ___Tags_17;

public:
	inline static int32_t get_offset_of_TitleId_10() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t2139015717, ___TitleId_10)); }
	inline String_t* get_TitleId_10() const { return ___TitleId_10; }
	inline String_t** get_address_of_TitleId_10() { return &___TitleId_10; }
	inline void set_TitleId_10(String_t* value)
	{
		___TitleId_10 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_10), value);
	}

	inline static int32_t get_offset_of_GameMode_11() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t2139015717, ___GameMode_11)); }
	inline String_t* get_GameMode_11() const { return ___GameMode_11; }
	inline String_t** get_address_of_GameMode_11() { return &___GameMode_11; }
	inline void set_GameMode_11(String_t* value)
	{
		___GameMode_11 = value;
		Il2CppCodeGenWriteBarrier((&___GameMode_11), value);
	}

	inline static int32_t get_offset_of_Region_12() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t2139015717, ___Region_12)); }
	inline String_t* get_Region_12() const { return ___Region_12; }
	inline String_t** get_address_of_Region_12() { return &___Region_12; }
	inline void set_Region_12(String_t* value)
	{
		___Region_12 = value;
		Il2CppCodeGenWriteBarrier((&___Region_12), value);
	}

	inline static int32_t get_offset_of_ServerBuildVersion_13() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t2139015717, ___ServerBuildVersion_13)); }
	inline String_t* get_ServerBuildVersion_13() const { return ___ServerBuildVersion_13; }
	inline String_t** get_address_of_ServerBuildVersion_13() { return &___ServerBuildVersion_13; }
	inline void set_ServerBuildVersion_13(String_t* value)
	{
		___ServerBuildVersion_13 = value;
		Il2CppCodeGenWriteBarrier((&___ServerBuildVersion_13), value);
	}

	inline static int32_t get_offset_of_ServerHost_14() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t2139015717, ___ServerHost_14)); }
	inline String_t* get_ServerHost_14() const { return ___ServerHost_14; }
	inline String_t** get_address_of_ServerHost_14() { return &___ServerHost_14; }
	inline void set_ServerHost_14(String_t* value)
	{
		___ServerHost_14 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHost_14), value);
	}

	inline static int32_t get_offset_of_ServerPort_15() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t2139015717, ___ServerPort_15)); }
	inline uint32_t get_ServerPort_15() const { return ___ServerPort_15; }
	inline uint32_t* get_address_of_ServerPort_15() { return &___ServerPort_15; }
	inline void set_ServerPort_15(uint32_t value)
	{
		___ServerPort_15 = value;
	}

	inline static int32_t get_offset_of_ServerHostInstanceId_16() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t2139015717, ___ServerHostInstanceId_16)); }
	inline String_t* get_ServerHostInstanceId_16() const { return ___ServerHostInstanceId_16; }
	inline String_t** get_address_of_ServerHostInstanceId_16() { return &___ServerHostInstanceId_16; }
	inline void set_ServerHostInstanceId_16(String_t* value)
	{
		___ServerHostInstanceId_16 = value;
		Il2CppCodeGenWriteBarrier((&___ServerHostInstanceId_16), value);
	}

	inline static int32_t get_offset_of_Tags_17() { return static_cast<int32_t>(offsetof(GameLobbyEndedEventData_t2139015717, ___Tags_17)); }
	inline Dictionary_2_t1409761793 * get_Tags_17() const { return ___Tags_17; }
	inline Dictionary_2_t1409761793 ** get_address_of_Tags_17() { return &___Tags_17; }
	inline void set_Tags_17(Dictionary_2_t1409761793 * value)
	{
		___Tags_17 = value;
		Il2CppCodeGenWriteBarrier((&___Tags_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMELOBBYENDEDEVENTDATA_T2139015717_H
#ifndef PLAYERPHOTONSESSIONAUTHENTICATEDEVENTDATA_T1381070286_H
#define PLAYERPHOTONSESSIONAUTHENTICATEDEVENTDATA_T1381070286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayFab.PlayStreamModels.PlayerPhotonSessionAuthenticatedEventData
struct  PlayerPhotonSessionAuthenticatedEventData_t1381070286  : public PlayStreamEventBase_t710997429
{
public:
	// System.String PlayFab.PlayStreamModels.PlayerPhotonSessionAuthenticatedEventData::PhotonApplicationId
	String_t* ___PhotonApplicationId_10;
	// System.Nullable`1<PlayFab.PlayStreamModels.PhotonServicesEnum> PlayFab.PlayStreamModels.PlayerPhotonSessionAuthenticatedEventData::PhotonApplicationType
	Nullable_1_t3419127345  ___PhotonApplicationType_11;
	// System.String PlayFab.PlayStreamModels.PlayerPhotonSessionAuthenticatedEventData::TitleId
	String_t* ___TitleId_12;

public:
	inline static int32_t get_offset_of_PhotonApplicationId_10() { return static_cast<int32_t>(offsetof(PlayerPhotonSessionAuthenticatedEventData_t1381070286, ___PhotonApplicationId_10)); }
	inline String_t* get_PhotonApplicationId_10() const { return ___PhotonApplicationId_10; }
	inline String_t** get_address_of_PhotonApplicationId_10() { return &___PhotonApplicationId_10; }
	inline void set_PhotonApplicationId_10(String_t* value)
	{
		___PhotonApplicationId_10 = value;
		Il2CppCodeGenWriteBarrier((&___PhotonApplicationId_10), value);
	}

	inline static int32_t get_offset_of_PhotonApplicationType_11() { return static_cast<int32_t>(offsetof(PlayerPhotonSessionAuthenticatedEventData_t1381070286, ___PhotonApplicationType_11)); }
	inline Nullable_1_t3419127345  get_PhotonApplicationType_11() const { return ___PhotonApplicationType_11; }
	inline Nullable_1_t3419127345 * get_address_of_PhotonApplicationType_11() { return &___PhotonApplicationType_11; }
	inline void set_PhotonApplicationType_11(Nullable_1_t3419127345  value)
	{
		___PhotonApplicationType_11 = value;
	}

	inline static int32_t get_offset_of_TitleId_12() { return static_cast<int32_t>(offsetof(PlayerPhotonSessionAuthenticatedEventData_t1381070286, ___TitleId_12)); }
	inline String_t* get_TitleId_12() const { return ___TitleId_12; }
	inline String_t** get_address_of_TitleId_12() { return &___TitleId_12; }
	inline void set_TitleId_12(String_t* value)
	{
		___TitleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___TitleId_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERPHOTONSESSIONAUTHENTICATEDEVENTDATA_T1381070286_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2800 = { sizeof (PlayerPhotonSessionAuthenticatedEventData_t1381070286), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2800[3] = 
{
	PlayerPhotonSessionAuthenticatedEventData_t1381070286::get_offset_of_PhotonApplicationId_10(),
	PlayerPhotonSessionAuthenticatedEventData_t1381070286::get_offset_of_PhotonApplicationType_11(),
	PlayerPhotonSessionAuthenticatedEventData_t1381070286::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2801 = { sizeof (AuthTokenValidatedEventData_t873836589), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2801[2] = 
{
	AuthTokenValidatedEventData_t873836589::get_offset_of_Token_10(),
	AuthTokenValidatedEventData_t873836589::get_offset_of_TitleId_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2802 = { sizeof (PlayerAdCampaignAttributionEventData_t459900559), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2802[2] = 
{
	PlayerAdCampaignAttributionEventData_t459900559::get_offset_of_CampaignId_10(),
	PlayerAdCampaignAttributionEventData_t459900559::get_offset_of_TitleId_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2803 = { sizeof (PlayerAdClosedEventData_t2415992495), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2803[6] = 
{
	PlayerAdClosedEventData_t2415992495::get_offset_of_AdPlacementId_10(),
	PlayerAdClosedEventData_t2415992495::get_offset_of_AdPlacementName_11(),
	PlayerAdClosedEventData_t2415992495::get_offset_of_RewardId_12(),
	PlayerAdClosedEventData_t2415992495::get_offset_of_RewardName_13(),
	PlayerAdClosedEventData_t2415992495::get_offset_of_AdUnit_14(),
	PlayerAdClosedEventData_t2415992495::get_offset_of_TitleId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2804 = { sizeof (PlayerAddedTitleEventData_t2584788120), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2804[4] = 
{
	PlayerAddedTitleEventData_t2584788120::get_offset_of_Platform_10(),
	PlayerAddedTitleEventData_t2584788120::get_offset_of_PlatformUserId_11(),
	PlayerAddedTitleEventData_t2584788120::get_offset_of_DisplayName_12(),
	PlayerAddedTitleEventData_t2584788120::get_offset_of_TitleId_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2805 = { sizeof (PlayerAdEndedEventData_t2307726410), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2805[6] = 
{
	PlayerAdEndedEventData_t2307726410::get_offset_of_AdPlacementId_10(),
	PlayerAdEndedEventData_t2307726410::get_offset_of_AdPlacementName_11(),
	PlayerAdEndedEventData_t2307726410::get_offset_of_RewardId_12(),
	PlayerAdEndedEventData_t2307726410::get_offset_of_RewardName_13(),
	PlayerAdEndedEventData_t2307726410::get_offset_of_AdUnit_14(),
	PlayerAdEndedEventData_t2307726410::get_offset_of_TitleId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2806 = { sizeof (PlayerAdOpenedEventData_t27651999), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2806[6] = 
{
	PlayerAdOpenedEventData_t27651999::get_offset_of_AdPlacementId_10(),
	PlayerAdOpenedEventData_t27651999::get_offset_of_AdPlacementName_11(),
	PlayerAdOpenedEventData_t27651999::get_offset_of_RewardId_12(),
	PlayerAdOpenedEventData_t27651999::get_offset_of_RewardName_13(),
	PlayerAdOpenedEventData_t27651999::get_offset_of_AdUnit_14(),
	PlayerAdOpenedEventData_t27651999::get_offset_of_TitleId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2807 = { sizeof (PlayerAdRewardedEventData_t941375686), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2807[8] = 
{
	PlayerAdRewardedEventData_t941375686::get_offset_of_ViewsRemainingThisPeriod_10(),
	PlayerAdRewardedEventData_t941375686::get_offset_of_ActionGroupDebugMessages_11(),
	PlayerAdRewardedEventData_t941375686::get_offset_of_AdPlacementId_12(),
	PlayerAdRewardedEventData_t941375686::get_offset_of_AdPlacementName_13(),
	PlayerAdRewardedEventData_t941375686::get_offset_of_RewardId_14(),
	PlayerAdRewardedEventData_t941375686::get_offset_of_RewardName_15(),
	PlayerAdRewardedEventData_t941375686::get_offset_of_AdUnit_16(),
	PlayerAdRewardedEventData_t941375686::get_offset_of_TitleId_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2808 = { sizeof (PlayerAdRewardValuedEventData_t680421006), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2808[7] = 
{
	PlayerAdRewardValuedEventData_t680421006::get_offset_of_RevenueShare_10(),
	PlayerAdRewardValuedEventData_t680421006::get_offset_of_AdPlacementId_11(),
	PlayerAdRewardValuedEventData_t680421006::get_offset_of_AdPlacementName_12(),
	PlayerAdRewardValuedEventData_t680421006::get_offset_of_RewardId_13(),
	PlayerAdRewardValuedEventData_t680421006::get_offset_of_RewardName_14(),
	PlayerAdRewardValuedEventData_t680421006::get_offset_of_AdUnit_15(),
	PlayerAdRewardValuedEventData_t680421006::get_offset_of_TitleId_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2809 = { sizeof (PlayerAdStartedEventData_t2822137282), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2809[6] = 
{
	PlayerAdStartedEventData_t2822137282::get_offset_of_AdPlacementId_10(),
	PlayerAdStartedEventData_t2822137282::get_offset_of_AdPlacementName_11(),
	PlayerAdStartedEventData_t2822137282::get_offset_of_RewardId_12(),
	PlayerAdStartedEventData_t2822137282::get_offset_of_RewardName_13(),
	PlayerAdStartedEventData_t2822137282::get_offset_of_AdUnit_14(),
	PlayerAdStartedEventData_t2822137282::get_offset_of_TitleId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2810 = { sizeof (PlayerBannedEventData_t2607401603), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2810[5] = 
{
	PlayerBannedEventData_t2607401603::get_offset_of_BanExpiration_10(),
	PlayerBannedEventData_t2607401603::get_offset_of_PermanentBan_11(),
	PlayerBannedEventData_t2607401603::get_offset_of_BanId_12(),
	PlayerBannedEventData_t2607401603::get_offset_of_BanReason_13(),
	PlayerBannedEventData_t2607401603::get_offset_of_TitleId_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2811 = { sizeof (PlayerChangedAvatarEventData_t1317131647), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2811[3] = 
{
	PlayerChangedAvatarEventData_t1317131647::get_offset_of_ImageUrl_10(),
	PlayerChangedAvatarEventData_t1317131647::get_offset_of_PreviousImageUrl_11(),
	PlayerChangedAvatarEventData_t1317131647::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2812 = { sizeof (PlayerCompletedPasswordResetEventData_t1989099368), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2812[9] = 
{
	PlayerCompletedPasswordResetEventData_t1989099368::get_offset_of_RecoveryEmailAddress_10(),
	PlayerCompletedPasswordResetEventData_t1989099368::get_offset_of_PasswordResetId_11(),
	PlayerCompletedPasswordResetEventData_t1989099368::get_offset_of_InitiatedFromIPAddress_12(),
	PlayerCompletedPasswordResetEventData_t1989099368::get_offset_of_InitiationTimestamp_13(),
	PlayerCompletedPasswordResetEventData_t1989099368::get_offset_of_InitiatedBy_14(),
	PlayerCompletedPasswordResetEventData_t1989099368::get_offset_of_LinkExpiration_15(),
	PlayerCompletedPasswordResetEventData_t1989099368::get_offset_of_CompletedFromIPAddress_16(),
	PlayerCompletedPasswordResetEventData_t1989099368::get_offset_of_CompletionTimestamp_17(),
	PlayerCompletedPasswordResetEventData_t1989099368::get_offset_of_TitleId_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2813 = { sizeof (PlayerConsumedItemEventData_t230557661), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2813[6] = 
{
	PlayerConsumedItemEventData_t230557661::get_offset_of_ItemId_10(),
	PlayerConsumedItemEventData_t230557661::get_offset_of_CatalogVersion_11(),
	PlayerConsumedItemEventData_t230557661::get_offset_of_ItemInstanceId_12(),
	PlayerConsumedItemEventData_t230557661::get_offset_of_PreviousUsesRemaining_13(),
	PlayerConsumedItemEventData_t230557661::get_offset_of_UsesRemaining_14(),
	PlayerConsumedItemEventData_t230557661::get_offset_of_TitleId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2814 = { sizeof (PlayerCreatedEventData_t2351616928), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2814[3] = 
{
	PlayerCreatedEventData_t2351616928::get_offset_of_Created_10(),
	PlayerCreatedEventData_t2351616928::get_offset_of_PublisherId_11(),
	PlayerCreatedEventData_t2351616928::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2815 = { sizeof (PlayerDisplayNameChangedEventData_t2294510825), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2815[3] = 
{
	PlayerDisplayNameChangedEventData_t2294510825::get_offset_of_PreviousDisplayName_10(),
	PlayerDisplayNameChangedEventData_t2294510825::get_offset_of_DisplayName_11(),
	PlayerDisplayNameChangedEventData_t2294510825::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2816 = { sizeof (PlayerExecutedCloudScriptEventData_t2233726154), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2816[3] = 
{
	PlayerExecutedCloudScriptEventData_t2233726154::get_offset_of_FunctionName_10(),
	PlayerExecutedCloudScriptEventData_t2233726154::get_offset_of_CloudScriptExecutionResult_11(),
	PlayerExecutedCloudScriptEventData_t2233726154::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2817 = { sizeof (PlayerInventoryItemAddedEventData_t320654039), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2817[11] = 
{
	PlayerInventoryItemAddedEventData_t320654039::get_offset_of_InstanceId_10(),
	PlayerInventoryItemAddedEventData_t320654039::get_offset_of_ItemId_11(),
	PlayerInventoryItemAddedEventData_t320654039::get_offset_of_DisplayName_12(),
	PlayerInventoryItemAddedEventData_t320654039::get_offset_of_Class_13(),
	PlayerInventoryItemAddedEventData_t320654039::get_offset_of_CatalogVersion_14(),
	PlayerInventoryItemAddedEventData_t320654039::get_offset_of_Expiration_15(),
	PlayerInventoryItemAddedEventData_t320654039::get_offset_of_RemainingUses_16(),
	PlayerInventoryItemAddedEventData_t320654039::get_offset_of_Annotation_17(),
	PlayerInventoryItemAddedEventData_t320654039::get_offset_of_CouponCode_18(),
	PlayerInventoryItemAddedEventData_t320654039::get_offset_of_BundleContents_19(),
	PlayerInventoryItemAddedEventData_t320654039::get_offset_of_TitleId_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2818 = { sizeof (PlayerJoinedLobbyEventData_t236234889), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2818[8] = 
{
	PlayerJoinedLobbyEventData_t236234889::get_offset_of_LobbyId_10(),
	PlayerJoinedLobbyEventData_t236234889::get_offset_of_GameMode_11(),
	PlayerJoinedLobbyEventData_t236234889::get_offset_of_Region_12(),
	PlayerJoinedLobbyEventData_t236234889::get_offset_of_ServerBuildVersion_13(),
	PlayerJoinedLobbyEventData_t236234889::get_offset_of_ServerHost_14(),
	PlayerJoinedLobbyEventData_t236234889::get_offset_of_ServerPort_15(),
	PlayerJoinedLobbyEventData_t236234889::get_offset_of_ServerHostInstanceId_16(),
	PlayerJoinedLobbyEventData_t236234889::get_offset_of_TitleId_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2819 = { sizeof (PlayerLeftLobbyEventData_t206762372), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2819[8] = 
{
	PlayerLeftLobbyEventData_t206762372::get_offset_of_LobbyId_10(),
	PlayerLeftLobbyEventData_t206762372::get_offset_of_GameMode_11(),
	PlayerLeftLobbyEventData_t206762372::get_offset_of_Region_12(),
	PlayerLeftLobbyEventData_t206762372::get_offset_of_ServerBuildVersion_13(),
	PlayerLeftLobbyEventData_t206762372::get_offset_of_ServerHost_14(),
	PlayerLeftLobbyEventData_t206762372::get_offset_of_ServerPort_15(),
	PlayerLeftLobbyEventData_t206762372::get_offset_of_ServerHostInstanceId_16(),
	PlayerLeftLobbyEventData_t206762372::get_offset_of_TitleId_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2820 = { sizeof (PlayerLinkedAccountEventData_t2115095819), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2820[5] = 
{
	PlayerLinkedAccountEventData_t2115095819::get_offset_of_Origination_10(),
	PlayerLinkedAccountEventData_t2115095819::get_offset_of_OriginationUserId_11(),
	PlayerLinkedAccountEventData_t2115095819::get_offset_of_Username_12(),
	PlayerLinkedAccountEventData_t2115095819::get_offset_of_Email_13(),
	PlayerLinkedAccountEventData_t2115095819::get_offset_of_TitleId_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2821 = { sizeof (PlayerLoggedInEventData_t1713482707), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2821[4] = 
{
	PlayerLoggedInEventData_t1713482707::get_offset_of_Platform_10(),
	PlayerLoggedInEventData_t1713482707::get_offset_of_PlatformUserId_11(),
	PlayerLoggedInEventData_t1713482707::get_offset_of_Location_12(),
	PlayerLoggedInEventData_t1713482707::get_offset_of_TitleId_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2822 = { sizeof (PlayerMatchedWithLobbyEventData_t559662046), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2822[8] = 
{
	PlayerMatchedWithLobbyEventData_t559662046::get_offset_of_LobbyId_10(),
	PlayerMatchedWithLobbyEventData_t559662046::get_offset_of_GameMode_11(),
	PlayerMatchedWithLobbyEventData_t559662046::get_offset_of_Region_12(),
	PlayerMatchedWithLobbyEventData_t559662046::get_offset_of_ServerBuildVersion_13(),
	PlayerMatchedWithLobbyEventData_t559662046::get_offset_of_ServerHost_14(),
	PlayerMatchedWithLobbyEventData_t559662046::get_offset_of_ServerPort_15(),
	PlayerMatchedWithLobbyEventData_t559662046::get_offset_of_ServerHostInstanceId_16(),
	PlayerMatchedWithLobbyEventData_t559662046::get_offset_of_TitleId_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2823 = { sizeof (PlayerPasswordResetLinkSentEventData_t783300454), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2823[6] = 
{
	PlayerPasswordResetLinkSentEventData_t783300454::get_offset_of_RecoveryEmailAddress_10(),
	PlayerPasswordResetLinkSentEventData_t783300454::get_offset_of_InitiatedFromIPAddress_11(),
	PlayerPasswordResetLinkSentEventData_t783300454::get_offset_of_InitiatedBy_12(),
	PlayerPasswordResetLinkSentEventData_t783300454::get_offset_of_PasswordResetId_13(),
	PlayerPasswordResetLinkSentEventData_t783300454::get_offset_of_LinkExpiration_14(),
	PlayerPasswordResetLinkSentEventData_t783300454::get_offset_of_TitleId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2824 = { sizeof (PlayerRankedOnLeaderboardVersionEventData_t1777908984), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2824[6] = 
{
	PlayerRankedOnLeaderboardVersionEventData_t1777908984::get_offset_of_Rank_10(),
	PlayerRankedOnLeaderboardVersionEventData_t1777908984::get_offset_of_Value_11(),
	PlayerRankedOnLeaderboardVersionEventData_t1777908984::get_offset_of_Version_12(),
	PlayerRankedOnLeaderboardVersionEventData_t1777908984::get_offset_of_VersionChangeBehavior_13(),
	PlayerRankedOnLeaderboardVersionEventData_t1777908984::get_offset_of_LeaderboardSource_14(),
	PlayerRankedOnLeaderboardVersionEventData_t1777908984::get_offset_of_TitleId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2825 = { sizeof (PlayerRealMoneyPurchaseEventData_t1385406886), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2825[9] = 
{
	PlayerRealMoneyPurchaseEventData_t1385406886::get_offset_of_PaymentProvider_10(),
	PlayerRealMoneyPurchaseEventData_t1385406886::get_offset_of_PaymentType_11(),
	PlayerRealMoneyPurchaseEventData_t1385406886::get_offset_of_OrderTotal_12(),
	PlayerRealMoneyPurchaseEventData_t1385406886::get_offset_of_TransactionTotal_13(),
	PlayerRealMoneyPurchaseEventData_t1385406886::get_offset_of_TransactionCurrency_14(),
	PlayerRealMoneyPurchaseEventData_t1385406886::get_offset_of_OrderId_15(),
	PlayerRealMoneyPurchaseEventData_t1385406886::get_offset_of_TransactionId_16(),
	PlayerRealMoneyPurchaseEventData_t1385406886::get_offset_of_PurchasedProduct_17(),
	PlayerRealMoneyPurchaseEventData_t1385406886::get_offset_of_TitleId_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2826 = { sizeof (PlayerReceiptValidationEventData_t2916042766), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2826[6] = 
{
	PlayerReceiptValidationEventData_t2916042766::get_offset_of_PaymentProvider_10(),
	PlayerReceiptValidationEventData_t2916042766::get_offset_of_PaymentType_11(),
	PlayerReceiptValidationEventData_t2916042766::get_offset_of_ReceiptContent_12(),
	PlayerReceiptValidationEventData_t2916042766::get_offset_of_Valid_13(),
	PlayerReceiptValidationEventData_t2916042766::get_offset_of_Error_14(),
	PlayerReceiptValidationEventData_t2916042766::get_offset_of_TitleId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2827 = { sizeof (PlayerRedeemedCouponEventData_t98862066), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2827[3] = 
{
	PlayerRedeemedCouponEventData_t98862066::get_offset_of_CouponCode_10(),
	PlayerRedeemedCouponEventData_t98862066::get_offset_of_GrantedInventoryItems_11(),
	PlayerRedeemedCouponEventData_t98862066::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2828 = { sizeof (PlayerRegisteredPushNotificationsEventData_t564468292), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2828[3] = 
{
	PlayerRegisteredPushNotificationsEventData_t564468292::get_offset_of_Platform_10(),
	PlayerRegisteredPushNotificationsEventData_t564468292::get_offset_of_DeviceToken_11(),
	PlayerRegisteredPushNotificationsEventData_t564468292::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2829 = { sizeof (PlayerRemovedTitleEventData_t400522908), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2829[1] = 
{
	PlayerRemovedTitleEventData_t400522908::get_offset_of_TitleId_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2830 = { sizeof (PlayerReportedAsAbusiveEventData_t680407343), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2830[3] = 
{
	PlayerReportedAsAbusiveEventData_t680407343::get_offset_of_ReportedByPlayer_10(),
	PlayerReportedAsAbusiveEventData_t680407343::get_offset_of_Comment_11(),
	PlayerReportedAsAbusiveEventData_t680407343::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2831 = { sizeof (PlayerSetProfilePropertyEventData_t3596338607), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2831[3] = 
{
	PlayerSetProfilePropertyEventData_t3596338607::get_offset_of_Property_10(),
	PlayerSetProfilePropertyEventData_t3596338607::get_offset_of_Value_11(),
	PlayerSetProfilePropertyEventData_t3596338607::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2832 = { sizeof (PlayerStatisticChangedEventData_t3207156102), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2832[7] = 
{
	PlayerStatisticChangedEventData_t3207156102::get_offset_of_StatisticName_10(),
	PlayerStatisticChangedEventData_t3207156102::get_offset_of_StatisticId_11(),
	PlayerStatisticChangedEventData_t3207156102::get_offset_of_Version_12(),
	PlayerStatisticChangedEventData_t3207156102::get_offset_of_StatisticValue_13(),
	PlayerStatisticChangedEventData_t3207156102::get_offset_of_StatisticPreviousValue_14(),
	PlayerStatisticChangedEventData_t3207156102::get_offset_of_AggregationMethod_15(),
	PlayerStatisticChangedEventData_t3207156102::get_offset_of_TitleId_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2833 = { sizeof (PlayerStatisticDeletedEventData_t1354481889), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2833[5] = 
{
	PlayerStatisticDeletedEventData_t1354481889::get_offset_of_StatisticName_10(),
	PlayerStatisticDeletedEventData_t1354481889::get_offset_of_StatisticId_11(),
	PlayerStatisticDeletedEventData_t1354481889::get_offset_of_Version_12(),
	PlayerStatisticDeletedEventData_t1354481889::get_offset_of_StatisticPreviousValue_13(),
	PlayerStatisticDeletedEventData_t1354481889::get_offset_of_TitleId_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2834 = { sizeof (PlayerTagAddedEventData_t2409993340), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2834[3] = 
{
	PlayerTagAddedEventData_t2409993340::get_offset_of_TagName_10(),
	PlayerTagAddedEventData_t2409993340::get_offset_of_Namespace_11(),
	PlayerTagAddedEventData_t2409993340::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2835 = { sizeof (PlayerTagRemovedEventData_t4070892819), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2835[3] = 
{
	PlayerTagRemovedEventData_t4070892819::get_offset_of_TagName_10(),
	PlayerTagRemovedEventData_t4070892819::get_offset_of_Namespace_11(),
	PlayerTagRemovedEventData_t4070892819::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2836 = { sizeof (PlayerTriggeredActionExecutedCloudScriptEventData_t3930448696), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2836[6] = 
{
	PlayerTriggeredActionExecutedCloudScriptEventData_t3930448696::get_offset_of_FunctionName_10(),
	PlayerTriggeredActionExecutedCloudScriptEventData_t3930448696::get_offset_of_CloudScriptExecutionResult_11(),
	PlayerTriggeredActionExecutedCloudScriptEventData_t3930448696::get_offset_of_TriggeringEventData_12(),
	PlayerTriggeredActionExecutedCloudScriptEventData_t3930448696::get_offset_of_TriggeringEventName_13(),
	PlayerTriggeredActionExecutedCloudScriptEventData_t3930448696::get_offset_of_TriggeringPlayer_14(),
	PlayerTriggeredActionExecutedCloudScriptEventData_t3930448696::get_offset_of_TitleId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2837 = { sizeof (PlayerUnlinkedAccountEventData_t1327848036), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2837[3] = 
{
	PlayerUnlinkedAccountEventData_t1327848036::get_offset_of_Origination_10(),
	PlayerUnlinkedAccountEventData_t1327848036::get_offset_of_OriginationUserId_11(),
	PlayerUnlinkedAccountEventData_t1327848036::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2838 = { sizeof (PlayerUpdatedContactEmailEventData_t345450517), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2838[4] = 
{
	PlayerUpdatedContactEmailEventData_t345450517::get_offset_of_EmailName_10(),
	PlayerUpdatedContactEmailEventData_t345450517::get_offset_of_PreviousEmailAddress_11(),
	PlayerUpdatedContactEmailEventData_t345450517::get_offset_of_NewEmailAddress_12(),
	PlayerUpdatedContactEmailEventData_t345450517::get_offset_of_TitleId_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2839 = { sizeof (PlayerVCPurchaseEventData_t3475333803), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2839[8] = 
{
	PlayerVCPurchaseEventData_t3475333803::get_offset_of_PurchaseId_10(),
	PlayerVCPurchaseEventData_t3475333803::get_offset_of_ItemId_11(),
	PlayerVCPurchaseEventData_t3475333803::get_offset_of_CatalogVersion_12(),
	PlayerVCPurchaseEventData_t3475333803::get_offset_of_StoreId_13(),
	PlayerVCPurchaseEventData_t3475333803::get_offset_of_CurrencyCode_14(),
	PlayerVCPurchaseEventData_t3475333803::get_offset_of_Quantity_15(),
	PlayerVCPurchaseEventData_t3475333803::get_offset_of_UnitPrice_16(),
	PlayerVCPurchaseEventData_t3475333803::get_offset_of_TitleId_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2840 = { sizeof (PlayerVerifiedContactEmailEventData_t2829647043), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2840[3] = 
{
	PlayerVerifiedContactEmailEventData_t2829647043::get_offset_of_EmailName_10(),
	PlayerVerifiedContactEmailEventData_t2829647043::get_offset_of_EmailAddress_11(),
	PlayerVerifiedContactEmailEventData_t2829647043::get_offset_of_TitleId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2841 = { sizeof (PlayerVirtualCurrencyBalanceChangedEventData_t457368683), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2841[5] = 
{
	PlayerVirtualCurrencyBalanceChangedEventData_t457368683::get_offset_of_VirtualCurrencyName_10(),
	PlayerVirtualCurrencyBalanceChangedEventData_t457368683::get_offset_of_VirtualCurrencyBalance_11(),
	PlayerVirtualCurrencyBalanceChangedEventData_t457368683::get_offset_of_VirtualCurrencyPreviousBalance_12(),
	PlayerVirtualCurrencyBalanceChangedEventData_t457368683::get_offset_of_OrderId_13(),
	PlayerVirtualCurrencyBalanceChangedEventData_t457368683::get_offset_of_TitleId_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2842 = { sizeof (SentEmailEventData_t3037998575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2842[8] = 
{
	SentEmailEventData_t3037998575::get_offset_of_EmailTemplateId_10(),
	SentEmailEventData_t3037998575::get_offset_of_EmailTemplateName_11(),
	SentEmailEventData_t3037998575::get_offset_of_EmailTemplateType_12(),
	SentEmailEventData_t3037998575::get_offset_of_Success_13(),
	SentEmailEventData_t3037998575::get_offset_of_ErrorName_14(),
	SentEmailEventData_t3037998575::get_offset_of_ErrorMessage_15(),
	SentEmailEventData_t3037998575::get_offset_of_EmailName_16(),
	SentEmailEventData_t3037998575::get_offset_of_TitleId_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2843 = { sizeof (GameLobbyEndedEventData_t2139015717), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2843[8] = 
{
	GameLobbyEndedEventData_t2139015717::get_offset_of_TitleId_10(),
	GameLobbyEndedEventData_t2139015717::get_offset_of_GameMode_11(),
	GameLobbyEndedEventData_t2139015717::get_offset_of_Region_12(),
	GameLobbyEndedEventData_t2139015717::get_offset_of_ServerBuildVersion_13(),
	GameLobbyEndedEventData_t2139015717::get_offset_of_ServerHost_14(),
	GameLobbyEndedEventData_t2139015717::get_offset_of_ServerPort_15(),
	GameLobbyEndedEventData_t2139015717::get_offset_of_ServerHostInstanceId_16(),
	GameLobbyEndedEventData_t2139015717::get_offset_of_Tags_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2844 = { sizeof (GameLobbyStartedEventData_t667510670), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2844[12] = 
{
	GameLobbyStartedEventData_t667510670::get_offset_of_GameServerData_10(),
	GameLobbyStartedEventData_t667510670::get_offset_of_CustomCommandLineData_11(),
	GameLobbyStartedEventData_t667510670::get_offset_of_CustomMatchmakerEndpoint_12(),
	GameLobbyStartedEventData_t667510670::get_offset_of_MaxPlayers_13(),
	GameLobbyStartedEventData_t667510670::get_offset_of_TitleId_14(),
	GameLobbyStartedEventData_t667510670::get_offset_of_GameMode_15(),
	GameLobbyStartedEventData_t667510670::get_offset_of_Region_16(),
	GameLobbyStartedEventData_t667510670::get_offset_of_ServerBuildVersion_17(),
	GameLobbyStartedEventData_t667510670::get_offset_of_ServerHost_18(),
	GameLobbyStartedEventData_t667510670::get_offset_of_ServerPort_19(),
	GameLobbyStartedEventData_t667510670::get_offset_of_ServerHostInstanceId_20(),
	GameLobbyStartedEventData_t667510670::get_offset_of_Tags_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2845 = { sizeof (GameServerHostStartedEventData_t1617646090), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2845[8] = 
{
	GameServerHostStartedEventData_t1617646090::get_offset_of_StartTime_10(),
	GameServerHostStartedEventData_t1617646090::get_offset_of_TitleId_11(),
	GameServerHostStartedEventData_t1617646090::get_offset_of_Region_12(),
	GameServerHostStartedEventData_t1617646090::get_offset_of_ServerBuildVersion_13(),
	GameServerHostStartedEventData_t1617646090::get_offset_of_ServerHost_14(),
	GameServerHostStartedEventData_t1617646090::get_offset_of_InstanceId_15(),
	GameServerHostStartedEventData_t1617646090::get_offset_of_InstanceProvider_16(),
	GameServerHostStartedEventData_t1617646090::get_offset_of_InstanceType_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2846 = { sizeof (GameServerHostStoppedEventData_t2829167398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2846[10] = 
{
	GameServerHostStoppedEventData_t2829167398::get_offset_of_StartTime_10(),
	GameServerHostStoppedEventData_t2829167398::get_offset_of_StopTime_11(),
	GameServerHostStoppedEventData_t2829167398::get_offset_of_StopReason_12(),
	GameServerHostStoppedEventData_t2829167398::get_offset_of_TitleId_13(),
	GameServerHostStoppedEventData_t2829167398::get_offset_of_Region_14(),
	GameServerHostStoppedEventData_t2829167398::get_offset_of_ServerBuildVersion_15(),
	GameServerHostStoppedEventData_t2829167398::get_offset_of_ServerHost_16(),
	GameServerHostStoppedEventData_t2829167398::get_offset_of_InstanceId_17(),
	GameServerHostStoppedEventData_t2829167398::get_offset_of_InstanceProvider_18(),
	GameServerHostStoppedEventData_t2829167398::get_offset_of_InstanceType_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2847 = { sizeof (SessionEndedEventData_t3285613182), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2847[6] = 
{
	SessionEndedEventData_t3285613182::get_offset_of_EndTime_10(),
	SessionEndedEventData_t3285613182::get_offset_of_UserId_11(),
	SessionEndedEventData_t3285613182::get_offset_of_KilobytesWritten_12(),
	SessionEndedEventData_t3285613182::get_offset_of_SessionLengthMs_13(),
	SessionEndedEventData_t3285613182::get_offset_of_Crashed_14(),
	SessionEndedEventData_t3285613182::get_offset_of_TitleId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2848 = { sizeof (SessionStartedEventData_t2505317385), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2848[2] = 
{
	SessionStartedEventData_t2505317385::get_offset_of_TemporaryWriteUrl_10(),
	SessionStartedEventData_t2505317385::get_offset_of_TitleId_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2849 = { sizeof (TitleAbortedTaskEventData_t238607223), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2849[3] = 
{
	TitleAbortedTaskEventData_t238607223::get_offset_of_TaskInstanceId_10(),
	TitleAbortedTaskEventData_t238607223::get_offset_of_UserId_11(),
	TitleAbortedTaskEventData_t238607223::get_offset_of_DeveloperId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2850 = { sizeof (TitleAddedCloudScriptEventData_t3060120679), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2850[6] = 
{
	TitleAddedCloudScriptEventData_t3060120679::get_offset_of_Version_10(),
	TitleAddedCloudScriptEventData_t3060120679::get_offset_of_Revision_11(),
	TitleAddedCloudScriptEventData_t3060120679::get_offset_of_Published_12(),
	TitleAddedCloudScriptEventData_t3060120679::get_offset_of_ScriptNames_13(),
	TitleAddedCloudScriptEventData_t3060120679::get_offset_of_UserId_14(),
	TitleAddedCloudScriptEventData_t3060120679::get_offset_of_DeveloperId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2851 = { sizeof (TitleAddedGameBuildEventData_t2942884392), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2851[6] = 
{
	TitleAddedGameBuildEventData_t2942884392::get_offset_of_BuildId_10(),
	TitleAddedGameBuildEventData_t2942884392::get_offset_of_Regions_11(),
	TitleAddedGameBuildEventData_t2942884392::get_offset_of_MinFreeGameSlots_12(),
	TitleAddedGameBuildEventData_t2942884392::get_offset_of_MaxGamesPerHost_13(),
	TitleAddedGameBuildEventData_t2942884392::get_offset_of_UserId_14(),
	TitleAddedGameBuildEventData_t2942884392::get_offset_of_DeveloperId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2852 = { sizeof (TitleAPISettingsChangedEventData_t820595823), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2852[4] = 
{
	TitleAPISettingsChangedEventData_t820595823::get_offset_of_PreviousSettingsValues_10(),
	TitleAPISettingsChangedEventData_t820595823::get_offset_of_SettingsValues_11(),
	TitleAPISettingsChangedEventData_t820595823::get_offset_of_UserId_12(),
	TitleAPISettingsChangedEventData_t820595823::get_offset_of_DeveloperId_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2853 = { sizeof (TitleCatalogUpdatedEventData_t1228579868), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2853[4] = 
{
	TitleCatalogUpdatedEventData_t1228579868::get_offset_of_CatalogVersion_10(),
	TitleCatalogUpdatedEventData_t1228579868::get_offset_of_Deleted_11(),
	TitleCatalogUpdatedEventData_t1228579868::get_offset_of_UserId_12(),
	TitleCatalogUpdatedEventData_t1228579868::get_offset_of_DeveloperId_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2854 = { sizeof (TitleClientRateLimitedEventData_t2541482180), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2854[6] = 
{
	TitleClientRateLimitedEventData_t2541482180::get_offset_of_GraphUrl_10(),
	TitleClientRateLimitedEventData_t2541482180::get_offset_of_AlertEventId_11(),
	TitleClientRateLimitedEventData_t2541482180::get_offset_of_API_12(),
	TitleClientRateLimitedEventData_t2541482180::get_offset_of_ErrorCode_13(),
	TitleClientRateLimitedEventData_t2541482180::get_offset_of_Level_14(),
	TitleClientRateLimitedEventData_t2541482180::get_offset_of_AlertState_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2855 = { sizeof (TitleCompletedTaskEventData_t41329012), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2855[6] = 
{
	TitleCompletedTaskEventData_t41329012::get_offset_of_TaskType_10(),
	TitleCompletedTaskEventData_t41329012::get_offset_of_TaskInstanceId_11(),
	TitleCompletedTaskEventData_t41329012::get_offset_of_IsAborted_12(),
	TitleCompletedTaskEventData_t41329012::get_offset_of_AbortedAt_13(),
	TitleCompletedTaskEventData_t41329012::get_offset_of_Result_14(),
	TitleCompletedTaskEventData_t41329012::get_offset_of_Summary_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2856 = { sizeof (TitleCreatedTaskEventData_t3457382386), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2856[3] = 
{
	TitleCreatedTaskEventData_t3457382386::get_offset_of_ScheduledTask_10(),
	TitleCreatedTaskEventData_t3457382386::get_offset_of_UserId_11(),
	TitleCreatedTaskEventData_t3457382386::get_offset_of_DeveloperId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2857 = { sizeof (TitleDeletedTaskEventData_t2855794751), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2857[3] = 
{
	TitleDeletedTaskEventData_t2855794751::get_offset_of_ScheduledTask_10(),
	TitleDeletedTaskEventData_t2855794751::get_offset_of_UserId_11(),
	TitleDeletedTaskEventData_t2855794751::get_offset_of_DeveloperId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2858 = { sizeof (TitleExceededLimitEventData_t2496628674), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2858[6] = 
{
	TitleExceededLimitEventData_t2496628674::get_offset_of_LimitId_10(),
	TitleExceededLimitEventData_t2496628674::get_offset_of_LimitDisplayName_11(),
	TitleExceededLimitEventData_t2496628674::get_offset_of_Unit_12(),
	TitleExceededLimitEventData_t2496628674::get_offset_of_LimitValue_13(),
	TitleExceededLimitEventData_t2496628674::get_offset_of_Value_14(),
	TitleExceededLimitEventData_t2496628674::get_offset_of_Details_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2859 = { sizeof (TitleHighErrorRateEventData_t2550781104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2859[6] = 
{
	TitleHighErrorRateEventData_t2550781104::get_offset_of_GraphUrl_10(),
	TitleHighErrorRateEventData_t2550781104::get_offset_of_AlertEventId_11(),
	TitleHighErrorRateEventData_t2550781104::get_offset_of_API_12(),
	TitleHighErrorRateEventData_t2550781104::get_offset_of_ErrorCode_13(),
	TitleHighErrorRateEventData_t2550781104::get_offset_of_Level_14(),
	TitleHighErrorRateEventData_t2550781104::get_offset_of_AlertState_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2860 = { sizeof (TitleInitiatedPlayerPasswordResetEventData_t2137886045), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2860[5] = 
{
	TitleInitiatedPlayerPasswordResetEventData_t2137886045::get_offset_of_PlayerId_10(),
	TitleInitiatedPlayerPasswordResetEventData_t2137886045::get_offset_of_PlayerRecoveryEmailAddress_11(),
	TitleInitiatedPlayerPasswordResetEventData_t2137886045::get_offset_of_PasswordResetId_12(),
	TitleInitiatedPlayerPasswordResetEventData_t2137886045::get_offset_of_UserId_13(),
	TitleInitiatedPlayerPasswordResetEventData_t2137886045::get_offset_of_DeveloperId_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2861 = { sizeof (TitleLimitChangedEventData_t198395271), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2861[8] = 
{
	TitleLimitChangedEventData_t198395271::get_offset_of_LimitId_10(),
	TitleLimitChangedEventData_t198395271::get_offset_of_LimitDisplayName_11(),
	TitleLimitChangedEventData_t198395271::get_offset_of_Unit_12(),
	TitleLimitChangedEventData_t198395271::get_offset_of_TransactionId_13(),
	TitleLimitChangedEventData_t198395271::get_offset_of_PreviousPriceUSD_14(),
	TitleLimitChangedEventData_t198395271::get_offset_of_PreviousValue_15(),
	TitleLimitChangedEventData_t198395271::get_offset_of_PriceUSD_16(),
	TitleLimitChangedEventData_t198395271::get_offset_of_Value_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2862 = { sizeof (TitleModifiedGameBuildEventData_t615280322), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2862[6] = 
{
	TitleModifiedGameBuildEventData_t615280322::get_offset_of_BuildId_10(),
	TitleModifiedGameBuildEventData_t615280322::get_offset_of_Regions_11(),
	TitleModifiedGameBuildEventData_t615280322::get_offset_of_MinFreeGameSlots_12(),
	TitleModifiedGameBuildEventData_t615280322::get_offset_of_MaxGamesPerHost_13(),
	TitleModifiedGameBuildEventData_t615280322::get_offset_of_UserId_14(),
	TitleModifiedGameBuildEventData_t615280322::get_offset_of_DeveloperId_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2863 = { sizeof (TitleNewsUpdatedEventData_t1774219510), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2863[4] = 
{
	TitleNewsUpdatedEventData_t1774219510::get_offset_of_NewsId_10(),
	TitleNewsUpdatedEventData_t1774219510::get_offset_of_NewsTitle_11(),
	TitleNewsUpdatedEventData_t1774219510::get_offset_of_DateCreated_12(),
	TitleNewsUpdatedEventData_t1774219510::get_offset_of_Status_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2864 = { sizeof (TitlePermissionsPolicyChangedEventData_t1650765699), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2864[4] = 
{
	TitlePermissionsPolicyChangedEventData_t1650765699::get_offset_of_PolicyName_10(),
	TitlePermissionsPolicyChangedEventData_t1650765699::get_offset_of_NewPolicy_11(),
	TitlePermissionsPolicyChangedEventData_t1650765699::get_offset_of_UserId_12(),
	TitlePermissionsPolicyChangedEventData_t1650765699::get_offset_of_DeveloperId_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2865 = { sizeof (TitleProfileViewConstraintsChangedEventData_t2737047), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2865[5] = 
{
	TitleProfileViewConstraintsChangedEventData_t2737047::get_offset_of_ProfileType_10(),
	TitleProfileViewConstraintsChangedEventData_t2737047::get_offset_of_PreviousProfileViewConstraints_11(),
	TitleProfileViewConstraintsChangedEventData_t2737047::get_offset_of_ProfileViewConstraints_12(),
	TitleProfileViewConstraintsChangedEventData_t2737047::get_offset_of_UserId_13(),
	TitleProfileViewConstraintsChangedEventData_t2737047::get_offset_of_DeveloperId_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2866 = { sizeof (TitlePublishedCloudScriptEventData_t4204108721), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2866[3] = 
{
	TitlePublishedCloudScriptEventData_t4204108721::get_offset_of_Revision_10(),
	TitlePublishedCloudScriptEventData_t4204108721::get_offset_of_UserId_11(),
	TitlePublishedCloudScriptEventData_t4204108721::get_offset_of_DeveloperId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2867 = { sizeof (TitleRequestedLimitChangeEventData_t2314905142), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2867[12] = 
{
	TitleRequestedLimitChangeEventData_t2314905142::get_offset_of_LimitId_10(),
	TitleRequestedLimitChangeEventData_t2314905142::get_offset_of_LimitDisplayName_11(),
	TitleRequestedLimitChangeEventData_t2314905142::get_offset_of_Unit_12(),
	TitleRequestedLimitChangeEventData_t2314905142::get_offset_of_TransactionId_13(),
	TitleRequestedLimitChangeEventData_t2314905142::get_offset_of_PreviousLevelName_14(),
	TitleRequestedLimitChangeEventData_t2314905142::get_offset_of_PreviousPriceUSD_15(),
	TitleRequestedLimitChangeEventData_t2314905142::get_offset_of_PreviousValue_16(),
	TitleRequestedLimitChangeEventData_t2314905142::get_offset_of_LevelName_17(),
	TitleRequestedLimitChangeEventData_t2314905142::get_offset_of_PriceUSD_18(),
	TitleRequestedLimitChangeEventData_t2314905142::get_offset_of_Value_19(),
	TitleRequestedLimitChangeEventData_t2314905142::get_offset_of_UserId_20(),
	TitleRequestedLimitChangeEventData_t2314905142::get_offset_of_DeveloperId_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2868 = { sizeof (TitleScheduledCloudScriptExecutedEventData_t1721888798), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2868[3] = 
{
	TitleScheduledCloudScriptExecutedEventData_t1721888798::get_offset_of_ScheduledTask_10(),
	TitleScheduledCloudScriptExecutedEventData_t1721888798::get_offset_of_FunctionName_11(),
	TitleScheduledCloudScriptExecutedEventData_t1721888798::get_offset_of_CloudScriptExecutionResult_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2869 = { sizeof (TitleSecretKeyEventData_t740429577), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2869[7] = 
{
	TitleSecretKeyEventData_t740429577::get_offset_of_SecretKeyId_10(),
	TitleSecretKeyEventData_t740429577::get_offset_of_SecretKeyName_11(),
	TitleSecretKeyEventData_t740429577::get_offset_of_Disabled_12(),
	TitleSecretKeyEventData_t740429577::get_offset_of_ExpiryDate_13(),
	TitleSecretKeyEventData_t740429577::get_offset_of_Deleted_14(),
	TitleSecretKeyEventData_t740429577::get_offset_of_UserId_15(),
	TitleSecretKeyEventData_t740429577::get_offset_of_DeveloperId_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2870 = { sizeof (TitleStartedTaskEventData_t2703619986), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2870[7] = 
{
	TitleStartedTaskEventData_t2703619986::get_offset_of_ScheduledTask_10(),
	TitleStartedTaskEventData_t2703619986::get_offset_of_TaskType_11(),
	TitleStartedTaskEventData_t2703619986::get_offset_of_Parameter_12(),
	TitleStartedTaskEventData_t2703619986::get_offset_of_TaskInstanceId_13(),
	TitleStartedTaskEventData_t2703619986::get_offset_of_ScheduledByUserId_14(),
	TitleStartedTaskEventData_t2703619986::get_offset_of_UserId_15(),
	TitleStartedTaskEventData_t2703619986::get_offset_of_DeveloperId_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2871 = { sizeof (TitleStatisticVersionChangedEventData_t1243240397), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2871[4] = 
{
	TitleStatisticVersionChangedEventData_t1243240397::get_offset_of_StatisticName_10(),
	TitleStatisticVersionChangedEventData_t1243240397::get_offset_of_StatisticVersion_11(),
	TitleStatisticVersionChangedEventData_t1243240397::get_offset_of_ScheduledResetInterval_12(),
	TitleStatisticVersionChangedEventData_t1243240397::get_offset_of_ScheduledResetTime_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2872 = { sizeof (TitleStoreUpdatedEventData_t2144567554), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2872[5] = 
{
	TitleStoreUpdatedEventData_t2144567554::get_offset_of_CatalogVersion_10(),
	TitleStoreUpdatedEventData_t2144567554::get_offset_of_StoreId_11(),
	TitleStoreUpdatedEventData_t2144567554::get_offset_of_Deleted_12(),
	TitleStoreUpdatedEventData_t2144567554::get_offset_of_UserId_13(),
	TitleStoreUpdatedEventData_t2144567554::get_offset_of_DeveloperId_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2873 = { sizeof (TitleUpdatedTaskEventData_t1967987342), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2873[4] = 
{
	TitleUpdatedTaskEventData_t1967987342::get_offset_of_ScheduledTask_10(),
	TitleUpdatedTaskEventData_t1967987342::get_offset_of_HasRenamed_11(),
	TitleUpdatedTaskEventData_t1967987342::get_offset_of_UserId_12(),
	TitleUpdatedTaskEventData_t1967987342::get_offset_of_DeveloperId_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2874 = { sizeof (PlayerProfileProperty_t2215145601)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2874[3] = 
{
	PlayerProfileProperty_t2215145601::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2875 = { sizeof (EmailTemplateType_t1894938024)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2875[4] = 
{
	EmailTemplateType_t1894938024::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2876 = { sizeof (AuthenticationProvider_t2449058080)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2876[3] = 
{
	AuthenticationProvider_t2449058080::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2877 = { sizeof (ContinentCode_t1594025311)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2877[8] = 
{
	ContinentCode_t1594025311::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2878 = { sizeof (CountryCode_t2300135987)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2878[250] = 
{
	CountryCode_t2300135987::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2879 = { sizeof (EventLocation_t1715353590), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2879[5] = 
{
	EventLocation_t1715353590::get_offset_of_ContinentCode_0(),
	EventLocation_t1715353590::get_offset_of_CountryCode_1(),
	EventLocation_t1715353590::get_offset_of_City_2(),
	EventLocation_t1715353590::get_offset_of_Latitude_3(),
	EventLocation_t1715353590::get_offset_of_Longitude_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2880 = { sizeof (GameServerHostStopReason_t3370540387)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2880[6] = 
{
	GameServerHostStopReason_t3370540387::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2881 = { sizeof (PaymentType_t4238902870)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2881[3] = 
{
	PaymentType_t4238902870::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2882 = { sizeof (LeaderboardVersionChangeBehavior_t2746474691)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2882[2] = 
{
	LeaderboardVersionChangeBehavior_t2746474691::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2883 = { sizeof (StatisticLeaderboardSource_t3496117074), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2883[2] = 
{
	StatisticLeaderboardSource_t3496117074::get_offset_of_StatisticName_0(),
	StatisticLeaderboardSource_t3496117074::get_offset_of_StatisticId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2884 = { sizeof (LeaderboardSource_t3852261111), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2884[1] = 
{
	LeaderboardSource_t3852261111::get_offset_of_Statistic_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2885 = { sizeof (LoginIdentityProvider_t3372356463)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2885[15] = 
{
	LoginIdentityProvider_t3372356463::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2886 = { sizeof (PasswordResetInitiationSource_t3452347524)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2886[3] = 
{
	PasswordResetInitiationSource_t3452347524::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2887 = { sizeof (CouponGrantedInventoryItem_t887583084), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2887[3] = 
{
	CouponGrantedInventoryItem_t887583084::get_offset_of_InstanceId_0(),
	CouponGrantedInventoryItem_t887583084::get_offset_of_ItemId_1(),
	CouponGrantedInventoryItem_t887583084::get_offset_of_CatalogVersion_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2888 = { sizeof (Currency_t3718768450)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2888[163] = 
{
	Currency_t3718768450::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2889 = { sizeof (LogStatement_t1443899217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2889[3] = 
{
	LogStatement_t1443899217::get_offset_of_Level_0(),
	LogStatement_t1443899217::get_offset_of_Message_1(),
	LogStatement_t1443899217::get_offset_of_Data_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2890 = { sizeof (ScriptExecutionError_t3566080775), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2890[3] = 
{
	ScriptExecutionError_t3566080775::get_offset_of_Error_0(),
	ScriptExecutionError_t3566080775::get_offset_of_Message_1(),
	ScriptExecutionError_t3566080775::get_offset_of_StackTrace_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2891 = { sizeof (ExecuteCloudScriptResult_t4017463769), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2891[12] = 
{
	ExecuteCloudScriptResult_t4017463769::get_offset_of_FunctionName_0(),
	ExecuteCloudScriptResult_t4017463769::get_offset_of_Revision_1(),
	ExecuteCloudScriptResult_t4017463769::get_offset_of_FunctionResult_2(),
	ExecuteCloudScriptResult_t4017463769::get_offset_of_FunctionResultTooLarge_3(),
	ExecuteCloudScriptResult_t4017463769::get_offset_of_Logs_4(),
	ExecuteCloudScriptResult_t4017463769::get_offset_of_LogsTooLarge_5(),
	ExecuteCloudScriptResult_t4017463769::get_offset_of_ExecutionTimeSeconds_6(),
	ExecuteCloudScriptResult_t4017463769::get_offset_of_ProcessorTimeSeconds_7(),
	ExecuteCloudScriptResult_t4017463769::get_offset_of_MemoryConsumedBytes_8(),
	ExecuteCloudScriptResult_t4017463769::get_offset_of_APIRequestsIssued_9(),
	ExecuteCloudScriptResult_t4017463769::get_offset_of_HttpRequestsIssued_10(),
	ExecuteCloudScriptResult_t4017463769::get_offset_of_Error_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2892 = { sizeof (PlayerLocation_t3274956597), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2892[5] = 
{
	PlayerLocation_t3274956597::get_offset_of_ContinentCode_0(),
	PlayerLocation_t3274956597::get_offset_of_CountryCode_1(),
	PlayerLocation_t3274956597::get_offset_of_City_2(),
	PlayerLocation_t3274956597::get_offset_of_Latitude_3(),
	PlayerLocation_t3274956597::get_offset_of_Longitude_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2893 = { sizeof (AdCampaignAttribution_t2127905524), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2893[3] = 
{
	AdCampaignAttribution_t2127905524::get_offset_of_Platform_0(),
	AdCampaignAttribution_t2127905524::get_offset_of_CampaignId_1(),
	AdCampaignAttribution_t2127905524::get_offset_of_AttributedAt_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2894 = { sizeof (PushNotificationPlatform_t2408964866)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2894[3] = 
{
	PushNotificationPlatform_t2408964866::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2895 = { sizeof (PushNotificationRegistration_t491890546), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2895[2] = 
{
	PushNotificationRegistration_t491890546::get_offset_of_Platform_0(),
	PushNotificationRegistration_t491890546::get_offset_of_NotificationEndpointARN_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2896 = { sizeof (PlayerLinkedAccount_t2183692335), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2896[4] = 
{
	PlayerLinkedAccount_t2183692335::get_offset_of_Platform_0(),
	PlayerLinkedAccount_t2183692335::get_offset_of_PlatformUserId_1(),
	PlayerLinkedAccount_t2183692335::get_offset_of_Username_2(),
	PlayerLinkedAccount_t2183692335::get_offset_of_Email_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2897 = { sizeof (PlayerStatistic_t1142491309), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2897[4] = 
{
	PlayerStatistic_t1142491309::get_offset_of_Id_0(),
	PlayerStatistic_t1142491309::get_offset_of_StatisticVersion_1(),
	PlayerStatistic_t1142491309::get_offset_of_StatisticValue_2(),
	PlayerStatistic_t1142491309::get_offset_of_Name_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2898 = { sizeof (EmailVerificationStatus_t3096798252)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2898[4] = 
{
	EmailVerificationStatus_t3096798252::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2899 = { sizeof (ContactEmailInfo_t2151835682), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2899[3] = 
{
	ContactEmailInfo_t2151835682::get_offset_of_Name_0(),
	ContactEmailInfo_t2151835682::get_offset_of_EmailAddress_1(),
	ContactEmailInfo_t2151835682::get_offset_of_VerificationStatus_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
