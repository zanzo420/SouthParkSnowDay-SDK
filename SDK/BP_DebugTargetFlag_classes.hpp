#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2A8 - 0x250)
// BlueprintGeneratedClass BP_DebugTargetFlag.BP_DebugTargetFlag_C
class ABP_DebugTargetFlag_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                  TextRender;                                        // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialBillboardComponent*           MaterialBillboard;                                 // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  PossibleColors;                                    // 0x270(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        ColorIndex;                                        // 0x280(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DynamicMaterial;                                   // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  DisplayString;                                     // 0x290(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)

	static class UClass* StaticClass();
	static class ABP_DebugTargetFlag_C* GetDefaultObj();

	void ProcessStringForDisplay(class FText Input, class FText* Output);
	void OnRep_DisplayString();
	void OnRep_ColorIndex(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ReceiveBeginPlay();
	void MulticastSetValues(int32 ColorIndex);
	void ExecuteUbergraph_BP_DebugTargetFlag(int32 EntryPoint, class FText CallFunc_ProcessStringForDisplay_Output, int32 K2Node_CustomEvent_ColorIndex, bool CallFunc_IsServer_ReturnValue, const struct FLinearColor& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex);
};

}


