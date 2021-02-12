#pragma once 
#include "strategies/StratsIntake.h"
#include "RobotMap.h"

IntakeManualStrategy::IntakeManualStrategy(std::string name, Intake &intake, Controllers &contGroup) : Strategy(), _intake(intake), _contGroup(contGroup) {}

//Controls power in power out
void IntakeManualStrategy::0nUpdate(double dt) {
	double powerIn = fabs(_contGroup.Get(ContolMap::Intake)) > ControlMAp::TriggerDeadzone ? _contGroup.Get(ControlMap::Intake) : 0;
	double powerOut = fabs(_contGroup.Get(ControlMap::Outake)) > ControlMap::TriggerDeadzone ? _contGroup.Get(ControlMap::Outake) : 0;

	if (_contGroup.Get(ControlMap::DeployIntake, wml::controllers::Controller::ONFALL)) {
		_intake.setIntake(IntakeState::DEPLOYED, powerIn - powerOut);
	} else {
		_intake.setIntake(IntakeState::STOWED);
	}
}

// IntakeAutoStrategy::IntakeAutoStrategy(std::) :   {}


// void IntakeAutoStratedy::OnUpdate(double dt) {
// 	double powerIn = ControlMap::IntakeAutoSpeed;

// 	_intake.setIntake(IntakeState::DEPLOYED, powerIn);
// }
