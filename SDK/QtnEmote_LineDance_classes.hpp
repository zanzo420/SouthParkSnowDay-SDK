#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0x918 - 0x905)
// BlueprintGeneratedClass QtnEmote_LineDance.QtnEmote_LineDance_C
class UQtnEmote_LineDance_C : public UQtnEmoteVerb_Archetype_C
{
public:
	uint8                                        Pad_4A91[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x908(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Sound;                                             // 0x910(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnEmote_LineDance_C* GetDefaultObj();

	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void ExecuteUbergraph_QtnEmote_LineDance(int32 EntryPoint, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


