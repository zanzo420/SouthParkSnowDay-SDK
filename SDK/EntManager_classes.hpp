#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x110 - 0xE0)
// BlueprintGeneratedClass EntManager.EntManager_C
class UEntManager_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AQtnBodyPawn*                          KyleBossPawn;                                      // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AQtnBodyPawn*>                  Ents;                                              // 0xF0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AKyleBossTeleportMarker_C*>     Kyle_Teleport_Locations;                           // 0x100(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UEntManager_C* GetDefaultObj();

	void UnregisterKyleTeleportLocation(class AKyleBossTeleportMarker_C*& KyleTeleportLocation, class AKyleBossTeleportMarker_C* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1);
	void RegisterKyleTeleportLocation(class AKyleBossTeleportMarker_C*& KyleTeleportLocation, class AKyleBossTeleportMarker_C* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void UnregisterKyleBossActor(bool CallFunc_IsServer_ReturnValue);
	void RegisterKyleBossActor(class AQtnBodyPawn* Bodypawn_Kyle_Boss_to_Add, bool CallFunc_IsServer_ReturnValue);
	void ToggleEnt_KyleMountJobs(bool WantEmploymentOpen, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IInterface_BodyPawn_Ent_C> K2Node_DynamicCast_AsInterface_Body_Pawn_Ent, bool K2Node_DynamicCast_bSuccess, class UQtnAIJobComponent* CallFunc_GetQtnAIJob_KyleBoss_qtnAIJob);
	void UnregisterEnts(class AQtnBodyPawn* Bodypawn_Ent_to_Remove, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void RegisterEnts(class AQtnBodyPawn* Bodypawn_Ent_to_Add, bool CallFunc_IsPlayingInEditor_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Toggle_Ent_Jobs_Server_Only();
	void ExecuteUbergraph_EntManager(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TScriptInterface<class IInterface_BodyPawnAIKyleBoss_C> K2Node_DynamicCast_AsInterface_Body_Pawn_AIKyle_Boss, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetUnderEntCooldown_underEntCooldown, bool CallFunc_IsValid_ReturnValue_1, class UQtnCarryComponent* CallFunc_GetCarryComponent_ReturnValue, class AActor* CallFunc_GetCarryingActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess);
};

}


