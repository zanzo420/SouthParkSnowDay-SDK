#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x100 - 0xE0)
// BlueprintGeneratedClass PlayerWorldEdgeComponent.PlayerWorldEdgeComponent_C
class UPlayerWorldEdgeComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        CurStormStrength;                                  // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumStormContributors;                              // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnFXActor*                           ActiveFX;                                          // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              PostMat;                                           // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerWorldEdgeComponent_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void SetWorldStormStrength(float StormStrength);
	void RegisterStormContributor(bool Removing);
	void ExecuteUbergraph_PlayerWorldEdgeComponent(int32 EntryPoint, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetPostProcessMaterialInstances_ReturnValue, int32 Temp_int_Variable, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Max_ReturnValue, float K2Node_Event_DeltaSeconds, float K2Node_CustomEvent_StormStrength, bool K2Node_CustomEvent_removing, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 Temp_int_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue);
};

}


