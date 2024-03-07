// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escudo.generated.h"

UCLASS()
class GALAGA_USFX_L1_API AEscudo : public AActor
{
	GENERATED_BODY()

private:

	float SaludEs;//Cantidad de salud que soporta el escudo
	float ResistenciaEs;//Determina la resistencia dependiendo de que tipo de proyectil recibio el escudo
	float EnergiaEs;//Cantidad de energia qur puede reducirse con el tiempo o al recibir danio


public:

	//Metodos
	void RecibirDanio(float Danio);
	void RecargarEnergia(float Cantidad);

	FORCEINLINE float GetSaludEs() const { return SaludEs; }
	FORCEINLINE float GetResistenciaEs() const { return ResistenciaEs; }
	FORCEINLINE float GetEnergiaEs() const { return EnergiaEs; }

	FORCEINLINE void SetSaludEs(float _SaludEs) { SaludEs = _SaludEs; }
	FORCEINLINE void SetResistenciaEs(float _ResistenciaEs) { ResistenciaEs = _ResistenciaEs; }
	FORCEINLINE void SetEnergia(float _EnergiaEs) { EnergiaEs = _EnergiaEs; }

public:	
	// Sets default values for this actor's properties
	AEscudo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
