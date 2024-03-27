#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0x918 - 0x905)
// BlueprintGeneratedClass QtnEmote_CartmanChurchChaseBored.QtnEmote_CartmanChurchChaseBored_C
class UQtnEmote_CartmanChurchChaseBored_C : public UQtnEmoteVerb_Archetype_C
{
public:
	uint8                                        Pad_7021[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x908(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABodyPawn_Cartman_ChurchChase_C*       Cartman;                                           // 0x910(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnEmote_CartmanChurchChaseBored_C* GetDefaultObj();

	void OnVerbInit(bool IsServer);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void ExecuteUbergraph_QtnEmote_CartmanChurchChaseBored(int32 EntryPoint, bool K2Node_Event_isServer_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodyPawn_Cartman_ChurchChase_C* K2Node_DynamicCast_AsBody_Pawn_Cartman_Church_Chase, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_1, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer);
};

}


