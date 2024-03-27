#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x920 - 0x914)
// BlueprintGeneratedClass EnemyTrapsActivationVerb.EnemyTrapsActivationVerb_C
class UEnemyTrapsActivationVerb_C : public UEnemyCheatActivationVerbBase_C
{
public:
	uint8                                        Pad_35C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x918(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UEnemyTrapsActivationVerb_C* GetDefaultObj();

	void ApplyBullshitToBodyPawn_ServerOnly(class AQtnGameState* ActiveGameState, class AQtnBodyPawn* Bullshitter, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UStatusEffect_BS_Traps_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue);
	void GatherValidBullshitCamTargets_ServerOnly(class AQtnGameState* ActiveGameState, TArray<class AQtnBodyPawn*>* ValidCamTargets, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void ExecuteUbergraph_EnemyTrapsActivationVerb(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UStatusEffect_BS_Traps_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


