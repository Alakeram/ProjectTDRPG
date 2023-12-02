// Copyright Evil Genius Development.


#include "Character/CharacterBase.h"

ACharacterBase::ACharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

}

void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}