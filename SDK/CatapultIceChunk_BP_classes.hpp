#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x302 - 0x2F6)
// BlueprintGeneratedClass CatapultIceChunk_BP.CatapultIceChunk_BP_C
class ACatapultIceChunk_BP_C : public AGenericDestructable_BP_C
{
public:
	uint8                                        Pad_3C7B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Dead;                                              // 0x300(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LOCAL_init;                                        // 0x301(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ACatapultIceChunk_BP_C* GetDefaultObj();

	void Toggle(bool WantOn, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void HandleDeath(bool CallFunc_IsServer_ReturnValue);
	void UpdateNavOnDeath();
	void Nav_Refresh();
	void LOCAL_Update_Toggle_Vis();
	void ReceiveBeginPlay();
	void ToggleEvent(bool WantOn);
	void OnQtnReadyForGameplay();
	void ExecuteUbergraph_CatapultIceChunk_BP(int32 EntryPoint, bool K2Node_Event_WantOn, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_IsServer_ReturnValue);
};

}


