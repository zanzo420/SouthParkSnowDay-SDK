#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0x4EA - 0x4D8)
// BlueprintGeneratedClass Cuckoo_Arc1_Randy.Cuckoo_Arc1_Randy_C
class ACuckoo_Arc1_Randy_C : public AGenAdult_Actor_Cold_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         ToggledOnToday;                                    // 0x4E8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         LOCAL_init;                                        // 0x4E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ACuckoo_Arc1_Randy_C* GetDefaultObj();

	void LOCAL_UpdateToggleVis();
	void OnRep_toggledOnToday();
	void Toggle(bool Want_On, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void ToggleEvent(bool WantOn);
	void ExecuteUbergraph_Cuckoo_Arc1_Randy(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool K2Node_Event_WantOn);
};

}


