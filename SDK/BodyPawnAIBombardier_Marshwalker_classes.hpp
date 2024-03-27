#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x1608 - 0x15E8)
// BlueprintGeneratedClass BodyPawnAIBombardier_Marshwalker.BodyPawnAIBombardier_Marshwalker_C
class ABodyPawnAIBombardier_Marshwalker_C : public ABodyPawnAIBombardier_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Death_Sys;                                         // 0x15F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     BombardierChimney_Sys;                             // 0x15F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x1600(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyPawnAIBombardier_Marshwalker_C* GetDefaultObj();

	void AlivenessEvent(class AQtnBodyPawn* bodyPawn, class AActor* AlivenessInstigator, enum class EQtnBodyAliveness OldBodyAliveness, enum class EQtnBodyAliveness bodyAliveness, bool IsServer);
	void ExecuteUbergraph_BodyPawnAIBombardier_Marshwalker(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_bodyPawn, class AActor* K2Node_Event_alivenessInstigator, enum class EQtnBodyAliveness K2Node_Event_oldBodyAliveness, enum class EQtnBodyAliveness K2Node_Event_bodyAliveness, bool K2Node_Event_isServer, bool K2Node_SwitchEnum_CmpSuccess);
};

}


