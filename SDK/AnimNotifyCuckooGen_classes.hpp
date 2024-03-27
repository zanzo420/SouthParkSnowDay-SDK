#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x34 - 0x30)
// BlueprintGeneratedClass AnimNotifyCuckooGen.AnimNotifyCuckooGen_C
class UAnimNotifyCuckooGen_C : public UAnimNotifyState
{
public:
	int32                                        NotifyIndex;                                       // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimNotifyCuckooGen_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IQtnCuckooActorInterface> K2Node_DynamicCast_AsQtn_Cuckoo_Actor_Interface, bool K2Node_DynamicCast_bSuccess);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IQtnCuckooActorInterface> K2Node_DynamicCast_AsQtn_Cuckoo_Actor_Interface, bool K2Node_DynamicCast_bSuccess);
};

}


