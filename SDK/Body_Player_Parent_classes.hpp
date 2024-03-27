#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x90 - 0x84)
// BlueprintGeneratedClass Body_Player_Parent.Body_Player_Parent_C
class UBody_Player_Parent_C : public UQtnCharacterMesh_Archetype_C
{
public:
	uint8                                        Pad_527E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBody_Player_Parent_C* GetDefaultObj();

	void RefreshMeshVariant(int32 RandSeed, class USkeletalMeshComponent* SkeletalMeshComponent);
	void OnBodyMeshAcquired(class USkeletalMeshComponent* ComponentAdded);
	void ExecuteUbergraph_Body_Player_Parent(int32 EntryPoint, class USkeletalMeshComponent* K2Node_Event_ComponentAdded, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_StoreNPC_C* K2Node_DynamicCast_AsBP_Store_NPC, bool K2Node_DynamicCast_bSuccess, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_1);
};

}


