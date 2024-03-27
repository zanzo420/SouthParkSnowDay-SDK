#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x240 - 0x228)
// BlueprintGeneratedClass ActorPlacementComp.ActorPlacementComp_C
class UActorPlacementComp_C : public USceneComponent
{
public:
	uint8                                        Pad_4AB8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Order;                                             // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AB9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ClassToSpawn;                                      // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UActorPlacementComp_C* GetDefaultObj();

};

}


