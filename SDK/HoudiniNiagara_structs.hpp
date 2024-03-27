#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHoudiniPointCacheFileType : uint8
{
	Invalid                        = 0,
	CSV                            = 1,
	JSON                           = 2,
	BJSON                          = 3,
	EHoudiniPointCacheFileType_MAX = 4,
};

enum class EHoudiniAttributes : uint8
{
	HOUDINI_ATTR_BEGIN             = 0,
	Position                       = 0,
	Normal                         = 1,
	Time                           = 2,
	POINTID                        = 3,
	LIFE                           = 4,
	Color                          = 5,
	ALPHA                          = 6,
	Velocity                       = 7,
	Type                           = 8,
	Impulse                        = 9,
	AGE                            = 10,
	HOUDINI_ATTR_SIZE              = 11,
	HOUDINI_ATTR_END               = 10,
	EHoudiniAttributes_MAX         = 12,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct HoudiniNiagara.PointIndexes
struct FPointIndexes
{
public:
	TArray<int32>                                SampleIndexes;                                     // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct HoudiniNiagara.HoudiniEvent
struct FHoudiniEvent
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0xC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Impulse;                                           // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x1C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        POINTID;                                           // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LIFE;                                              // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x34(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Type;                                              // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


