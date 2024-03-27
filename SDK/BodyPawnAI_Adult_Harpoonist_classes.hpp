#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x15F0 - 0x15D8)
// BlueprintGeneratedClass BodyPawnAI_Adult_Harpoonist.BodyPawnAI_Adult_Harpoonist_C
class ABodyPawnAI_Adult_Harpoonist_C : public ABodyPawnAI_AdultBase_C
{
public:
	class UNiagaraComponent*                     Niagara;                                           // 0x15D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                DarkArm;                                           // 0x15E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnGoalMarkerComponent*               QtnGoalMarker_0;                                   // 0x15E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyPawnAI_Adult_Harpoonist_C* GetDefaultObj();

	void UserConstructionScript();
};

}


