// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Potenciadores.generated.h"

UCLASS()
class GALAGA_USFX_L1_API APotenciadores : public AActor
{
	GENERATED_BODY()

private:

	//Atributos
	FString TipoPW;//Indica que tipo de potenciador es
	float DuracionPW;//Tiempo que durara el potenciador
	float ValorPW;//Puede ser un valor como aumento de velocidad, municion extra..

public:

	//Metodos
	void AplicarPotenciador();

	FORCEINLINE FString GetTipoPW() const { return TipoPW; }
	FORCEINLINE float GetDuracionPW() const { return DuracionPW; }
	FORCEINLINE float GetValorPW() const { return ValorPW; }

	FORCEINLINE void SetTipoPW(FString _TipoPW) { TipoPW = _TipoPW; }
	FORCEINLINE void SetDuracionPW(float _DuracionPW) { DuracionPW = _DuracionPW; }
	FORCEINLINE void SetValorPW(float _ValorPW) { ValorPW = _ValorPW; }

public:	
	// Sets default values for this actor's properties
	APotenciadores();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
