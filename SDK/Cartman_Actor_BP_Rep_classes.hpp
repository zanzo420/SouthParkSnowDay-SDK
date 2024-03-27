#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA (0x4EA - 0x4E0)
// BlueprintGeneratedClass Cartman_Actor_BP_Rep.Cartman_Actor_BP_Rep_C
class ACartman_Actor_BP_Rep_C : public ACartman_Actor_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         ToggledOnToday;                                    // 0x4E8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         LOCAL_init;                                        // 0x4E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ACartman_Actor_BP_Rep_C* GetDefaultObj();

	void LOCAL_UpdateToggleVis();
	void OnRep_toggledOnToday();
	void Toggle(bool Want_On, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ToggleEvent(bool WantOn);
	void ExecuteUbergraph_Cartman_Actor_BP_Rep(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool K2Node_Event_WantOn, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsReadyForGameplay_ReturnValue);
};

}


