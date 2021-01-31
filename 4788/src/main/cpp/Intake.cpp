#include "Intake.h"
#include <iostream>
using namespace wml;
using namespace wml::controllers;


Intake::Intake(wml::TalonSrx &_intakeMotor, wml::controllers::SmartControllerGroup &_contGroup) {}
double intakeSpeed;
double constexpr deadzone = 0.1;

void Intake::Teleop0nUpdate(double dt) {

if(_contGroup.Get(ControlMap::DownIntake, Controllers::ONRISE)) {
	_intakeMotor.SetVoltage(wml::actuators::BinaryActuatorState::kForward);
	} else {
		IntakePower = 0;
	}
		_intakeMotor.Setvoltage(12 * IntakePower);
	}



if() {
	IntakePower = _contGroup.Get(ControlMap::Intake) > ControlMap::TriggerDeadzone ? _contGroup.Get(ControlMap::Intake) :
	_contGroup.Get(ControlMap::Outake) > ControlMap::TriggerDeadzone ? -_contGroup.Get(ControlMap::Outake) : 0;
} else {
	IntakePower = 0;
}





//Teleop
	// if (_contGroup.Get(ControlMap::DownIntake, Controllers::ONRISE)) {
	// 	if ()
	// _IntakeDown.SetTarget(wml::actuators::BinaryActuatorState::kReverse)
	// 	else if () {
	// 		_IntakeDown.SetTarget(wml::actuators::BinaryActuatorState::kForward);




// if(intakeSpeed >= deadzone) {
//   _contGroup.GetAxis(TriggerDeadzone);
// _intakeMotor.Set(1);
// } else {
// 	_IntakeMotor.Set(0);
// }

// }
// }




//Auto
// void Intake::auto0nUpdate(double dt) {
//       if () {
//           _IntakeDown.SetTarget(wml::actuators::kForward);
//           _IntakeMotor.Set(0.5);
//           else if() {
//               _IntakeDown.SetTarget(wml::actuators::kReverse);
//               _IntakeMotor.Set(0);
//           }
//       }
//   }


    
