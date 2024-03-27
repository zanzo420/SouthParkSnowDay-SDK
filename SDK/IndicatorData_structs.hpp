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

// 0x129 (0x129 - 0x0)
// UserDefinedStruct IndicatorData.IndicatorData
struct FIndicatorData
{
public:
	struct FOnScreen_Texture                     MinusMinus_OnScreenTexture_MinusMinus_129_EF46EC904337265E37A70AA8546A653B; // 0x0(0x28)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOffScreen_Texture                    MinusMinus_OffScreenTexture_MinusMinus_119_CB02B7D1419E6B5451221AA6895DACBB; // 0x28(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetActor_137_407339444F2908749262E1AFF574BD0D;  // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetLocation_138_0110EDAE4BD17A0987BDE6ABDB3088D0; // 0x50(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistanceBasedVisibility_139_EA625AC24DEB1CCB7739B5B7E475AA3D; // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LifeSpan_140_4D81C38B4FA2A1FF1261EA81D79F82FF;     // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseActorCollisionBoundsForZOffset_142_5C628CA245BAB9D5C86EE4BFC4385067; // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AdditionalZOffset_135_A11D97FF4EBEC21A464828A038B6E6D1; // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIndicatorType                        IndicatorType_141_5EA6C91E4D3852983CCF5E9B43496372; // 0x6C(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AEF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEffects                              MinusMinus_Effects_MinusMinus_122_2DFA7A4049EB7A986F5B12A1CA50DF0A; // 0x78(0xAC)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_2AF0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         HideUntilPathConfirmed_134_313CF40C4BD0575BB55AD2B39D3C782F; // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


