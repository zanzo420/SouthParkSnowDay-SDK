#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x98 - 0x90)
// BlueprintGeneratedClass Body_PlayerDefault.Body_PlayerDefault_C
class UBody_PlayerDefault_C : public UBody_Player_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x90(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBody_PlayerDefault_C* GetDefaultObj();

	void OnBodyMeshAcquired(class USkeletalMeshComponent* ComponentAdded);
	void ExecuteUbergraph_Body_PlayerDefault(int32 EntryPoint, class USkeletalMeshComponent* K2Node_Event_ComponentAdded);
};

}


