#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x920 - 0x914)
// BlueprintGeneratedClass EnemyStupidProjectilesActivationVerb.EnemyStupidProjectilesActivationVerb_C
class UEnemyStupidProjectilesActivationVerb_C : public UEnemyCheatActivationVerbBase_C
{
public:
	uint8                                        Pad_4EC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x918(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UEnemyStupidProjectilesActivationVerb_C* GetDefaultObj();

	void ApplyBullshitToBodyPawn_ServerOnly(class AQtnGameState* ActiveGameState, class AQtnBodyPawn* Bullshitter, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UStatusEffect_BS_StupidProjectiles_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue);
	void GatherValidBullshitCamTargets_ServerOnly(class AQtnGameState* ActiveGameState, TArray<class AQtnBodyPawn*>* ValidCamTargets, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void RespondToBullshit_ServerOnly(class AQtnGameState* ActiveGameState);
	void ExecuteUbergraph_EnemyStupidProjectilesActivationVerb(int32 EntryPoint, class AQtnGameState* K2Node_Event_ActiveGameState, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UStatusEffect_BS_StupidProjectiles_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies_1, class AQtnBodyPawn* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention);
};

}


