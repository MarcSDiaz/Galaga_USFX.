// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

UCLASS()
class GALAGA_USFX_L1_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

private:

	FString NombreE;//Nombre de la NaveEnemiga
	FVector TrayectoriaE;//Trayectoria que sigue la nave para ser eliminada por el jugador
	float SaludE;//La Salud actual de la nave
	float SaludMaximaE;//Indicador de Salud Maxima
	float VelocidadE;//Velocidad de movimiento de la nave
	float VelocidadDisparoE;//Velocidad de disparo de la nave enemiga
	float TiempoEsperaDisparoE;//Tiempo de espera entre disparos de la nave
	float MunicionE;//Cantidad de municion

public:

	//Metodos
	void RecibirDanio(float Danio);
	void DestruirNave();
	void Disparar();
	void DestruirNave();

	FORCEINLINE FString GetNombre() const { return NombreE; }
	FORCEINLINE FVector GetTrayectoriaE() const { return TrayectoriaE; }
	FORCEINLINE float GetSaludE() const { return SaludE; }
	FORCEINLINE float GetSaludMaximaE() const { return SaludMaximaE; }
	FORCEINLINE float GetVelocidadE() const { return VelocidadE; }
	FORCEINLINE float GetVelocidadDisparoE() const { return VelocidadDisparoE; }
	FORCEINLINE float GetTiempoEsperaDisparoE() const { return TiempoEsperaDisparoE; }
	FORCEINLINE float GetMunicionE() const { return MunicionE; }

	FORCEINLINE void SetNombreE(FString _NombreE) { NombreE = _NombreE; }
	FORCEINLINE void SetTrayectoriaE(FVector _TrayectoriaE) { TrayectoriaE = _TrayectoriaE; }
	FORCEINLINE void SetSaludE(float _SaludE) { SaludE = _SaludE; }
	FORCEINLINE void SetSaludMaximaE(float _SaludMaximaE) { SaludMaximaE = _SaludMaximaE; }
	FORCEINLINE void SetVelocidadE(float _VelocidadE) { VelocidadE = _VelocidadE; }
	FORCEINLINE void SetVelocidadDisparoE(float _VelocidadDisparoE) { VelocidadDisparoE = _VelocidadDisparoE; }
	FORCEINLINE void SetTiempoEsperaDisparoE(float _TiempoEsperaDisparoE) { TiempoEsperaDisparoE = _TiempoEsperaDisparoE; }
	FORCEINLINE void SetMunicionE(float _MunicionE) { MunicionE = _MunicionE; }

public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
