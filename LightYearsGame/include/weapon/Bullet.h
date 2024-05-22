#pragma once
#include "framework/Actor.h"

namespace ly
{
	class Bullet : public Actor
	{

	public:
		Bullet(World* world, Actor* owner, const std::string& texturePath, float speed = 300.f, float damage = 10.f);

		void SetSpeed(float newSpeed);
		void SetDamage(float newDamage);

		virtual void Tick(float deltaTime) override;
		virtual void BeginPlay() override;
	private:
		void Move(float deltaTime);
		Actor* m_Owner;
		float m_Speed;
		float m_Damage;
	};
}