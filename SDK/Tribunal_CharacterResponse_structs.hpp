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

// 0x35 (0x35 - 0x0)
// UserDefinedStruct Tribunal_CharacterResponse.Tribunal_CharacterResponse
struct FTribunal_CharacterResponse
{
public:
	enum class EQtnSPCharacter                   Responder_29_D730230A48C7DF1EEF0B80B80B43060D;     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E4D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          ScriptedVOId_36_EA5D024F4FDF862ACBCBDB94F24054D5;  // 0x4(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ScriptedVOSpeaker_42_89C0782C4932286515DEDD9B2C5BCC7E; // 0xC(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        ScriptedVOVariant_43_E84DC1F9481325CA68DCC7B1FC61BA6C; // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           LipsyncAnimCurve_22_3FFEB33243C5ADC3EEE516B709FEE132; // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             SoundCueToPlay_11_ADBAF9DC43EE05C9E55DAC87DCC56BC2; // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Animation_25_A7C627A74D09BBC5E13D988EB66B1CCF;     // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AudioDelay_32_B477537D47396E4D12151FBC9BAF9A0A;    // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoNotStopOtherVO_45_F749D92248EB24A17FD4289D5B7CE661; // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


