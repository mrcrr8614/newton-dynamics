/* Copyright (c) <2003-2022> <Julio Jerez, Newton Game Dynamics>
* 
* This software is provided 'as-is', without any express or implied
* warranty. In no event will the authors be held liable for any damages
* arising from the use of this software.
* 
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it
* freely, subject to the following restrictions:
* 
* 1. The origin of this software must not be misrepresented; you must not
* claim that you wrote the original software. If you use this software
* in a product, an acknowledgment in the product documentation would be
* appreciated but is not required.
* 
* 2. Altered source versions must be plainly marked as such, and must not be
* misrepresented as being the original software.
* 
* 3. This notice may not be removed or altered from any source distribution.
*/

#ifndef _ND_AGENT_DESCRETE_POLICY_GRADIENT_H__
#define _ND_AGENT_DESCRETE_POLICY_GRADIENT_H__

#include "ndBrainStdafx.h"
#include "ndBrain.h"
#include "ndBrainAgent.h"

class ndBrainAgentDiscretePolicyGradient: public ndBrainAgent
{
	public:
	ndBrainAgentDiscretePolicyGradient(const ndSharedPtr<ndBrain>& actor);
	~ndBrainAgentDiscretePolicyGradient();

	void Step();

	protected:
	void ResetModel();
	void OptimizeStep();
	bool IsTrainer() const;

	bool IsTerminal() const;
	ndBrainFloat CalculateReward();

	void Save(ndBrainSave* const loadSave);

	void InitWeights();
	ndInt32 GetEpisodeFrames() const;
	ndSharedPtr<ndBrain> m_policy;
};

#endif 
