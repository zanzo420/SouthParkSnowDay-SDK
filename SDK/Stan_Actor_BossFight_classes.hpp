#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x3E0 - 0x3A0)
// BlueprintGeneratedClass Stan_Actor_BossFight.Stan_Actor_BossFight_C
class AStan_Actor_BossFight_C : public AStan_Actor_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  ShieldVisual;                                      // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleShield_NewTrack_0_3203D0464D96AB120B18DC882DBDCA93; // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleShield__Direction_3203D0464D96AB120B18DC882DBDCA93; // 0x3B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3290[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleShield;                                       // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Hidden;                                            // 0x3C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3291[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              ShieldM;                                           // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShieldPercentage;                                  // 0x3D0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InitialShieldScale;                                // 0x3D4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AStan_Actor_BossFight_C* GetDefaultObj();

	void OnRep_ShieldPercentage(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
	void LOCAL_updateVis(bool CallFunc_Not_PreBool_ReturnValue);
	void OnRep_hidden();
	void ScaleShield__FinishedFunc();
	void ScaleShield__UpdateFunc();
	void OnNotifyEnd_8D755B684E8E51B28C42D18CEB53E94A(class FName NotifyName);
	void OnNotifyBegin_8D755B684E8E51B28C42D18CEB53E94A(class FName NotifyName);
	void OnInterrupted_8D755B684E8E51B28C42D18CEB53E94A(class FName NotifyName);
	void OnBlendOut_8D755B684E8E51B28C42D18CEB53E94A(class FName NotifyName);
	void OnCompleted_8D755B684E8E51B28C42D18CEB53E94A(class FName NotifyName);
	void OnNotifyEnd_CAB9672C444E87E7C49C5A8A1F5F32E2(class FName NotifyName);
	void OnNotifyBegin_CAB9672C444E87E7C49C5A8A1F5F32E2(class FName NotifyName);
	void OnInterrupted_CAB9672C444E87E7C49C5A8A1F5F32E2(class FName NotifyName);
	void OnBlendOut_CAB9672C444E87E7C49C5A8A1F5F32E2(class FName NotifyName);
	void OnCompleted_CAB9672C444E87E7C49C5A8A1F5F32E2(class FName NotifyName);
	void OnNotifyEnd_FA93B03246F496A18C6BB1AE5283B1E4(class FName NotifyName);
	void OnNotifyBegin_FA93B03246F496A18C6BB1AE5283B1E4(class FName NotifyName);
	void OnInterrupted_FA93B03246F496A18C6BB1AE5283B1E4(class FName NotifyName);
	void OnBlendOut_FA93B03246F496A18C6BB1AE5283B1E4(class FName NotifyName);
	void OnCompleted_FA93B03246F496A18C6BB1AE5283B1E4(class FName NotifyName);
	void DestroySelf();
	void FireAnimation();
	void HitAnimation();
	void ReceiveBeginPlay();
	void CannonLoopAnimation();
	void InvincibilityVFX();
	void ShieldProgressUpdate(float PercentComplete);
	void DestroyShield();
	void StanTravel();
	void OnCannonDamagedVO();
	void ExecuteUbergraph_Stan_Actor_BossFight(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName Temp_name_Variable_2, bool CallFunc_IsServer_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_1, float K2Node_CustomEvent_PercentComplete, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1);
};

}


