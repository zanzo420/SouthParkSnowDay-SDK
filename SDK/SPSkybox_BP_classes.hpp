#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x279 - 0x260)
// BlueprintGeneratedClass SPSkybox_BP.SPSkybox_BP_C
class ASPSkybox_BP_C : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     SkyFirePar;                                        // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     SkyRain;                                           // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnDesired;                                         // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ASPSkybox_BP_C* GetDefaultObj();

	void ToggleSkyFire(bool SkyFireOn);
	void SetUpDynamicMat(class UMaterialInterface* InputMat, class UMaterialInstanceDynamic** DynamicMat, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void ReceiveBeginPlay();
	void SkyFireOn(bool On);
	void ExecuteUbergraph_SPSkybox_BP(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_CustomEvent_On, bool CallFunc_IsValid_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class ADirector_C* CallFunc_Get_Director_Of_Current_Tribunal_Current_Tribunal_s_Director, bool CallFunc_Get_Director_Of_Current_Tribunal_Director_Found_, bool CallFunc_Get_Director_Of_Current_Tribunal_Tribunal_Active_, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_2);
};

}


