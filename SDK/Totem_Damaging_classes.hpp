#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x3B8 - 0x390)
// BlueprintGeneratedClass Totem_Damaging.Totem_Damaging_C
class ATotem_Damaging_C : public AClericTotem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Pulse_NewTrack_0_AF7F81D04469C462CF143BB7CA86A37C; // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Pulse__Direction_AF7F81D04469C462CF143BB7CA86A37C; // 0x39C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AAB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Pulse;                                             // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fade_Fade_F7EEEEC54047D31CD0C2318FF6AC7DF5;        // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Fade__Direction_F7EEEEC54047D31CD0C2318FF6AC7DF5;  // 0x3AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AAC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Fade;                                              // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ATotem_Damaging_C* GetDefaultObj();

	void Apply_Totem_Pulse_Effects_to_Pawn_ServerOnly(class AQtnPawn* Affected_Pawn, bool CallFunc_IsValid_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo);
	void Fade__FinishedFunc();
	void Fade__UpdateFunc();
	void Pulse__FinishedFunc();
	void Pulse__UpdateFunc();
	void TotemBeamDamage_MULTI(class AQtnPawn* Pawn);
	void ReceiveBeginPlay();
	void TotemDeath_MULTI(bool ViolentDeath);
	void Pulse_Effect(float Radius);
	void ExecuteUbergraph_Totem_Damaging(int32 EntryPoint, class AQtnPawn* K2Node_CustomEvent_pawn, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_Event_violentDeath, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float K2Node_Event_radius);
};

}


