#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x400 - 0x3E9)
// BlueprintGeneratedClass RandyBossFight_Actor_BP.RandyBossFight_Actor_BP_C
class ARandyBossFight_Actor_BP_C : public ARandy_Actor_BP_C
{
public:
	uint8                                        Pad_4F95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     StunFx;                                            // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ARandyBossFight_Actor_BP_C* GetDefaultObj();

	void OnNotifyEnd_6F95306F4E2813828C732690A8662C2A(class FName NotifyName);
	void OnNotifyBegin_6F95306F4E2813828C732690A8662C2A(class FName NotifyName);
	void OnInterrupted_6F95306F4E2813828C732690A8662C2A(class FName NotifyName);
	void OnBlendOut_6F95306F4E2813828C732690A8662C2A(class FName NotifyName);
	void OnCompleted_6F95306F4E2813828C732690A8662C2A(class FName NotifyName);
	void OnNotifyEnd_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0(class FName NotifyName);
	void OnNotifyBegin_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0(class FName NotifyName);
	void OnInterrupted_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0(class FName NotifyName);
	void OnBlendOut_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0(class FName NotifyName);
	void OnCompleted_8E6EB4FE43A5D8C6B8A4AC8BBA89EEC0(class FName NotifyName);
	void OnNotifyEnd_E697244340B895D9DD60ED93B33793DD(class FName NotifyName);
	void OnNotifyBegin_E697244340B895D9DD60ED93B33793DD(class FName NotifyName);
	void OnInterrupted_E697244340B895D9DD60ED93B33793DD(class FName NotifyName);
	void OnBlendOut_E697244340B895D9DD60ED93B33793DD(class FName NotifyName);
	void OnCompleted_E697244340B895D9DD60ED93B33793DD(class FName NotifyName);
	void ReceiveBeginPlay();
	void FireAnimation();
	void HitAnimation_MULTI();
	void CannonLoopAnimation();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void CancelStun_MULTI();
	void ExecuteUbergraph_RandyBossFight_Actor_BP(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


