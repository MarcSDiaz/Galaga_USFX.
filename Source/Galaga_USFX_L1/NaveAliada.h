// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveAliada.generated.h"

UCLASS()
class GALAGA_USFX_L1_API ANaveAliada : public AActor
{
	GENERATED_BODY()

private:

	FString Nombre;//Nombre de la nave
	FVector Posicion;//Posicion de la nave
	float Salud;//La Salud actual de la nave
	float SaludMaxima;//Indicador de Salud Maxima
	float Velocidad;//Velocidad de movimiento de la nave
	float VelocidadDisparo;//Velocidad de disparo del jugador
	float Experiencia;//Experiencia de la nave
	float TiempoEsperaDisparo;//Tiempo de espera entre disparos de la nave
	float Municion;//Cantidad de municion

public:

	//Metodos
	void MoverIzquierda();
	void MoverDerecha();
	void Disparar();
	void RecibirDanio(float Danio);
	void RecogerPowerUp();
	void RecargarMunicion();
	void ActualizarExperiencia();
	void DestruirNave();

	FORCEINLINE FString GetNombre() const { return Nombre; }
	FORCEINLINE FVector GetPosicion() const { return Posicion; }
	FORCEINLINE float GetSalud() const { return Salud; }
	FORCEINLINE float GetSaludMaxima() const { return SaludMaxima; }
	FORCEINLINE float GetVelocidad() const { return Velocidad; }
	FORCEINLINE float GetVelocidadDisparo() const { return VelocidadDisparo; }
	FORCEINLINE float GetExperiencia() const { return Experiencia; }
	FORCEINLINE float GetTiempoEsperaDisparo() const { return TiempoEsperaDisparo; }
	FORCEINLINE float GetMunicion() const { return Municion; }

	FORCEINLINE void SetNombre(FString _Nombre) { Nombre = _Nombre; }
	FORCEINLINE void SetPosicion(FVector _Posicion) { Posicion = _Posicion; }
	FORCEINLINE void SetSalud(float _Salud) { Salud = _Salud; }
	FORCEINLINE void SetSaludMaxima(float _SaludMaxima) { SaludMaxima = _SaludMaxima; }
	FORCEINLINE void SetVelocidad(float _Velocidad) { Velocidad = _Velocidad; }
	FORCEINLINE void SetVelocidadDisparo(float _VelocidadDisparo) { VelocidadDisparo = _VelocidadDisparo; }
	FORCEINLINE void SetExperiencia(float _Experiencia) { Experiencia = _Experiencia; }
	FORCEINLINE void SetTiempoEsperaDisparo(float _TiempoEsperaDisparo) { TiempoEsperaDisparo = _TiempoEsperaDisparo; }
	FORCEINLINE void SetMunicion(float _Municion) { Municion = _Municion; }

public:
	// Sets default values for this actor's properties
	ANaveAliada();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
