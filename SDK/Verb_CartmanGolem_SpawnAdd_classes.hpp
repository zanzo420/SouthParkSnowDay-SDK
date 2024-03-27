#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x9F8 - 0x9F0)
// BlueprintGeneratedClass Verb_CartmanGolem_SpawnAdd.Verb_CartmanGolem_SpawnAdd_C
class UVerb_CartmanGolem_SpawnAdd_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UVerb_CartmanGolem_SpawnAdd_C* GetDefaultObj();

	bool CanVerbStart(class UObject* PotentialTarget, bool CallFunc_CanVerbStart_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodyPawn_CartmanGolem_C* K2Node_DynamicCast_AsBody_Pawn_Cartman_Golem, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Are_Adds_Needed_Should_Spawn_Add);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void ExecuteUbergraph_Verb_CartmanGolem_SpawnAdd(int32 EntryPoint, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodyPawn_CartmanGolem_C* K2Node_DynamicCast_AsBody_Pawn_Cartman_Golem, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
};

}


