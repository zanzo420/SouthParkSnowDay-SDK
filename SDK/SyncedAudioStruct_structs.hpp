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

// 0x2D (0x2D - 0x0)
// UserDefinedStruct SyncedAudioStruct.SyncedAudioStruct
struct FSyncedAudioStruct
{
public:
	struct FGameplayTag                          ScriptedVOId_22_994071C14FF328FCB6F6099B08D8ED48;  // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        ScriptedVOVariant_26_30FC137545A5FA5B59DF4788CE7DD8EA; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_511B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             Audio_2_4985D9F84CE95F9202433A9A2867CDF4;          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           AnimCurve_Alternate_11_7D34FA0C43204C5ADDA4209B26D5E2CD; // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          OptionalAnim_15_B172EC954139D0124D829BAE26C19D3D;  // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AudioDelay_18_94D4D74A49C634D350C65BA3601C679C;    // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoNotStopOtherVO_28_29DAA9DD448FC445DECE30B58D8E0069; // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


