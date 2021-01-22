#include "Intake.h"
#include <iostream>
using namespace wml;
using namespace wml::controllers;


void Intake::Intake(wml::TalonSrx &_intakeMotor, wml::controllers::SmartControllerGroup &_contGroup) {
   
 _intakeMotor.Set(0.5);

 

_IntakeDown.SetTarget();
};

void Intake::auto0nUpdate(double dt) {
  if () {

      _IntakeDown.SetTarget(wml::actuators::kForward);
      _IntakeMotor.Set(1);
      else if () {
          _IntakeDown.SetTarget(wml::actuators::kReverse);
          _IntakeMotor.Set(0);
      }

  }
  
  
  
  

        
    }
    }
    
    
    // _contGroup.GetAxis() * IntakePower;
    // _intakeMotor.Set(1);
    //    _contGroup.GetAxis(TriggerDeadzone) * IntakePower;
//    _intakeMotor.Set(1)

   
   
   
   
//     if (_contGroup.Get(ControlMap::DownIntake, Controller::ONRISE)) {
//         if ()
//         _IntakeDown.SetTarget()




}
   