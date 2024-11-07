#include "BigExplosion.h"
#include "Animations.h"

void CBigExplosion::InitAnimations()
{
	auto animation_manager = CGame::GetInstance()->GetService<CAnimations>();
	AddAnimation(DEFAULT_ANI_NAME, animation_manager->Clone("ani-big-explosion"));
	animations.at(DEFAULT_ANI_NAME)->SetIsLooped(false);
}

CBigExplosion::CBigExplosion()
{
	InitAnimations();
}
