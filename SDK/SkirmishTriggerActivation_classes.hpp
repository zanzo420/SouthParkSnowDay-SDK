#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x50 - 0x48)
// BlueprintGeneratedClass SkirmishTriggerActivation.SkirmishTriggerActivation_C
class USkirmishTriggerActivation_C : public UQtnSkirmishTrigger
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USkirmishTriggerActivation_C* GetDefaultObj();

	void OnSkirmishInit(class AQtnSkirmish* OwningSkirmish);
	void SkirmishPlayerEnterEvent_Event_0(class AQtnSkirmish* EnteredSkirmish, TArray<class AQtnBodyPawn*>& PlayersWithinVolume);
	void ExecuteUbergraph_SkirmishTriggerActivation(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnSkirmish* K2Node_Event_owningSkirmish, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsOverlappingActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AQtnSkirmish* K2Node_CustomEvent_enteredSkirmish, TArray<class AQtnBodyPawn*>& K2Node_CustomEvent_playersWithinVolume);
};

}


