// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagAssetInterface.h"
#include "RsAttributeTagAssetInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable, MinimalAPI)
class URsAttributeTagAssetInterface : public UGameplayTagAssetInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class RSGAMETECHRT_API IRsAttributeTagAssetInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RsAttributeTagAssetInterface")
	void RemoveAttributeTags(const FGameplayTagContainer& Tags);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RsAttributeTagAssetInterface")
	void RemoveAttributeTag(const FGameplayTag& Tag);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RsAttributeTagAssetInterface")
	bool MatchesAttributeTagsQuery(const FGameplayTagQuery& TagQuery);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RsAttributeTagAssetInterface")
	bool HasMatchingAttributeTag(const FGameplayTag& TagToCheck);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RsAttributeTagAssetInterface")
	bool HasAnyMatchingAttributeTags(const FGameplayTagContainer& TagContainer);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RsAttributeTagAssetInterface")
	bool HasAllMatchingAttributeTags(const FGameplayTagContainer& TagContainer);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RsAttributeTagAssetInterface")
	FGameplayTagContainer GetTargetAttributeTags();
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RsAttributeTagAssetInterface")
	FGameplayTagContainer GetAttributeTags();
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RsAttributeTagAssetInterface")
	int GetAttributeTagCount(const FGameplayTag& TagToCheck);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RsAttributeTagAssetInterface")
	void AddAttributeTags(const FGameplayTagContainer& Tags);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RsAttributeTagAssetInterface")
	void AddAttributeTag(const FGameplayTag& Tag);
	
};
