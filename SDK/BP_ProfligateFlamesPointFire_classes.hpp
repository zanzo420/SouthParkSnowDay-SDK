#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x378 - 0x368)
// BlueprintGeneratedClass BP_ProfligateFlamesPointFire.BP_ProfligateFlamesPointFire_C
class ABP_ProfligateFlamesPointFire_C : public ABP_PointFire_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameThrowerVerb_C*                   SourceVerb;                                        // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ProfligateFlamesPointFire_C* GetDefaultObj();

	void InitPointFire(class AQtnPawn* In_Owning_Pawn, float LifeTime, float DamagePerSecond, class UFlameThrowerVerb_C* SourceVerb);
	void ReceiveBeginPlay();
	void OnReusedFromPool();
	void OnReclaimToPool();
	void ExecuteUbergraph_BP_ProfligateFlamesPointFire(int32 EntryPoint, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
};

}


