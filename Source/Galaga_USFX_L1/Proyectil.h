// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Proyectil.generated.h"

UCLASS()
class GALAGA_USFX_L1_API AProyectil : public AActor
{
	GENERATED_BODY()

private:

	float VelocidadP;//Velocidad del proyectil
	float DanioP;//El daño que realiza el proyetil
	float DuracionP;//Tiempo que dura el proyectil al llegar a su destino o hacer impacto
	FVector TrayectoriaP;//La trayectoria que sigue el proyectil al llegar a su objetivo
	FString TipoProyectil;//Indica quien disparo el proyectil si fue la nave enemiga o la nave jugador

public:
	
	//Metodos
	void DestruirProyectil();

	FORCEINLINE float GetVelocidadP() const { return VelocidadP; }
	FORCEINLINE float GetDanioP() const { return DanioP; }
	FORCEINLINE float GetDuracionP() const { return DuracionP; }
	FORCEINLINE FVector GetTrayectoriaP() const { return TrayectoriaP; }
	FORCEINLINE FString GetTipoProyectil() const { return TipoProyectil; }

	FORCEINLINE void SetVelocidadP (float _VelocidadP) { VelocidadP = _VelocidadP; }
	FORCEINLINE void SetDanioP(float _DanioP) { DanioP = _DanioP; }
	FORCEINLINE void SetDuracionP(float _DuracionP) { DuracionP = _DuracionP; }
	FORCEINLINE void SetTrayectoriaP(FVector _TrayectoriaP) { TrayectoriaP = _TrayectoriaP; }
	FORCEINLINE void SetTipoProyectil(FString _TipoProyectil) { TipoProyectil = _TipoProyectil; }


public:	
	// Sets default values for this actor's properties
	AProyectil();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
