#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x548 - 0x538)
// BlueprintGeneratedClass Cine_ButtersRulesIntro.Cine_ButtersRulesIntro_C
class ACine_ButtersRulesIntro_C : public ACinematicSceneCharacter_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x538(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Snow;                                              // 0x540(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACine_ButtersRulesIntro_C* GetDefaultObj();

	void PlayNextShot();
	void PostFadeStartScene();
	void ExecuteUbergraph_Cine_ButtersRulesIntro(int32 EntryPoint, bool K2Node_SwitchInteger_CmpSuccess, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_1);
};

}


