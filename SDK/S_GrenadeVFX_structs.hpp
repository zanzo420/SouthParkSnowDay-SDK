#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// UserDefinedStruct S_GrenadeVFX.S_GrenadeVFX
struct FS_GrenadeVFX
{
public:
	class UClass*                                GrenadeUpgradeClass_2_BA30D1E34440EED7082FB3B51C4EB478; // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ExplosionFX_6_105A76014E772BCAEB77A7BEE5D4FFB0;    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        ProjectileAttachFX_10_13C0545841FE1F187A63BAB5AED2595C; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C15[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            AttachedFXRelativeTransform_14_319F631647C159082EEB50821C978B71; // 0x20(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                         OverrideDefaultExplosion_20_509891164E2DDEA9A34CA0990B9C9576; // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C16[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Priority_19_CAC00F554B59777386898BB80A9B9154;      // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


