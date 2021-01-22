#pragma once
#include "RobotMap.h"

class Intake {
  public:
    Intake(wml::TalonSrx &intakeMotor, wml::controllers::SmartControllerGroup &_contGroup);

    void Teleop0nUpdate(double dt);
    void Auto0nUpdate(double dt);
    void Test0nUpdate(double dt);

    private: 
			wml::TalonSrx &_intakeMotor;
			wml::controllers::SmartControllerGroup &_contGroup;
      bool IntakeStop = false;
			
			frc::Timer timer;
			double IntakePower = 0;
    };
    
    
    
    