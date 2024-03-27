#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x2F9 - 0x2F0)
// BlueprintGeneratedClass FixedCameraVolume_FTUX.FixedCameraVolume_FTUX_C
class AFixedCameraVolume_FTUX_C : public AFixedCameraVolume_C
{
public:
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Active;                                            // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AFixedCameraVolume_FTUX_C* GetDefaultObj();

	void HandlePlayerExit(class ABodyPawnPlayer_C* PlayerBody);
	void HandlePlayerEnter(class ABodyPawnPlayer_C* PlayerBody);
};

}


