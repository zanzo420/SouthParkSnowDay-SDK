#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x156 (0x4E0 - 0x38A)
// BlueprintGeneratedClass Cartman_Actor_BP.Cartman_Actor_BP_C
class ACartman_Actor_BP_C : public AScriptedSkeletalActor_Trial_C
{
public:
	uint8                                        Pad_51ED[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Staff;                                             // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         WantsToBePrioritySpeaker;                          // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIndicatorData                        Indicator_Data;                                    // 0x3B0(0x129)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_51EF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACartman_Actor_BP_C* GetDefaultObj();

	void GetIndicatorData(struct FIndicatorData* IndicatorData);
	void MakeIndicatorData(const struct FIndicatorData& K2Node_MakeStruct_IndicatorData);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_Cartman_Actor_BP(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


