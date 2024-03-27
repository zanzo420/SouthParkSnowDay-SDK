#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BuildSnowmanJobCluster.BuildSnowmanJobCluster_C
// (None)

class UClass* UBuildSnowmanJobCluster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuildSnowmanJobCluster_C");

	return Clss;
}


// BuildSnowmanJobCluster_C BuildSnowmanJobCluster.Default__BuildSnowmanJobCluster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuildSnowmanJobCluster_C* UBuildSnowmanJobCluster_C::GetDefaultObj()
{
	static class UBuildSnowmanJobCluster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuildSnowmanJobCluster_C*>(UBuildSnowmanJobCluster_C::StaticClass()->DefaultObject);

	return Default;
}

}


