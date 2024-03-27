#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x158 - 0x14A)
// BlueprintGeneratedClass StatusEffect_DragonBurn.StatusEffect_DragonBurn_C
class UStatusEffect_DragonBurn_C : public UStatusEffect_Burn_C
{
public:
	uint8                                        Pad_6D3B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x150(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UStatusEffect_DragonBurn_C* GetDefaultObj();

	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void ExecuteUbergraph_StatusEffect_DragonBurn(int32 EntryPoint, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator);
};

}


