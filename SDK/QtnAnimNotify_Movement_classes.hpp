#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x39 - 0x38)
// BlueprintGeneratedClass QtnAnimNotify_Movement.QtnAnimNotify_Movement_C
class UQtnAnimNotify_Movement_C : public UQtnAnimNotify
{
public:
	enum class EMovementMode                     MovementMode;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnAnimNotify_Movement_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue);
	void Set_Movement();
};

}


