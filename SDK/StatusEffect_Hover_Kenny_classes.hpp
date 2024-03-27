#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x140 - 0x134)
// BlueprintGeneratedClass StatusEffect_Hover_Kenny.StatusEffect_Hover_Kenny_C
class UStatusEffect_Hover_Kenny_C : public UStatusEffect_Hover_C
{
public:
	uint8                                        Pad_440E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UStatusEffect_Hover_Kenny_C* GetDefaultObj();

	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void ExecuteUbergraph_StatusEffect_Hover_Kenny(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class UKenny_Rainbow_Verb_C* CallFunc_GetExistingVerb_ReturnValue);
};

}


