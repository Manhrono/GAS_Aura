// Copyright HronoMan


#include "AuraAssetManager.h"
#include "AuraGameplayTags.h" 

UAuraAssetManager& UAuraAssetManager::Get()
{
	check(GEngine); // Ensure that the engine has been initialized. or client crash.
	
	UAuraAssetManager* AuraAssetManager = Cast<UAuraAssetManager>(GEngine->AssetManager);
	return *AuraAssetManager; 
	
}

void UAuraAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	FAuraGameplayTags::InitializedNativeGameplayTags();
}
