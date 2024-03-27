#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3E (0x32A - 0x2EC)
// BlueprintGeneratedClass SkirmishDoor.SkirmishDoor_C
class ASkirmishDoor_C : public ABasicDoor_C
{
public:
	uint8                                        Pad_4986[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       OpenDirection;                                     // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         StartOpen;                                         // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Direction;                                         // 0x309(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4987[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxTimer;                                          // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentTimer;                                      // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OpenStateWhenTimerEnds;                            // 0x314(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseTimer;                                          // 0x315(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ToggledOnToday;                                    // 0x316(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         OverrideGoalPresence;                              // 0x317(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         LOCAL_init;                                        // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4988[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGateLock_BP_C*                        Gatelock;                                          // 0x320(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         R_Locked;                                          // 0x328(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         LockInit;                                          // 0x329(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ASkirmishDoor_C* GetDefaultObj();

	void OnRep_r_Locked();
	void Locked_State_Presentation();
	void Server_ApplyOveride(bool CallFunc_IsServer_ReturnValue);
	void LOCAL_UpdateToggleVis();
	void OnRep_toggledOnToday();
	void Toggle(bool WantOn);
	void ToggleEvent(bool WantOn);
	void TogglePickablePresetation(bool WantPickable, class UObject* Lock);
	void ReceiveBeginPlay();
	void Toggle_Lock_Open_Presentation(bool Want_locked, class UObject* Lock);
	void SetUpLock_ServerOnly();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_SkirmishDoor(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool K2Node_Event_WantPickable, class UObject* K2Node_Event_lock_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_Want_Locked, class UObject* K2Node_Event_lock, int32 CallFunc_Array_AddUnique_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_1, bool K2Node_Event_WantOn);
};

}


