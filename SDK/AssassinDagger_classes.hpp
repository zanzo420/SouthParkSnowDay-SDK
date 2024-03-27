#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x8E8 - 0x8D9)
// BlueprintGeneratedClass AssassinDagger.AssassinDagger_C
class AAssassinDagger_C : public ABaseWeapon_C
{
public:
	uint8                                        Pad_5F80[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  LeftHandDagger;                                    // 0x8E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAssassinDagger_C* GetDefaultObj();

	void HandleEquip_Derived(class AQtnBodyPawn* bodyPawn);
};

}


