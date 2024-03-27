#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x140 - 0x138)
// BlueprintGeneratedClass RadioactiveAuraComponent.RadioactiveAuraComponent_C
class URadioactiveAuraComponent_C : public UBaseAuraComponent_C
{
public:
	class UBattlefieldTrackingComponent_C*       CachedBattlefieldTrackingComponent;                // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URadioactiveAuraComponent_C* GetDefaultObj();

	void RemoveAuraEffect_ServerOnly(class ABodyPawnBase_C*& VictimBody);
	void ApplyAuraEffect_ServerOnly(class ABodyPawnBase_C*& VictimBody);
};

}


