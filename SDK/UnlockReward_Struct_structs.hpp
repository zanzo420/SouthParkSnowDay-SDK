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

// 0x38 (0x38 - 0x0)
// UserDefinedStruct UnlockReward_Struct.UnlockReward_Struct
struct FUnlockReward_Struct
{
public:
	struct FGameplayTag                          UnlockKey_10_12025386430DDB35A43D95BC62BF9019;     // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	enum class EUnlockRewards_Enum               RewardType_19_722C9E1E4D14049EA481B9B74558F640;    // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5231[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Icon_5_8D28E7B54A01CFD76F3DE684625011E8;           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Location_23_B941B1124F229F698E370286A31C7F97;      // 0x18(0x18)(Edit, BlueprintVisible)
	class UClass*                                QtnPerk_22_CF90A6FB40488AA30303FAAD9F341DAD;       // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


