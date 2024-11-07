#include "Firework.h"
#include "Animations.h"

void CFirework::InitAnimations()
{
	auto animation_manager = CGame::GetInstance()->GetService<CAnimations>();
	AddAnimation(DEFAULT_ANI_NAME, animation_manager->Clone("ani-firework"));
	animations.at(DEFAULT_ANI_NAME)->SetIsLooped(false);
}

CFirework::CFirework()
{
	InitAnimations();
}
