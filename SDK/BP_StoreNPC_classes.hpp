#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x3D8 - 0x3A0)
// BlueprintGeneratedClass BP_StoreNPC.BP_StoreNPC_C
class ABP_StoreNPC_C : public ANewKid_Actor_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStoreFrobbable_C*                     StoreFrobbable;                                    // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere_0;                                          // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnCharacterAppearanceComponent*      QtnCharacterAppearance;                            // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                  StoreName;                                         // 0x3C0(0x18)(Edit, BlueprintVisible, Net, RepNotify)

	static class UClass* StaticClass();
	static class ABP_StoreNPC_C* GetDefaultObj();

	void RefreshStoreName();
	void OnRep_StoreName();
	void UserConstructionScript();
	void OnNotifyEnd_95B8E5734E34A3578892C5AF316A0F44(class FName NotifyName);
	void OnNotifyBegin_95B8E5734E34A3578892C5AF316A0F44(class FName NotifyName);
	void OnInterrupted_95B8E5734E34A3578892C5AF316A0F44(class FName NotifyName);
	void OnBlendOut_95B8E5734E34A3578892C5AF316A0F44(class FName NotifyName);
	void OnCompleted_95B8E5734E34A3578892C5AF316A0F44(class FName NotifyName);
	void OnNotifyEnd_D29C487B4B19EB68195938AFB7F1ADE4(class FName NotifyName);
	void OnNotifyBegin_D29C487B4B19EB68195938AFB7F1ADE4(class FName NotifyName);
	void OnInterrupted_D29C487B4B19EB68195938AFB7F1ADE4(class FName NotifyName);
	void OnBlendOut_D29C487B4B19EB68195938AFB7F1ADE4(class FName NotifyName);
	void OnCompleted_D29C487B4B19EB68195938AFB7F1ADE4(class FName NotifyName);
	void OnNotifyEnd_7FA36A6043645D7E8FEF0BB6145CB669(class FName NotifyName);
	void OnNotifyBegin_7FA36A6043645D7E8FEF0BB6145CB669(class FName NotifyName);
	void OnInterrupted_7FA36A6043645D7E8FEF0BB6145CB669(class FName NotifyName);
	void OnBlendOut_7FA36A6043645D7E8FEF0BB6145CB669(class FName NotifyName);
	void OnCompleted_7FA36A6043645D7E8FEF0BB6145CB669(class FName NotifyName);
	void ReceiveBeginPlay();
	void OnPurchasedItem();
	void OnFrobEvent(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn);
	void RandomCall();
	void BndEvt__BP_StoreNPC_StoreFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer);
	void ExecuteUbergraph_BP_StoreNPC(int32 EntryPoint, class UQtnFrobbableComponent* K2Node_ComponentBoundEvent_ThisFrobbable, class AQtnBodyPawn* K2Node_ComponentBoundEvent_FrobbingPawn, bool K2Node_ComponentBoundEvent_isServer, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName Temp_name_Variable_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool CallFunc_IsValid_ReturnValue, class UQtnFrobbableComponent* K2Node_CustomEvent_ThisFrobbable, class AQtnBodyPawn* K2Node_CustomEvent_FrobbingPawn, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
};

}


